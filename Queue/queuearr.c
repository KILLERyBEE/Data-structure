#include<stdio.h>
#define size 4
int front=-1,rear=-1;
int queue[size];

void enqueue(int data)
{
    if(rear == size-1)
    {
        printf("Queue Is Full\n");
    }
    else
    {
        rear = rear + 1;
        queue[rear]=data;
        printf("Data Inserted\n");
    }
    if(front == -1)
    {
        front =0;
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("\n%d Is Dequeued\n",queue[front]);
        front = front + 1;
    }
}

void display()
{
    if(front==-1)
    {
        printf("Queue is Empty\n");   
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(12);
    enqueue(69);
    enqueue(64);
    enqueue(56);
    display();
    dequeue();
    enqueue(89);
    display();
    dequeue();
    display();
    return 0;
}