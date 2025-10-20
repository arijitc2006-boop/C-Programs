//"Arz kya hain" song by C code
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>


int main(){
   
   
  
   if(fork()==0){
      printf("Hello!");
   }
   else{
    wait(NULL);
    sleep(10);
    printf("\nWelcome");
    if(fork()==0){
        sleep(10);
        printf("\nC Class.");
    }
    else{
        wait(NULL);
        sleep(10);
        printf("The END.\n");
    }
   }
      
      8
    
   

    return 0;
}



