#include<stdio.h>
#define size 5
int front=-1,rear=-1;
int queue[size];

void enqueue(int data)
{
    
    if((front == -1) && (rear == -1))
    {
        rear = 0;
        front = 0;
        queue[rear]=data;
    }
    else if((rear+1)%size == front)
    {
        printf("Queue Is FULL\n");
    }
    else
    {
        rear = (rear+1)%size;
        queue[rear]=data;
    }
    
}

void dequeue()
{
    if((front == -1) && (rear == -1))
    {
        printf("Queue is Empty\n");
    }
    else if(front==rear)
    {
        printf("\n%d Deueued\n",queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d Deueued\n",queue[front]);
        front = (front+1)%size;
    }

}

void display()
{
    if(front == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        int i = front;
        printf("\nQueue elements: ");
        while(1)
        {
            printf("%d\t", queue[i]);
            if(i == rear)
                break;
            i = (i + 1) % size; // Move to the next index in a circular manner
        }
        printf("\n");
    }
}


int main()
{
    enqueue(34);
    enqueue(69);
    enqueue(56);
    enqueue(64);
    enqueue(63);
    display();
    enqueue(32);
    dequeue();
    display();
    enqueue(331);
    display();
    return 0;

}