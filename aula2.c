#include <stdio.h>
#include <stdlib.h>

typedef struct lista {

  int info;
  struct lista *prox;
} lista;

int existe(lista *l, int x){

  if (l == NULL) {
    return 0;
  } else if (l->info == x) {
    return 1;
  } else {
    return existe(l->prox, x);
  }

}

void imprimeLista(lista *l){

  if (l != NULL) {
    printf("%d ", l->info);
    imprimeLista(l->prox);
  }

}

int somatorioLista(lista *l){

  if (l == NULL) {
    return 0;
  } else {
    return l->info + somatorioLista(l->prox);
  }

}

void inserirFinal(lista **l, int x){

  if (*l == NULL) {
    *l = (lista *)malloc(sizeof(lista));
    (*l)->info = x;
    (*l)->prox = NULL;
  } else {
    inserirFinal(&(*l)->prox, x);
  }
  
}

int main(){

  lista *l = NULL;

  inserirFinal(&l, 24);
  inserirFinal(&l, 10);
  inserirFinal(&l, 4);
  inserirFinal(&l, 2);

  imprimeLista(l);

  printf("\n");

  printf("%d\n", existe(l, 2));
  printf("%d\n", existe(l, 3));

  printf("%d\n", somatorioLista(l));

  return 0;
}
