#include <stdio.h>

int main(){
int num;
printf("Digite um numero para ter um dia da semana: ");
scanf("%d", &num);

switch(num){
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    case 8:
        return 0;
        break;
    default:
        printf("Opcao invalida. Digite um numero entre 1 e 7 para um dia da semana.");
}
return 0;
}
