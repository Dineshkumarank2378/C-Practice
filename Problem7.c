#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct singly
    {
        int a;
        struct singly *next;
    };
    struct singly *head=NULL,*temp=NULL,*newnode=NULL;
    
    for(int i=0;i<5;i++)
    {
       newnode=(struct singly *)malloc(sizeof( struct singly));
       scanf("%d",&newnode->a);
       newnode->next=NULL;
       if(head==NULL)
       {
         head=newnode;
         temp=head;
       }
       else
        { temp->next=newnode;
           temp=newnode;
        }//temp->next=head;

    } temp=head;
     while(temp!=NULL)
     {
        printf("%d\n",temp->a);
        temp=temp->next;
     }

}