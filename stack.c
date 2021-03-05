#include <stdio.h>

struct node{

int data;

struct node *link;

};

typedef struct node ll;

ll *first=0, *temp, *temp2, *temp3, *temp4; int ch; int size; int pos;

int main()

{

do

{

menu();

printf("Enter your choice \n");

scanf("%d",&ch);

switch(ch)

{

case 1: insertAtEnd(); break;

case 2: insertAtPos();break;

case 3: print(); break;

case 4: insertAtbig(); break;

case 5: printsize(); break;

case 6: exit(1);

default: printf("Wrong choice choice 1 to 4");

}

}while(ch!=5);

return 0;

}

void insertAtEnd(){

if(first==NULL){

first = (ll*)malloc(sizeof(ll));

printf("Enter Data ");

scanf("%d",&first->data);

first->link = NULL;
++size;

printf("inserted At End");

return;

}

temp = first ;

while(temp->link != NULL)

{

temp=temp->link;

}

temp2 = (ll*)malloc(sizeof(ll)); // New Last Node

printf("Enter Data ");

scanf("%d",&temp2->data);

temp2->link = NULL; // NULL because it is going to be Last Node

temp->link=temp2;
++size;

}
void insertAtPos()
{
    if(first==NULL)
    {
        insertAtEnd();
    }
   printf("enter the position:\n");
   scanf("%d",&pos);
   //check fir pos validity
   if ((pos <= 0) && (pos > (size+2)))
   {
       printf("invalid position");
       return;
       if(pos==1)
       {
           insertAtbig();
       }
   }
   temp=first;
   for(int i=0;i<pos-2;i++) //at the end of this loop temp is at pos-1
   {
       temp=temp->link;
   }
       //create new Node
       temp3=(ll*)malloc(sizeof(ll));
       printf("enter the data");
       scanf("%d",&temp3->data);
       temp3->link=temp->link;
       temp->link=temp3;
       printf("inserted node at %d",pos);
     
}
void printsize()
{
    printf(" size is %d: \n",size);
}
//for inserting at start
void insertAtbig()
{
    //below code will execute only linked list not there
    if(first==NULL)
    {
        first=(ll*)malloc(sizeof(ll));
        printf("enter the date");
        scanf("%d",&first->data); //www.onlinegdb.com/online_c_compiler#debug_window_breakpoints
        printf("first node created \n");
    
    }
    else
    {
        temp4=(ll*)malloc(sizeof(ll));
        printf("enter the data");
        scanf("%d",&temp4->data);
        temp4->link=first;
        first=temp4;
        printf("node inserted at begining");
    }
}

void print()

{

temp = first;

while(temp!=NULL)

{

printf("[%d %u]",temp->data,temp->link);

temp = temp ->link;

}
