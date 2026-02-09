#include <stdio.h>
int attendance;
int main(){
printf("Enter attendance percentage:");
scanf("%d", &attendance);
if(attendance > 75 || attendance == 75){
    printf("You are eligible to take the exam!");
}
else{
    printf("You cannot take the exam. Sorry.");
}



}
