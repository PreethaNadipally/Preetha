#include <stdio.h>
main()
{
int n,index,arr1[100],temp;
scanf("%d",&n);
for(index=0;index<n;index++)
  scanf("%d",&arr1 [index]);
for(index=0;index<n;index++)
{
  temp=arr1[index];
  arr1[index]=arr1[n-1-index];
  arr1[n-1-index]=temp;
}
   printf("%d",arr1[index]);
}
