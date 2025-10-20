#include<stdio.h>

int main(){

int arr[50];
int n;

printf("How many number to enter:");
scanf("%d",&n);

printf("\nEnter value one by one:\n");
for(int k=0;k<n;k++)
scanf("%d",&arr[k]);

for(int i=0, j=n-1;i<j;i++,j--)
{
  int temp = arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

printf("\nReverse number are:\n");

for(int m=0;m<n;m++){
  printf("%d  ",arr[m]);
}

return 0;
}






