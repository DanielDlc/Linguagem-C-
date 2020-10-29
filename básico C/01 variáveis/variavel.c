#include <stdio.h>

int main(){  // a chave delimita um (início do bloco)
    int idade;  // inteiro (%d representação de inteiro)

    printf("Qual é a sua idade? ");  // imprimir na saída padrão
    scanf("%d", &idade);  // scanf recebe parâmetro string e variável idade

    printf("A sua idade é %d", idade);

    return 0;
}  // fim do bloco 