#include<stdio.h>
int arr[10];
int n=5;
void insertatbg(int data)
{   
    int i;
    for(i=4;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=data;
    n=n+1;
}

void insertatend(int data)
{
    arr[n]=data;
    n=n+1;
}

void insertatpos(int data,int pos)
{
    int i;
    for(i=n-1;i>pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=data;
    n=n+1;
}

void display()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int i;
    printf("Enter The array Elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    display();
    insertatbg(0);
    display();
    insertatend(7);
    display();
    insertatpos(3,3);
    display();
    return 0;
}