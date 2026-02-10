#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    struct doubly
    {
         struct doubly* before;
         int a;
         struct doubly* after;
    };
    struct doubly *head=NULL,*newnode=NULL,*temp=NULL;
    for(int i=0;i<5;i++)
    {
        newnode=(struct doubly *)malloc(sizeof( struct doubly));
        newnode->before=temp;
        scanf("%d",&newnode->a);
        newnode->after=NULL;
        if(head==NULL)
        {
        head=newnode;
        temp=head;
        }
      else
        {
        temp->after=newnode;
        newnode->before=temp;
        temp=newnode;
        }
    }
    
    temp=head;
    while(temp->after!=NULL)
    {
        printf("%d",temp->a);
        temp=temp->after;
    } printf("%d",temp->a);  
     printf("\n-------\n");
    temp=newnode;
      while(temp->before!=NULL)
    {
        printf("%d",temp->a);
        temp=temp->before;
    } printf("%d",temp->a);

}