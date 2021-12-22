# [ED] Aula 02 - Modularização e TAD

A conveção em linguagem C é preparar dois arquivos para implemetar um "TAD". Esses arquivos são os **".h"** e o **".c"**:
- Arquivos **".h"**: protótipos das funções, tipos de ponteiro, e dados globalmente acessível.
- Arquivo **".c"**: declaração do tipo de dados e implementação das suas funções.

Desse modo, separmos o "conceito" (definição do tipo) de sua **implementação**.

## Exemplo de TAD

Um exemplo de "TAD" pode ser uma estrutura ponto definifo por suas coordenadas **"x"** e **"y"**:

```c
struct ponto{
    float x;
    float y;
};
```

Definindo TAD:
- **1 Passo**: definir o arquivo **".h"**:
    - prótotipos das fuções;
    - tipos de ponteiro;
    - dados globalmente acessíveis.

### Implementando a TAD:

Definindo arquivo **".h"**:

```c
//Arquivo Ponto.h
typedef struct ponto Ponto;

//Cria um novo ponto
Ponto* pto_cria(float x, float y);
//Libera um ponto
void pto_liberar(Ponto* p);
//Acessa os valores "x" e "y" de um ponto
void pto_acessa(Ponto* p, float* x, float* y);
//Atribui os valores "x" e "y" a um ponto
void pto_atribui(Pnto* p, float x, float y);
//Calcula a distância ente dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);
```

Definindo arquivo **".c"**:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //inclui os Protótipos

//Definindo o tipo de dado
struct ponto{
    float x;
    float y;
};

Ponto* pto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void pto_libera(Ponto* p){
    free(p);
}

//Recupera por referência o valor de um ponto
void pto_acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y; 
}

//Atribui a um ponto as coordenadas "x" e "y"
void pto_acessa(Ponto* p, float x, float y){
    *x = p->x;
    *y = p->y; 
}

//Calcula a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

```

### Usando a TAD

```c
#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(){
    float d;
    Ponto *p, *q;
    //Ponto r; ERRO -> Só é possível declarar por ponteiros agora
    
    p = pto_cria(10,21);
    q = pto_cria(7,68);
    //q->x = 2; ERRO -> Não é mais possível acessar diretamente!
    d = pto_distancia(p, q);
    printf("Distancia entre dois pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);
}

```

Fonte: https://youtu.be/lKwEQgV6nZk

