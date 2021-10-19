#include<stdio.h>
int main()
{
 int n,i,j,k;
 printf("Enter the number of elements:");
 scanf("%li",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  printf("a[%d]:",i);
  scanf("%li",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]==a[j])
   {
       for(k=j;k<n;k++)
       {
           a[k]=a[k+1];
       }
    j--;
    n--;

   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("%li ",a[i]);
 }
 return 0;
}
