#include <stdio.h>

int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);

if(num % 3 == 0 && num % 5 == 0){
    printf("O numero %d e divisivel por 3 e por 5", num);
} else if(num % 3 == 0){
    printf("O numero %d e divisivel por 3", num);
} else if(num % 5 == 0){
    printf("O numero e %d is divisivel por 5", num);
} else {
    printf("O numero %d nao e divisivel por 3 ou 5");
}
return 0;
}
