#include <stdio.h>
#include <math.h>
int option;
float num1, num2, result;
int main(void) {
    printf("This is a calculator, please select an otion \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n");
    printf(" 5.Square \n 6.Cube \n 7.Sqrt \n 8.Power \n 9.Absolute Value\n");
    printf("Option: ");
    scanf("%d", &option);
    if (option <5 || option == 8) {
        printf("Please enter number 1: ");
        scanf("%f", &num1);
        printf("Please enter number 2: ");
        scanf("%f", &num2);

    }
    else {
        printf("Please enter a number: ");
        scanf("%f", &num1);
    }
    switch (option) {
        case 1:
            result = num1 + num2;
            printf("The result is %.2f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("The result is %.2f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("The result is %.2f", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Division cannot be performed by 0");
                break;
            }
            result = num1 / num2;
            printf("The result is %.2f", result);
            break;
        case 5:
            result = num1 * num1;
            printf("The result is %.2f", result);
            break;
        case 6:
            result = num1*num1*num1;
            printf("The result is %.2f", result);
            break;
        case 7:
            if (num1 < 0) {
                printf("Please enter a positive number!");
                break;
            }
            result = sqrt(num1);
            printf("The result is %.2f", result);
            break;
        case 8:
            result = pow(num1, num2);
            printf("The result is %.2f", result);
            break;
        case 9:
            result = fabs(num1);
            printf("The result is %.2f", result);
            break;
        default:
            printf("Please enter a valid option!");
            break;
        }

}
