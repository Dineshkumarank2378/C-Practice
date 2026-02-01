#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    typedef struct employee
    {
        int id;
        char name[50];
        int salary;
    } dk;
    dk *dinesh=(dk *)malloc(3*(sizeof(dk)));
    for(int i=0;i<3;i++)
    {
        scanf("%d",&(dinesh+i)->id);
        getchar();
        fgets((dinesh+i)->name,sizeof((dinesh+i)->name),stdin);
        (dinesh+i)->name[strcspn((dinesh+i)->name,"\n")]='\0';
        scanf("%d",&(dinesh+i)->salary);
        getchar();
    }if((dinesh->salary>(dinesh+1)->salary)&&(dinesh->salary>(dinesh+2)->salary))
    {
        printf("%d\n%s\n%d",dinesh->id,dinesh->name,dinesh->salary);
    }
    else if(((dinesh+1)->salary>(dinesh+2)->salary)&&((dinesh+1)->salary>(dinesh)->salary))
    {
        printf("%d\n%s\n%d",(dinesh+1)->id,(dinesh+1)->name,(dinesh+1)->salary);
    }else
    printf("%d\n%s\n%d",(dinesh+2)->id,(dinesh+2)->name,(dinesh+2)->salary);
}