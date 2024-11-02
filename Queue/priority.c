#include<stdio.h>
#include<stdlib.h>
struct queue 
{
    int data;
    int priority;
    struct queue *next;
}*front,*rear;

struct queue *createn(int data,int priority)
{
    struct queue *newnode = (struct queue *)malloc(sizeof(struct queue));
    newnode->data=data;
    newnode->priority=priority;
    newnode->next= NULL;
}
void enqueue(int data,int priority)
struct queue *newnode = struct 