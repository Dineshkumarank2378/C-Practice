#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    typedef struct books
    {
        char tittle[20];
        char author[30];
        int price;
    } dk;
    dk * dinesh[3] ,* kk[3]; 
    dinesh[3]=(dk *)malloc((sizeof(dk)));
   // kk=dinesh;
    for(int i=0;i<3;i++){
        fgets(dinesh->tittle[i],sizeof(dinesh->tittle[i]),stdin);
        dinesh->tittle[strcspn(dinesh->tittle[i],"\n")]='\0';
        fgets(dinesh->author[i],sizeof(dinesh->author[i]),stdin);
        dinesh->author[strcspn(dinesh->author[i],"\n")]='\0';
        scanf("%d",&dinesh->price[i]);
        getchar();
   // dinesh=dinesh+1;
    }
    for(int i=0;i<3;i++){
        printf("%s\n",dinesh->tittle[i]);
        printf("%s\n",dinesh->author[i]);
        printf("%s\n",dinesh->price[i]);
        //kk=kk+1;
    }
    
}