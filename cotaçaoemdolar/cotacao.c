#include <stdio.h>
#include <math.h>

main() {
   
    float real, conversao;

   


    printf("Digite um valor em real: R$");
    scanf("%f", &real);

  
   conversao = real * 0.20;

    // Exibindo o resultado
    printf("Valor em dolares: US$%.2f\n", conversao);
   

}
