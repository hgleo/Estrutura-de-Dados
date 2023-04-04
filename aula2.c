// ### Exemplo 1: Verificar se um elemento x existe na lista. (Retorna 1 caso exista, 0 caso não exista)
// Enunciado: Somatorio da lista.
#include <stdio.h>

typedef struct lista{
  int info;
  struct lista *prox;
}lista;

int existe(lista *l,int x){

  if(l == NULL){
    return 0;
  }

  else if(l->info == x){
    return 1;
  }

  else{
    return existe(l->prox,x);
  }

}
void imprimeLista(lista *l){
  
  if(l != NULL){
    printf("%d ", l->info);
    imprimeLista(l->prox);
  }


int somatorioLista(lista *l){
  if(l == NULL){
    return 0;
  }
  else{
    return l->info + somatorioLista(l->prox);
  }
}

void inserirFinal(lista **l,int x){
  if(*l == NULL){
    *l = (lista *)malloc(sizeof(lista));
    (*l)->info = x;
    (*l)->prox = NULL;
  }
  else{
    inserirFinal(&(*l)->prox,x);
  }
}

}
int main(lista *l){

  l = inserirFinal(&l,24);
  l = inserirFinal(&l,10);
  l = inserirFinal(&l,4);
  l = inserirFinal(&l,2);

  imprimeLista(l);

  existe(l,2);
  existe(l,3);

  l = somatorioLista(l);

  return 0;
}