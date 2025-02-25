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

    printf("how many siblings you have\n");
    scanf("%d", &num);
//12. #How do you write elif/ else if statements in C?
if(num == 0){
    printf("You are the only child\n");
}else if(num <= 2){
    printf("You have a couple siblings\n");
}else if(num <= 5){
    printf("You have a few siblings\n");
}else{
    printf("you have a lot of siblings\n");
}
//13. #How do you write the 3 logical operators in C?
// && = and 
// || = or
// ! = not

if(num <10 && num >5){
    printf("%d is a large single number\n", num);
}else if(num == 7 || num == 13){
    printf("%d it is an unlucky number\n", num);
}else if(!(num > 10)){
    printf("%d is a big number", num);
}else{
    printf("You typed in %d\n", num);
}
    return 0;
}