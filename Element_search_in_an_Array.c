 #include<stdio.h>
 int main()
 {
     int n,i,c=0;
     scanf("%d",&n);
     int arr[n];
     for(i=0;i<n;i++)
     {
          scanf("%d",&arr[i]);
     }
     int m;
     scanf("%d",&m);
     for(i=0;i<n;i++)
     {
         if(arr[i]==m)
         c++;
     }
     if(c>0)
     printf("True");
     else
     printf("False");
 }