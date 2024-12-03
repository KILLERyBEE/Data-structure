#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int data;
    int priority;
    struct queue *next;
}*front = NULL, *rear = NULL;

struct queue *createn(int data, int priority)
{
    struct queue *newnode = (struct queue *)malloc(sizeof(struct queue));
    newnode->data = data;
    newnode->priority = priority;
    newnode->next = NULL;
    return newnode; 
}

void enqueue(int data, int priority)
{
    struct queue *newnode = createn(data, priority);
    
    if (front == NULL) 
    {
        front = rear = newnode;
    }
    else if (newnode->priority < front->priority)
    {
        newnode->next = front;
        front = newnode;
    }
    else
    {
        struct queue *temp = front;
        while (temp->next != NULL && temp->next->priority <= newnode->priority)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

        if (temp == rear) 
        {
            rear = newnode;
        }
    }
}

void display()
{
    struct queue *temp = front;
    if (temp == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nPriority Queue:\n");
        while (temp != NULL)
        {
            printf("Data: %d, Priority: %d\n", temp->data, temp->priority);
            temp = temp->next;
        }
    }
}

int main()
{
    enqueue(32, 1);
    enqueue(21, 0);
    enqueue(26, 2);
    enqueue(12,-1);
    display();
    return 0;
}
