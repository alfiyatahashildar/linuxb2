#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
    char name[30];
    char id[7];
    int number[10];
    
};
int main()
{
    struct emp *employee;
    printf("etnter details of employees: \n");
    employee=(struct emp*)malloc(4*sizeof(struct emp));
    for(int i=0;i<4;i++)
    {
        scanf("%s",(employee+i)->name);
        scanf("%s",(employee+i)->id);
        scanf("%d",&(employee+i)->number);
    }
    printf("the employee details are:\n");
    for(int i=0;i<4;i++)
    {
        printf("the employee details are:\n");
        printf("%s \n",(employee+i)->name);
        printf("%s \n",(employee+i)->id);
        printf("%d \n",(employee+i)->number);
    }
    return 0;
}
