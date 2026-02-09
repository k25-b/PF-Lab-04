#include <stdio.h>
int total_bill, discount, new_bill;
int main(){
    printf("Enter total bill: \n");
    scanf("%d", &total_bill);
    

    if (total_bill > 4999){
        discount = 20;
        printf("You get a %d%% discount\n", discount);
    }
    else if (total_bill >2999 && total_bill < 5000){
        discount = 10;
        printf("You get a %d%% discount\n", discount);
    }
    else{
        discount = 0;
        printf("You get a %d%% discount\n", discount);
    }
    new_bill = total_bill * (100-discount)/100;
    printf("New bill: %d", new_bill);
}
