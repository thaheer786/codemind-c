 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int n,i,sum1=0,sum2=0,diff;
     scanf("%d",&n);
     int arr[n];
     for(i=0;i<n;i++)
     {
          scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)
     {
        if(arr[i]%2==0)
        sum1+=arr[i];
     }
     for(i=0;i<n;i++)
     {
        if(arr[i]%2==1)
        sum2+=arr[i];
     }
     diff=abs(sum2-sum1);
     printf("%d",diff);
 }