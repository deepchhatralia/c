// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    bool flag = true;
    int choice, elementData;
    struct Node *head = NULL;
    
    struct Node {
        int data;
        struct Node *next;
    };
    
    void add(int data){
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        
        if(head == NULL){
            head = newNode;
            return;
        }
        
        struct Node *indexNode = head;
        while(indexNode->next != NULL){
            indexNode = indexNode->next;
        }
        indexNode->next = newNode;
    }
    
    void addAtFirst(int data){
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    void printLL(){
        if(head == NULL){
            printf("Linked list is empty\n");
            return;
        }
        
        struct Node *indexNode = head;
        
        while(indexNode != NULL){
            printf("%d->",indexNode->data);
            indexNode = indexNode->next;
        }
        printf("NULL\n");
    }

    while(flag){
        printf("--------------------\n");
        printf("1) Add element\n");
        printf("2) Add at first\n");
        printf("3) Print Linked List\n");
        printf("4) Exit\n");
        printf("--------------------\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Enter data : ");
                scanf("%d",&elementData);
                add(elementData);
                break;
            case 2:
                printf("Enter data : ");
                scanf("%d",&elementData);
                addAtFirst(elementData);
                break;
            case 3:
                printLL();
                break;
            case 4:
                flag = false;
                printf("GOODBYE\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
