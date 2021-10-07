/*
Notas -> Aula 23 - Comando Continue
Fonte -> https://youtu.be/LK8DbKnImQI
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){

	/*
	comando continue:
	interromper a repetição atual de quaçquer comando de loop (for, whle ou do-while), e passar para a próxima repetição.
	/*

	//Forma geral
	/*
	repetição (condição1){
		if(condição2){
			continue; //Pula para o inicio do laço, ignorando tudo que está depois dele dentro da repetição.
			Obs.: O continue ignora apenas a iteração atual do laço e não o laço inteiro.
		}
	}
	*/

	int a, b;
	printf("Digite o valor de a:"); 
	scanf("%d", &a);
	printf("Digite o valor de b:"); 
	scanf("%d", &b);

	while(a <= b){
		a = a + 1;
		if(a == 5){ //Sem a condiçãoooo, todo o cídigo abaixo do comando continue será sempre ignorado!
			continue;
		}
		printf("%d\n", a);
	}
	return 0;
}