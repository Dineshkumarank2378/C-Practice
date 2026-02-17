#include<stdio.h>//insert new head
#include<stdlib.h>
int main()
{
    struct singley
    {
        int node;
        struct singley* next;
    };
    int b=0;
    struct singley *head=NULL,*temp,*newnode;
    //dk.head=NULL;
    scanf("%d",&b);

    for(int i=0;i<b;i++)
    { 
        newnode=(struct singley*)malloc(sizeof(struct singley));
         scanf("%d",&newnode->node);
        newnode->next=NULL;
        if(head==NULL)
        {
           head=newnode;
           temp=newnode;   
        }
        else
        { 
           temp->next=newnode;
           temp=newnode;
        }
    }printf("enter the new head");
     newnode=(struct singley*)malloc(sizeof(struct singley));
    scanf("%d",&newnode->node);
    newnode->next=head;
    head=newnode;
     
     temp=head;
    while(temp!=NULL)
        {
            printf("%d",temp->node);
            temp=temp->next;
        }
}