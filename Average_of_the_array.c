#include<stdio.h>
int main()
{
    int n,i ;
    float x,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        x=(sum/n);
    }
    printf("%.2f",x);
    
}