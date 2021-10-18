/*
Notas -> Aula 22 - Comando Break
Fonte -> https://youtu.be/QKzIyC5wBxU
*/

//Declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* 
	comando break:
	interromper a reprtição de qualquer comando de laço (for, while ou do-while).
	*/

	//Forma geral:
	/*
	repeticao(condição1){
		if(condição 2){
			break; //Se a condição for verdadeira, para o loop.
		}
	}
	*/

	//Exemplo
	int a, b;
	printf("Digite o valor de a:"); 
	scanf("%d", &a);
	printf("Digite o valor de b:"); 
	scanf("%d", &b);
	while(a <= b){
		a = a + 1;
		if(a == 5){//Deve ser dentro de uma condição, pois se não o break sempre vai quebrar o loop.
			break;
		}
		printf("%d\n", a);
	}

	return 0;
}
