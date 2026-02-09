#include <stdio.h>
int number;
int main(){
printf("Enter a number: ");
scanf("%d", &number);
if(number >0){
    printf("Positive Number!");
}
else if(number < 0){
    printf("Negative Number!");
}
else{
    printf("It's Zero!");
}


}
