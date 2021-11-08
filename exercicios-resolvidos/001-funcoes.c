#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1 - Escreva uma função que receba dois número inteiros e retorne o número maior.
int maior(int x, int y){
	if (x > y)
	{
		return x; // na hora que o return é executado a função termina (semelhante ao break)
	}
	else{
		return y;
	}
}

//2 - Escreva uma função que receba um valor inteiro e verifique se ele é par ou impar.
int parImpar(int x){
	if ((x % 2) > 0){
		printf("%d eh impar\n", x);
	}
	else{
		printf("%d eh par\n", x);
	}
}

//3 - Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo float.
float dist(float a1, float a2, float b1, float b2){
	return sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2));
}

//4 - Escreva uma função que receba um vetor de inteiros e atribua a todas as suas posições o valor 0.
int zeraVetor(int *p, int tam){
	int i;
	for (i = 0; i < tam; i++){
		p[i] = 0;
	}
}

//Função auxiliar para imprimir os valores de um vetor
int imprimeVetor(int *p, int tam){
	int i;
	for (i = 0; i < tam; i++){
		printf("%d\n", p[i]);
	}
}


//5 - Escreva uma função que recebe um vetor do tipo float e retorne a média dos seus valores.
float media(float *p, int tam){
	float soma = 0;
	float media;
	int i;
	for (i = 0; i < tam; i++){
		soma = soma + p[i];
	}
	media = soma/tam;
	return media;
}

int main(){
	//Somando os elementos de um array
	
	printf("%d\n", maior(5,6));
	parImpar(6);
	printf("%f\n", dist(6.5, 8.5, 10.4, 14.4));
	
	int vetor[5] = {1, 2, 3, 4, 5};
	
	imprimeVetor(vetor, 5);
	zeraVetor(vetor, 5);
	imprimeVetor(vetor, 5);
	
	float vetorMedia[5] = {8.5, 10, 7.8, 9.5, 7.2};
	
	printf("MEDIA %f\n", media(vetorMedia,5));
	
	return 0;
}
