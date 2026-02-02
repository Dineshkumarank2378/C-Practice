#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i;

    printf("Input the number of nodes : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Input data for node %d : ", i);
        scanf("%d", &newNode->data);

        newNode->next = NULL; 
        
        if(head == NULL) {
            head = newNode;   
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;      
        } 
    }

    
    printf("\nData entered in the list :\n");

    temp = head;
    while(temp != NULL) {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
