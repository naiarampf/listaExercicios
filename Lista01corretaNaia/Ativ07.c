#include <stdio.h>

int main(){
int num;
printf("Digite um numero para ter um mes: ");
scanf("%d", &num);
if (num >= 1 || num <= 12){
    if(num == 1){ printf("Janeiro");}
    if(num == 2){ printf("Fevereio");}
    if(num == 3){ printf("Março");}
    if(num == 4){ printf("Abril");}
    if(num == 5){ printf("Maio");}
    if(num == 6){ printf("Junho");}
    if(num == 7){ printf("Julho");}
    if(num == 8){ printf("Agosto");}
    if(num == 9){ printf("Setembro");}
    if(num == 10){ printf("Outubro");}
    if(num == 11){ printf("Novembro");}
    if(num == 12){ printf("Dezembro");}
} else { printf ("Digite um numero entre 1 a 12.");}
return 0;
}
