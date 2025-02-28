// David Garcia, Conditionals notes
#include <stdio.h>
#include <string.h> // needed to compare strings
char name[]= "david";
int num;
int main(void){
   //10. #How do you write an if statement in C?
   if(strcmp(name, "david") == 0){ //indentation dont matter, as long as it is inside the curly brakets it works
    printf("Hello david, welcome to class\n");
   
//11. #How do you write else statements in C?
}else{
    printf("Hello %s, welcome to class", name);
    }

    printf("how old are you \n");
    scanf("%d", &num);
//12. #How do you write elif/ else if statements in C?
if(num >15){
    printf("You can get a drivers license\n");
}if(num > 18){
    printf("You can vote\n");
}if(num >14){
    printf("You can get a learners permit\n");
}if(num >4){
    printf("You can start going to shcool\n");
}else{
    printf("You are so young\n");
}
    return 0;
}