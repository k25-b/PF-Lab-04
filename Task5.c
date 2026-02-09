#include <stdio.h>
#include <string.h>
int balance = 12045;
int option, withdrawal_amount, deposit_amount;
int main(){
    printf("This is an ATM:  \n 1. Balance Inquiry \n 2. Cash Withdrawal \n 3. Deposit \n 4. Exit \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Your balance is Rs %d", balance);
        break;
    case 2:
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &withdrawal_amount);
        if(withdrawal_amount > balance){
            printf("You do not have sufficient balance!");
            break;}
        else{
            balance = balance - withdrawal_amount;
            printf("Withdrawal successful! \nCurrent balance is Rs %d ", balance);
        break;
        }
    case 3:
        printf("Enter the amount to deposit: ");
        scanf("%d", &deposit_amount);
        balance = balance + deposit_amount;
        printf("Your new balance is Rs %d", balance);
        break;

        
    case 4:
        printf("Exit successful!");
        break;
    }
}
