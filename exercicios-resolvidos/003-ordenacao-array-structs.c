#include <stdio.h>

struct aluno
{
	int mat;
	char nome[30];
};

void bubbleSortMat(struct aluno *v, int n){
	int i, continua, fim = n;
	struct aluno aux;
	do{
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(v[i].mat > v[i+1].mat){ // Comparando os adjacentes
				//Troca dos valores
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				continua = i; // Houve trocas, então continua
			}
		}
		fim--;
	}while(continua != 0);
}

void bubbleSortNome(struct aluno *v, int n){
	int i, continua, fim = n;
	struct aluno aux;
	do{
		continua = 0;
		for(i = 0; i < fim-1; i++){
			if(strcmp(v[i].nome,v[i+1].nome) > 0){ // Comparando os adjacentes
				//Troca dos valores
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				continua = i; // Houve trocas, então continua
			}
		}
		fim--;
	}while(continua != 0);
}


void imprimeArrayStructs(struct aluno *p, int tam){
	int i;
	for(i = 0; i < tam; i++){
		printf("Matricula: %d - Nome %s\n", p[i].mat, p[i].nome);
	}
}

int main(){
	
	struct aluno p[4] = {
		55, "Ziraldo",
		50, "Maria",
		30, "Bruno",
		12, "Joao",
	};

	imprimeArrayStructs(p, 4);

	printf("Ord Mat\n");

	bubbleSortMat(p, 4);

	imprimeArrayStructs(p, 4);

	printf("Ord Nome\n");

	bubbleSortNome(p, 4);

	imprimeArrayStructs(p, 4);

	return 0;
}




