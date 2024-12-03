#include<stdio.h>
int arr[10];
int n=5;
void deleteatbg()
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
}
void deleteatend()
{
    n=n-1;
}
void deleteatpos(int pos)
{
    int i;
    for(i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
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
    printf("Enter array elemnets:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    display();
    deleteatbg();
    display();
    deleteatend();
    display();
    deleteatpos(2);
    display();
    return 0;
}