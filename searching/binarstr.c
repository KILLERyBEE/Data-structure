#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100][100],key[100];
    int i,l=0,m,r,n;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("Enter the strings\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("\nArray is \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    printf("\nEnter the key ");
    scanf("%s",key);
    r=n-1;
    while(l<=r)
    {
        m=(l+r)/2;
        if(strcmp(key,arr[m])==0)
        {
            printf("Found at index %d\t",m);
            break;
        }
        else if (strcmp(key,arr[m])<0)
        {
            r=r-1;
        }
        else
        {
           l=l+1;
        }
    }
    return 0;
}