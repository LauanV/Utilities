#include <stdio.h>
#include <string.h>

int main(){

    char senha [20];
    char validacao [20] = {"senha"};

    printf("Informe sua senha:\n");
    gets(senha);

    int comparacao = strcmp(senha, validacao);

    if(comparacao == 0){

        printf("Validado.");

    }
    else{

        printf("Invalidado.");

    }
    
}