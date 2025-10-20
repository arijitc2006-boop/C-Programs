//Skip the negative values and stop the loop completely if we find zero.

#include<stdio.h>

int main(){

int arr[]={10,9,-67,45,-43,60,0};
int length= sizeof(arr) / sizeof(arr[0]);
int i;
for(i=0;i<length;i++){
  if (arr[i]<0){
    continue;
  }
  if(arr[i]==0){
    break;
  }
  printf("%4d\n",arr[i]);
}
return 0;
}