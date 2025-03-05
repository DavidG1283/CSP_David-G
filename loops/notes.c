// David Garcia, Templates C 
#include <stdio.h>

int main(void){
//# What is a loop?
//#   # A section of code that repeats multiple times  
//#What are the two types of loops?
///#FOR 
int q;
for(q=0;q<5;q++){
    printf("%d\n", q);
}

//While

int start = 0;
while(start <5){
    printf("Hello!\n");
    start++;
}
 
//#What is iteration
    //repeating something with minor changes
//#What are arrays? 
//A variable holding multiple vaules

//How do you make arays in C?
    // arrays all need to be the same data type
int grades[] = {88, 97, 100, 70, 72, 99, 61};
//printf("%d\n", grades[2]);
// change an item in the array
grades[2] = 95;
printf("%d\n", grades[2]);

int size = sizeof(grades);
//length of items
int length = sizeof(grades)/sizeof(grades[0]);
printf("%d\n", length);
// array with strings in it 
// First brackets sets the length of the list
// second bracket sets the lenght of each string
char movies[][20] = {"Cars", "Treasure planet", "Spiderman", "An american tale", "Marley and me"};
printf("%s\n", movies[2]);
int mlength = sizeof(movies)/sizeof(movies[0]);
// 1. set the data type 2. brackets telling it the length of the list 3. list is surrounded by curly brackets 4. commas between each item
//How do you make for loops in C?
// set the iterator, keeps track of times through the loop (best practice to set as x or 1)
int x;
// in parenthesis (starting point; ending point; what we count by)
for(x=0;x<=10;x+=2){
    printf("%d\n", x);
}
int m;
for(m=0;m<mlength;m++){
    printf("%s\n", movies[m]);

}
//How do you make while loops in C?
int w=100;
while(w>=0){
    printf("%d\n", w);
    w -= 10;
}

return 0;
}