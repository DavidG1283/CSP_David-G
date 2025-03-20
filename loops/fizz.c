#include <stdio.h>
int x = 1;
int main(void){

while(x < 51){
    if (x % 3 == 0 && x % 5 == 0){
        printf("FizzBuzz\n");
    }else if (x % 3 == 0){
        printf("Fizz\n"); 
    }else if (x % 5 == 0){
        printf("Buzz\n");
    }else{
        printf("%d\n",x);
    }
x+=1;





};

     return 0;   
    }

