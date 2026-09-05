#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main(){
    struct Node* head=NULL ,*new,*temp;
    new=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data : ") ;
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    printf("Node inserted at the beginning\n");
return 0;
}