/*
Notas -> Aula 51 - Recursão
Fonte 1 -> https://youtu.be/T2gTc5u-i1o 
Fonte 2 -> https://youtu.be/M7c-m2xN9FQ
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int n){
	if (n == 0){ //Caso Base
		return 1;
	}else{
		//Caso Geral
		return n * fatorial(n - 1);
	}
}

int fibonacci(int n){
	if (n == 0 || n == 1){ // Caso Base
		return n;
	}else{// Caso geral
		return fibonacci(n - 1) + fibonacci (n - 2);
	}
}

int main(){
	/*
	Recursão:
	Comportamento onde uma função pode chamar a si própria. A isso chamamos de recursividade.
	*/ 

	printf("%d\n", fibonacci(1));
	printf("%d\n", fibonacci(5));
	printf("%d\n", fibonacci(0));
}