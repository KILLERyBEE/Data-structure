#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void deletepos(struct node **head,int pos)
{
    struct node *temp=*head;
    struct node *temp2;
    int i;
    if(*head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp2 = temp -> next;
        temp->next=temp->next->next;
        free(temp2);
    }
}

void append(struct node **head,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        struct node *temp = *head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *head=NULL;
    int i,n,data;
    printf("Enter SIze : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter data ");
        scanf("%d",&data);
        append(&head,data);
    }
    display(head);
    deletepos(&head,2);
    display(head);
    return 0;
}