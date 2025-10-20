#include<stdio.h>
#define SIZE -9999

int main(){

int arr[100];
int val;
//int n;

//printf("How many number to enter:");
//scanf("%d",&n);

printf("\nEnter values one by one, Max: 100 (-9999 to quit):\n");
scanf("%d",&val);
int p=0;
while(val!=SIZE){
  arr[p++]=val;
  if(p==sizeof(arr)/sizeof(arr[0]))
    break;
    
  scanf("%d",&val);
}

for(int i=0, j=p-1;i<j;i++,j--)
{
  int temp = arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

printf("\nReverse number are:\n");

for(int m=0;m<p;m++){
  printf("%d  ",arr[m]);
}

return 0;
}






