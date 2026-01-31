#include<stdio.h>
#include<string.h>
int main()

{
     struct books
    {
        char author[20];
        char tittle[20];
        int price;
    }  dk[3];
    for(int i=0;i<3;i++)
    {
        fgets(dk[i].author,sizeof(dk[1].author),stdin);
        dk[i].author[strcspn(dk[i].author,"\n")]='\0';
        fgets(dk[i].tittle,sizeof(dk[1].tittle),stdin);
        dk[i].tittle[strcspn(dk[i].tittle,"\n")]='\0';
        scanf("%d",&dk[i].price);
        getchar();

    }if(dk[0].price>dk[1].price)
    {
        if(dk[0].price>dk[2].price)
        {
            printf("%s\n%s\n%d",dk[0].author,dk[0].tittle,dk[0].price);
        }
        else
          printf("%s\n%s\n%d",dk[2].author,dk[2].tittle,dk[2].price);
    }else
     if(dk[1].price>dk[2].price)
     {
        printf("%s\n%s\n%d",dk[1].author,dk[1].tittle,dk[1].price);
     }
     else
          printf("%s\n%s\n%d",dk[2].author,dk[2].tittle,dk[2].price);
}