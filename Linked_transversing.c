#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp;
    head = 0;
    int choice,count=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==NULL){
        printf("Do u want to continue [0,1]:");
        scanf("%d",&choice);
        head=temp=newnode;}
        else
        {
            temp->next=newnode;
            temp=newnode;
             printf("Do u want to continue [0,1]:");
            scanf("%d",&choice);
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    temp=head;
    printf("**************** LINKED LIST *********************\n");
    while(temp!=NULL)
    {
        printf("%d\t%p\n",temp->data,temp->next);
        temp=temp->next;
    }
    printf("Length of Linked list is :%d",count);
    return 0;
}
