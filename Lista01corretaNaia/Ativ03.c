#include <stdio.h>

int main(){
int num;
printf("Digite um numero para saber se e par ou impar: ");
scanf("%d", &num);
if (num % 2 == 0)
    printf("O numero %d e par", num);
    else
    printf("O numero %d e impar", num);
return 0;
}
