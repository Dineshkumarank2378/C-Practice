#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     //typedef
      struct car
    {
        int id;
        char model[20];
        int rent;
    } dk[3];
   // dk kk;
    int a;
    printf("NO OF DAYS:");
    scanf("%d",&a);
    for(int i=0;i<3;i++)
    {
        scanf("%d",&(dk[i].id));
        getchar();
        fgets(dk[i].model,sizeof(dk[1].model),stdin);
        dk[i].model[strcspn(dk[i].model,"\n")]='\0';
        scanf("%d",&(dk[i].rent));
        getchar();
    }for(int i=0;i<3;i++)
    {
        printf("ID:%d RENT:%d\n",dk[i].id,((dk[i].rent)*a));
    }
}