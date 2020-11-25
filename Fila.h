#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//typedef int IdPaciente;

typedef struct paciente
{
    int idPaciente;
    char *dado_nome;
} Paciente;

typedef struct no{
    Paciente *p;
    struct no *frente;
    struct no *atras;
} No;

typedef struct fila {
    No *no;
    int capacidade;
    int *inicio_fila;
    int *fim_fila;
}Fila;

No *cria();

void esvazia (Fila *f);

Fila *enfileira (Fila *f, char *nome);

Fila *desenfileira ();

bool vazia (Fila *f);

bool cheia (Fila *f);

Fila *primeiro ();



