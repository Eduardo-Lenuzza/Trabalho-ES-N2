#include "Fila.h"

void esvazia (Fila *f)
{
    if(!vazia(f))
    {
        No *aux, *no = f;
        while(f->inicio_fila <= f->fim_fila)
        {
            aux = no;
            no = f->no->atras;
            free(aux);
            f->fim_fila--;
        }
        f = NULL;
        free(no);
        free(f);

        if(vazia(f)) printf("\nFila esvaziada com sucesso!\n");
        else printf("\nErro ao esvaziar a lista!\n");
    }
    else printf("\nA fila já está vazia!\n");
}

Fila *enfileira (Fila *f, char *nome)
{
    if(cheia(f) != false)
    {
        if(vazia(f) != false)
        {
            No *novoNo = NULL;
            novoNo = (No*) malloc(sizeof(No));
            novoNo->p->dado_nome = nome;

            f->fim_fila++;
            novoNo->p->idPaciente = f->fim_fila++;

            novoNo->frente = f->no->atras;
            f->no->atras = novoNo;
        }
        else
        {
            No *novoNo = NULL;
            novoNo = (No*) malloc(sizeof(No));
            novoNo->p->dado_nome = nome;

            f->fim_fila++;
            novoNo->p->idPaciente = f->fim_fila++;

            novoNo->frente = NULL;
            f->no->atras = NULL;
        }
    }
    else printf("\nA fila está cheia!\n");
    return f;
}

Fila *desenfileira (Fila *f, int idPaciente)
{
    if(f != NULL){
        if (vazia(f) != false){

        }
    } else printf("\nA fila não existe!\n");
}

bool vazia (Fila *f)
{
    if(f != NULL)
    {
        if(f->fim_fila == 0) return true;
        return false;
    }
    else printf("\nNão existe fila!\n");
    return false;
}

bool cheia (Fila *f)
{
    if(f != NULL)
    {
        if(f->capacidade == f->fim_fila) return true;
        return false;
    }
    else printf("\nNão existe fila!\n");
    return NULL;
}

Fila *primeiro ()
{
}
