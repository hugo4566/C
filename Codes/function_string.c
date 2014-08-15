#include <stdio.h>
#include <string.h>

void mudar(char x[]){
    strcpy(x,"teste");
    printf("%s",x);
}

int main(){
    char nome[20] = "hugo";
    printf("%s",nome);
    mudar(nome);
    printf("%s",nome);
    
    /*********************
    Saida = hugotesteteste
    **********************/
}