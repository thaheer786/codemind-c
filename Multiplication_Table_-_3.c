 #include<stdio.h>
 int main()
 {
     int i,a,b,n;
     scanf("%d%d%d",&a,&b,&n);
     for(i=b;i<=n;i++)
     {
         printf("%d x %d = %d
",a,i,a*i);
     }
 }