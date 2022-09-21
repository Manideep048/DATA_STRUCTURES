
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp,*ptr;
    head = 0;
    int choice,count=0,val,k=0;
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
            count++;
        }
    }
    printf("Enter the element to be search:");
    scanf("%d",&val);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==val)
        {
            printf("%d element is present at %d",val,k);
            break;
        }
        else{
        ptr=ptr->next;
        k++;}
    }
    temp=head;
    printf("\n**************** LINKED LIST *********************\n");
    while(temp!=NULL)
    {
        printf("%d\t%p\n",temp->data,temp->next);
        temp=temp->next;
    }
    if(k==count+1)
    printf("\nElement is not present");
    return 0;
}



