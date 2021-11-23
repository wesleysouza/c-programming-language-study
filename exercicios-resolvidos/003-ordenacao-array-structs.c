#include <stdio.h>
#include <stdlib.h>

struct notas{
	float nota1, nota2, nota3;
};

struct aluno
{
	int matricula;
	char nome[30];
	struct notas not;
};

void insertionSortMatricula(struct aluno *v, int n){
	int i, j; 
	struct aluno aux;
	for(i = 0; i < n; i++){
		aux = v[i];
		//Move os números maiores pra frente e insere na posição vaga
		for(j = i; (j > 0) && (aux.matricula < v[j - 1].matricula); j--){
			v[j] = v[j - 1];
		}
		v[j] = aux;
	}
}

void insertionSortNome(struct aluno *v, int n){
	int i, j; 
	struct aluno aux;
	for(i = 0; i < n; i++){
		aux = v[i];
		//Move os números maiores pra frente e insere na posição vaga
		for(j = i; (j > 0) && (aux.nome < v[j - 1].nome); j--){
			v[j] = v[j - 1];
		}
		v[j] = aux;
	}
}
