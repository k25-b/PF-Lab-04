#include <stdio.h>
int percentage = 0;
int sub1, sub2, sub3, sub4, sub5;
int main(){
    printf("Enter the marks of the 5 subjects: \n");
    scanf("%d", &sub1);
    scanf("%d", &sub2);
    scanf("%d", &sub3);
    scanf("%d", &sub4);
    scanf("%d", &sub5);
    percentage = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
    printf("Your percentage is %d%% \n", percentage);
    if (percentage > 84){
        printf("Grade: A");
    }
    else if (percentage > 69 && percentage < 85){
        printf("Grade: B");
    }
    else if (percentage >49 && percentage < 70){
        printf("Grade: C");
    }
    else {
        printf("Fail!");
    }
    }
