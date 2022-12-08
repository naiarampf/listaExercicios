#include <stdio.h>

int main(){
int num;
int num1, num2, add = 0, sub = 0, mult = 0;
float div = 0;
printf(" Menu\n\n 1 - Adicao\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n\n");
printf("Selecione uma operacao: ");
scanf("%d", &num);

switch(num){
    case 1:
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        add = num1 + num2;
        printf("Adicao dos numeros %d + %d e: %d.", num1, num2, add);
        break;
    case 2:
        printf("Digite um numero");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        sub = num1 - num2;
        printf("Subtracao dos numeros %d - %d e: %d.", num1, num2, sub);
        break;
    case 3:
        printf("Digite um numero: ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        mult = num1 * num2;
        printf("Multiplicacao dos numeros %d * %d e: %d.", num1, num2, mult);
        break;
    case 4:
        printf("Digite um numero ");
        scanf("%d", &num1);
        printf("Digite outro numero: ");
        scanf("%d", &num2);
        div = num1 / num2;
        printf("Divisao dos numeros %d / %d e: %f.", num1, num2, div);
        break;
    case 5:
        return 0;
        break;
    default:
        printf("Opcao invalida. Digite um numero entre 1 e 4 para a operacao.");
}
return 0;
}
