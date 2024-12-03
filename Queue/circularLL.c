#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *createnode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

void enqueue(struct node **rear,struct node **front,int data)
{
    struct node *newnode = createnode(data);
    struct node *temp = *rear;
    if(*front==NULL)
    {
        *rear=newnode;
        *front=newnode;
        newnode->next=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->next=*front;
        *rear=newnode;
    }
}

void dequeue (struct node **rear,struct node **front)
{
    struct node *temp=*front;
    if(*front==NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Dequeued Element is %d \n",(*front)->data);
        *front=(*front)->next;
        (*rear)->next=*front;
    }
}
void display(struct node *front, struct node *rear)
{
    if (front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    struct node *temp = front;
    printf("Queue Elements: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}
int main()
{
    struct node *rear=NULL,*front=NULL;
    enqueue(&rear,&front,34);
    enqueue(&rear,&front,21);
    enqueue(&rear,&front,12);
    enqueue(&rear,&front,23);
    display(rear,front);
    dequeue(&rear,&front);
    dequeue(&rear,&front);
    display(rear,front);
    enqueue(&rear,&front,45);
    dequeue(&rear,&front);
    display(rear,front);
    return 0;
}