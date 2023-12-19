#include<stdio.h>
int main()
{
    int i,n,sum=0,x,c=0;
    scanf("%d",&n);
    int arr[n];
     for(i=0;i<n;i++)  
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
        x=(sum/n);
        for(i=0;i<n;i++)
        {
        if(x==arr[i])
        c++;
        }
        if(c>0)
        printf("True");
        else 
        printf("False");
}