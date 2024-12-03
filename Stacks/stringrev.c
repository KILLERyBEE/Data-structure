#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 5

int top = -1;
char arr[size];

void push (char data)
{
    if(top>size)
    {
        printf("stack Overflow\n");
    }
    else{
        top = top+1;
        arr[top]=data;
    }

}

char pop()
{
    char temp;
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else{
        
        temp=arr[top];
        top=top-1;
    }
    return temp;
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        
        for(int i = top; i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }

    }
}
int main ()
{
    char str[100];
    int l,i;
    printf("Enter The string");
    scanf("%s",str);
    l = strlen(str);
    for(i = 0; i<l; i++)
    {
        push(str[i]);
    }
    printf("\nRev String\n");
    for(i = 0;i<l;i++)
    {
        printf("%c",pop());
    }
    return 0;
}