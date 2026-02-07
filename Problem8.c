#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
     struct student
    {
        char name[50];
        int marks;
    }dk[5];
   // struct student a[5];
    for(int i=0;i<5;i++)
    {
        fgets(dk[i].name,sizeof(dk[i].name),stdin);
        dk[i].name[strcspn(dk[i].name,"\n")]='\0';
        scanf("%d",&(dk[i].marks));
        getchar();
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(dk[i].marks>dk[j].marks)
            {
               int b=dk[i].marks;
               dk[i].marks=dk[j].marks;
               dk[j].marks=b;
               char c[50];
               strcpy(c,dk[i].name);
               strcpy(dk[i].name,dk[j].name);
               strcpy(dk[j].name,c);
            }
        }

    }for(int i=0;i<5;i++)
    {
        printf("%s---%d\n",dk[i].name,dk[i].marks);
    }


}