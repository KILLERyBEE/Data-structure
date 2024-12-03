#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100][100],temp[100],key[100];
    int i,j,n;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("Enter Strings \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("Array data is \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        strcpy(key,arr[i+1]);
        for(j=i;j>=0&&strcmp(key,arr[j])<0;j--)
        {
            strcpy(arr[j+1],arr[j]);
        }
        strcpy(arr[j+1],key);
    }
    printf("\nArray data After insertion sort is \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    return 0;  
}