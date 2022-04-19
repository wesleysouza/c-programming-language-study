/*
Notas -> Aula 32 - Strings: biblioteca string.h
Fonte -> https://youtu.be/MEkrf1O_CIU
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char srt1[20] = "Ola Mundo";
    char srt1[20];

    //COPIANDO UMA STRING

    srt1 = str2; //ERRADO

    int i;
    for(i = 0; srt1[i]!='\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    //MUITO TRABALHOSO

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Felizmente a linguagem C possuí algumas funções para manipulação de strings
    //Essas funções estão disponíveis na biblioteca <string.h>.

    strlen Tamanho da string
    strcpy Copiar uma string
    strcat Contacentar duas strings
    strcmp Comparar duas strings

    return 0;
}

//EXEMPLO 1 - TAMANHO DE UMA STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho = %d\n", tamanho);

    return 0;
}

//EXEMPLO 2 - COPIANDO STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char palavra[20] = "Linguagem C";
    char novapalavra[30];
    strcpy(novapalavra, palavra);

    printf("Copiaa = %d\n", novapalavra);

    return 0;
}

//EXEMPLO 3 - CONCATENANDO STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char palavra1[20] = "Bom ";
    char palavra2[20] = "Dia!";
    strcat(palavra1, palavra2);

    printf("palavra = %d\n", palavra1);

    return 0;
}

//EXEMPLO 4 - COMPARANDO STRING

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char palavra1[20] = "Linguagen C";
    char palavra2[20] = "LINGUAGEM C";

    if(strcmp(palavra1, palavra2) == 0){
        printf("Strings iguais \n");
    }else{
        printf("Strings diferentes \n");
    }

    return 0;
}