/*
Notas -> Aula 44 - Parâmetros da função
Fonte -> https://youtu.be/5BBD_IfFUtk
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

float quadrado(float a){
	return a * a;
}

float multiply(float a, float b){
	return a * b;
}

//Função sem parâmetros e sem retorno
void imprimeMensagem(){
	printf("Mensagem!");
}

int main(){
	/*Parâmetros da função:
	permite ao programador passar uma informação de um trecho de código para dentro da função.
	
	//Declaração de parâmetros é igual a declaração de variáveis

	//EX.:

	float raiz(float r);
	int soma(int x, int y);
	int soma(int x, y); // ERRADO
	float exponencial(float a, float b);
	*/

	//Recebendo o valor de retorno

	float a, b = 5.5;
	float k = quadrado(a); 
	float k = quadrado(6.8);
	//float k = quadrado(); //ERRADO
	imprimeMensagem(); 
	//float k = imprimeMensagem(); //ERRADO
	float k = multiply(a, b);
	float k = multiply(8.6, 9.5);
	//float k = multiply(a, b); //ERRADO
	//float k = multiply(b); //ERRADO

	return 0;
}

