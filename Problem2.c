#include<stdio.h>//total number of odd numbers using recursion
int sum;
void odd(int a[],int n,int i)
{
   if(n==i)
   {
    return;
   }
   if((a[i]%2)==1)
   {
      sum=a[i]+sum;
   }
   if(i<n)
   {
    i++;
     odd(a,n,i);
   } 
}
int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     odd(a,n,0);
     printf("%d",sum);
}