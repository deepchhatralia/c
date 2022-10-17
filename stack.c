#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    struct Node *top = NULL;
    
    struct Node {
        int data;
        struct Node *next;
    };
    
    void push(int element){
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = element;
        newNode->next = top;
        
        if(top == NULL){
            top = newNode;
            return;
        }
        top = newNode;
    }
    
    void pop(){
        if(top == NULL){
            printf("Stack is empty\n");
            return;
        }
        printf("Pop : %d\n",top->data);
        top = top->next;
    }
    
    void peek(){
        printf("Peek");
    }
    
    void printStack(){
        if(top == NULL){
            printf("Stack is empty\n");
            return;
        }
        struct Node *indexNode = top;
        while(indexNode != NULL){
            printf("%d->",indexNode->data);
            indexNode = indexNode->next;
        }
        printf("NULL\n");
    }
    
    void seek(){
        if(top == NULL){
            printf("Stack is empty\n");
            return;
        }
        printf("Seek : %d\n",top->data);
    }
    
    bool flag = true;
    int choice, element;
    
    while(flag){
        printf("----------\n");
        printf("1) Push\n");
        printf("2) Pop\n");
        printf("3) Seek");
        printf("4) Print");
        printf("5) Exit\n");
        printf("----------\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("\nEnter element : ");
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                seek();
                break;
            case 4:
                printStack();
                break;
            case 5:
                flag = false;
                printf("\nGOODBYE\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
}
