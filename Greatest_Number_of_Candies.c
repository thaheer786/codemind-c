#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    int v=arr[0];
    for(int i=0;i<n;i++)
    {
        if(v<arr[i])
        {
            v=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if((v-arr[i])>b)
        printf("False ");
        else 
        printf("True ");
    }
    
}