#include <stdio.h>
#include <string.h>

int main(){

    char senha [20]; // Var para determinar onde guardar a "senha" e o tamanho máximo da senha.
    char validacao [20] = {"senha"}; // Var que determina a "senha" correta (entre os '{}').

    printf("Informe sua senha:\n");
    gets(senha);

    int comparacao = strcmp(senha, validacao); // Comparação das duas strings para saber se são iguais.

    if(comparacao == 0){ // Se a comparação feita anteriormente retornar o valor '0' significa que as strings são iguais.

        printf("Validado.");

    }
    else{

        printf("Invalidado.");

    }
    
}
