 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int m,a,c=0,x=0,n,i,k;
     scanf("%d",&n);
     k=n;
     i=n;
     while(n>0)
     {
         m=n%10;
         c++;
         n=n/10;
     }
     while(k>0)
     {
         m=k%10;
         k=k/10;
         a=pow(m,c);
         x+=a;
         c--;
     }
     if(i==x)
     printf("True");
     else 
     printf("False");
 }