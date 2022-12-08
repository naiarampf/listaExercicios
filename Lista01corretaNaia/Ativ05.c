#include <stdio.h>
#include <math.h>

int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
if (num >= 0){
    int squared = num * num;
    float sqRoot = sqrt(num);
    printf("O numero e %d e positivo.\n", num);
    printf("%d elevado por dois : %d\n", num, squared);
    printf("%d raiz quadrada: %f", num, sqRoot);
    } else {
    printf("O numero %d e negativo.\n", num);
    }
return 0;
}
