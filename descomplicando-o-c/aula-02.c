/*
Notas -> Aula 02 - Declaração de variáveis em C
Fonte -> https://youtu.be/q51cHsgRHU4
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(){

	/*
	Declarando variáveis
	Formato: tipo nome
	
	Tipos do c:
	char -> caractestes
	int -> valores inteiros
	float -> numeros reais
	double -> numeros reais grandes

	nomes (pode usar):
	a, b, c, d, ...
	1, 2, 3, 4, ...
	_ (underscore)
	Obs.1: Não pode usar palavras reservadas. Ex.: int 
 	Obs.2: Não pode iniciar com número.
 	Obs.3: A linguagem é case sensitive, ou seja, maiúsculas são diferentes de minúsculas.
	*/

	//Exemplos:
	char letra = 'a';
	float n = 5.25;
	double d = 5.0e3;

	//Também é possível
	int nro1 = 10, nro2, nro3;

	system("pause");
	return 0;
}