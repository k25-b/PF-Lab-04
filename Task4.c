#include <stdio.h>
#include <string.h>
int password = 1234;
int input_password;
char input_username[20];
char username[] = "admin";

int main(){
    printf("Enter the username: ");
    scanf("%s",input_username);
    if(strcmp(username, input_username) == 0){
        printf("Enter the password: ");
        scanf("%d", &input_password);
        if(input_password == password){
            printf("You are authorized to login!");
        }
        else{
            printf("Wrong password!");
        }
    }
    else{
        printf("Wrong username!");
    }

}
