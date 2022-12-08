#include <stdio.h>

int main(){
float loanValue, salary, instValue, limit;
int installments;
printf("Digite o valor do emprestimo, seu salario \n e o numero de parcelas para saber se o emprestimo sera aprovado.\n");
printf("Digite o valor do emprestimo: ");
scanf("%f", &loanValue);
printf("Digite seu salario: ");
scanf("%f", &salary);
printf("Digite o numero de parcelas: ");
scanf("%d", &installments);

limit = ((salary/100) * 20);
instValue = loanValue/installments;

if (instValue < limit){
    printf("Parabens seu emprestimo foi aproavado.\n");
    printf("O valor da sua parcela e: %f", instValue);
    } else {
    printf("Desculpe seu emprestimo nao foi aprovado com este valor de parcela.\n");
    printf("O valor da sua parcela e: %f", instValue);
    }
return 0;
}
