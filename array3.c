//Find the lowest ages among the different ages

#include<stdio.h>

int main(){

int ages[]={23,65,12,87,45,89,34,19,45};
int i;

int length=sizeof(ages)/sizeof(ages[0]);

int lowest_age=ages[0];

for(i=0;i<length;i++){

    if (lowest_age>ages[i])
    {
        lowest_age=ages[i];

    }
}
printf("Lowest Age is %d\n",lowest_age);
 return 0;
}
