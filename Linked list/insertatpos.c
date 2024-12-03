#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertpos(struct node **head,int data,int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    struct node *temp=*head;
    int i;
    newnode->data=data;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
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
    insertpos(&head,76,3);
    display(head);
    return 0;
}