#include<stdio.h>

int main()
{
  int a[]={10,20,5,2,3,1,70,30,97};
  int n=9;
  int j=0;
  int k=n-1;
  while(j<k)
  {
    while(a[j]%2==0)
    {
      j++;
    }
    
    while(a[k]%2 !=0)
    {
      k--;    
    }
    
    if(j<k)
    {
      int temp=a[j];
      a[j]=a[k];
      a[k]=temp;
    }
  
  } 
  
  printf("\nAfter re-arrange elements in array are: \n");
  for(int i=0;i<n;i++)
   {
     printf("%d  ",a[i]);
   }
  
return 0;
}
