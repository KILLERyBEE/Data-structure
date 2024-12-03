#include<stdio.h>
#include<string.h>
void rev(char str[100],int n)
{
    if(n<0)
    {
        return;
    }
    printf("%c",str[n]);
    rev(str,n-1);
}

int main()
{
    char str[100];
    int length;
    printf("ENter the string");
    scanf("%s",str);
    printf("\n");
    length=strlen(str);
    printf("%s\n",str);
    rev(str,length-1);
    return 0;
    
}