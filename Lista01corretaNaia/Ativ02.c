#include <stdio.h>

int main(){
int num1, num2;
printf("Digite dois numeros para saber qual é maior , menor ou se são iguais.\n");
printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero para comparar: ");
scanf("%d", &num2);
if (num1 == num2)
    printf("Os dois numeros, %d e %d sao iguais, num1, num2);
    else if (num1 > num2)
        printf("O primeiro numero %d e maior que o segundo numero %d ", num1, num2);
    else
        printf("O segundo numero  %d e maior que o primeiro numero %d ", num2, num1);
return 0;
}
