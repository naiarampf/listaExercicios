#include <stdio.h>

int main(){
float value;
int state;
printf("Type the product value: ");
scanf("%f", &value);
printf("Type the state, typing 1 for MG, 2 for SP, 3 for RJ, 4 for MS: ");
scanf("%d", &state);
if (state == 1 || state == 2 || state == 3 || state == 4){
    if(state == 1){
        float tax = (value/100) * 7, price = value + tax;
        printf("The product value is: %.2f\n", value);
        printf("The tax for this state is 7 percent\n");
        printf("Tax value: %.2f\n", tax);
        printf("Final price: %.2f", price);
    }
    if(state == 2){
        float tax = (value/100) * 12, price = value + tax;
        printf("The product value is: %.2f\n", value);
        printf("The tax for this state is 12 percent\n");
        printf("Tax value: %.2f\n", tax);
        printf("Final price: %.2f", price);
    }
    if(state == 3){
        float tax = (value/100) * 15, price = value + tax;
        printf("The product value is: %.2f\n", value);
        printf("The tax for this state is 15 percent\n");
        printf("Tax value: %.2f\n", tax);
        printf("Final price: %.2f", price);
    }
    if(state == 4){
        float tax = (value/100) * 8, price = value + tax;
        printf("The product value is: %.2f\n", value);
        printf("The tax for this state is 8 percent\n");
        printf("Tax value: %.2f\n", tax);
        printf("Final price: %.2f", price);
    }
} else {
    printf("Error. Type one valid state number (1 for MG, 2 for SP, 3 for RJ, 4 for MS)");
}
return 0;
}
