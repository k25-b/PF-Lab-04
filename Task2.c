#include <stdio.h>
int units_used;
int main(){
printf("Enter the electricity units used:");
scanf("%d", &units_used);
if(units_used <101){
    printf("Low Usage!");
}
else if(units_used <300 && units_used >100){
    printf("Medium Usage!");
}
else if(units_used > 299){
    printf("High Usage!");
}
else{
    printf("Error!");
}


}
