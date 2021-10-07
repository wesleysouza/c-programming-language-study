/*
Notas -> Aula 21 - Aninhamento de Repetições
Fonte -> https://youtu.be/LXg3HtMbP8E
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

/*
Aninhamento de repetições -> Uso dos comandos de repetição (while, for ou do-while) um dentro do outro.
*/

//Exemplo 1:
/*
repeticao (condicao1){
	conjunto de comandos;
	repeticao(condicao2){
		conjunto de comandos;
		repeticao... Não há limites...
	}
}
*/

//Exemplo 2:
//Imprimindo uma matriz identidade 5 x 5
int main(){
	int i, j;
	
	for (i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			if(i == j){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
	}

	//Exemplo 3:

	printf("------\n");

	i = 1;
	while(i <= 5){
		j = 1;
		while(j <= 5){
			if(i == j){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
			j++;
		}
		printf("\n");
		i++;
	}

	//Obs.: Nada impede de você combinar os diferentes comandos de repetição.

	//system("pause");
	return 0;
}
