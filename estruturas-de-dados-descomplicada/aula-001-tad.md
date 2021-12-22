# [ED] Aula 01 - TAD (Tipo Abstrato de Dado)

Tipo de dado: define o ocnjunto de valores (domínio que uma variável pode assumir).

```c
Ex.: int
... -2, -1, 0, +1, +2, ...
```

Estruturas de dados: trata-se de um relacionamento lógico entre tipos de dados.

Ex.: Uma struct

```c
struct pessoa{
    char nome[30];
    int idade;
};
```

Obs.: Os três juntos tem um significado. 

## TAD

Tipos Abstratos de dados ou "TAD": incluem as operações para manipulação de dados.

Ex.:
- criação de estrutura;
- inclusão de um elemento;
- remoção de um elemento;
- acesso a um elemento;
- etc;

Vantagens:

- **Encapsulamento e Segurança**: usiário não tem acesso direto aos dados.

- **Flexibildiade e Reutilização**: podemos alterar o "TAD" sem alterar as aplicações que a utilizam.

### Exemplo de TAD: arquivos em C

```c
FILE *f;
```

Os dados de "f" somente podem ser acessados pelas funções e manipulação do tipo:
- fopen()
- fclose()
- fputc()
- fgetc()
- feof()
- e etc.

Obs.: Nunca é permitido o acesso direto, o acesso é somente pelas função de manipulação definidas.

Fonte: https://youtu.be/bryesHll0vY