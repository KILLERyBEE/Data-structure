#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char arr[100][50],temp[100];
    printf("Enter the size:");
    scanf("%d",&n);
    printf("\nEnter the array data : ");
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("\nArray is \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }

    printf("\nAfter sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    return 0;
}