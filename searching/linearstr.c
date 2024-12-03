#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100][100],key[100];
    int i,n,found;
    printf("Enter The size ");
    scanf("%d",&n);
    printf("Enter array of string \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("Array of string is \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    printf("\nEnter the string to search\n");
    scanf("%s",key);
    for(i=0;i<n;i++)
    {
        if(strcmp(arr[i],key)==0)
        {
            printf("String found at index %d",i);
            found=0;
            break;
        }
        else
        {
            found=1;
        }
    }
    if(found==1)
    {
        printf("\nString not found !");
    }
    return 0;
}