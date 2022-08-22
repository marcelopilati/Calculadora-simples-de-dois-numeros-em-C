#include <stdio.h>
void main(){

    int primeiro_numero, segundo_numero, operacao, adicao, subtracao, multiplicacao, divisao;

    while(operacao < 5){

    printf("Calculadora de dois numeros\n\n");

    printf("Insira o primeiro numero: ");
    scanf("%d", &primeiro_numero);

    printf("Insira o segundo numero: ");
    scanf("%d", &segundo_numero);

    printf("Escolha qual operacao deseja utilizar: \n\n");

    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &operacao);

    if(operacao == 1){
        printf("Voce escolheu Adicao\n\n");
        adicao = primeiro_numero + segundo_numero;
        printf("O resultado da adicao e: %d\n\n", adicao);
    }
    else if(operacao == 2){
        printf("Voce escolheu Subtracao\n\n");
        subtracao = primeiro_numero - segundo_numero;
        printf("O resultado da subtracao e: %d\n\n", subtracao);
    }
    else if(operacao == 3){
        printf("Voce escolheu Multiplicacao\n\n");
        multiplicacao = primeiro_numero * segundo_numero;
        printf("O resultado da multiplicacao e: %d\n\n", multiplicacao);
    }
    else if(operacao == 4){
        printf("Voce escolheu Divisao\n\n");
        divisao = primeiro_numero / segundo_numero;
        printf("O resultado da divisao e: %d\n\n", divisao);
    }
    else{
        printf("Opcao Invalida\n\n");
 }
    }

}
