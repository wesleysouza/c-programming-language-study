#include <stdio.h>
#include <stdlib.h>

struct ponto{
	int id, x, y;
};

int geraId = 1;

struct ponto addPontoValor()
{
	struct ponto p;
	p.id = geraId;
	geraId++;
	p.x = 5;
	p.y = 10;
	return p;

}

int addPontoRef(struct ponto *p)
{
	(*p).id = geraId;
	geraId++;
	(*p).x = 5;
	(*p).y = 10;
}

int imprimePonto(struct ponto p)
{
	printf("IMPRIMINDO PONTO\n");
	printf("ID : %d\n", p.id);
	printf("PONTO X: %d\n", p.x);
	printf("PONTO Y: %d\n", p.y);
}

int busca(struct ponto *p, int tam, int id){
	int i;
	for (i = 0; i < tam; i++){
		if (p[i].id == id){
			return i;
		}
	}
	return -1;
}

int imprimeBusca(struct ponto *p, int tam, int id)
{
	int posBusca = busca(p, tam, id);
	if (posBusca > 0){
		printf("IMPRIMINDO BUSCA\n");
		printf("ID : %d\n", p[posBusca].id);
		printf("PONTO X: %d\n", p[posBusca].x);
		printf("PONTO Y: %d\n", p[posBusca].y);
	}else{
		printf("USUÁRIO NÃO ENCONTRADO\n");
	}
	
}

int main(){

	struct ponto vponto[5];
	addPontoRef(&vponto[0]);
	addPontoRef(&vponto[1]);
	addPontoRef(&vponto[2]);
	addPontoRef(&vponto[3]);
	addPontoRef(&vponto[4]);

	//addPontoRef(&vponto[0]);
	//vponto[1] = addPontoValor();
	imprimePonto(vponto[0]);
	imprimePonto(vponto[1]);
	imprimePonto(vponto[2]);
	imprimePonto(vponto[3]);
	imprimePonto(vponto[4]);

	printf("Busca\n");
	int pos = busca(vponto, 5, 5);
	//imprimePonto(vponto[pos]);

	imprimeBusca(vponto, 5, 8);
	
}
