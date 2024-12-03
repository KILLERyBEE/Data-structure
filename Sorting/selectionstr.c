#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100][100],temp[100];
    int n,i,j;
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
        for(j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);   
            }
        }
    }
    printf("\nArray data After selection sort is \n");
    for(i=0;i<n;i++)
    {
        printf("%s\t",arr[i]);
    }
    return 0;
}