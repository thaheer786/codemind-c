#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b;
    int c=0;
    for(int i=0;i<n;i++)
    {
        b=arr[i];
        c=0;
        for(int j=0;j<n;j++)
        {
            if(b>arr[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}