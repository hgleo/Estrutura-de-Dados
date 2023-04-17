// Somar todos os elementos da lista ~ok  
// Contar a recorrencia de números   ~ok
// Remover um elemento               ~ok

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

lista *inserirFinal(lista *l,int x){
  if(l ==NULL){
    lista *no = (lista*)malloc(sizeof(lista));
    no->info = x;
    no->prox = NULL;
    return no;

  }

  else
    l->prox = inserirFinal(l->prox,x);

  return l;
}

int contaRecorrencia(lista *l, int x){

  int recorrencia = 0;

  if(l == NULL){
    return recorrencia;
  }
  else{
    if(l->info == x){
      recorrencia += 1;
    }
    return recorrencia + contaRecorrencia(l->prox,x);
  }

}

/*
void inserirFinal(lista **l, int x){

  if (*l == NULL) {
    *l = (lista *)malloc(sizeof(lista));
    (*l)->info = x;
    (*l)->prox = NULL;
  } else {
    inserirFinal(&(*l)->prox, x);
  }
  
}
*/

lista *removerElemento(lista *l, int x) {

  if (l == NULL) {
    return l;
  }

  if (l->info == x) {
    lista *tmp = l;
    l = l->prox;
    free(tmp);
    return l;
  }

  lista *anterior = l;
  lista *atual = l->prox;

  while (atual != NULL && atual->info != x) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual != NULL) {
    anterior->prox = atual->prox;
    free(atual);
  }

  return l;
}

int main(){

  lista *l = NULL;

  l = inserirFinal(l, 24);
  l = inserirFinal(l, 10);
  l = inserirFinal(l, 4);
  l = inserirFinal(l, 2);

  imprimeLista(l);

  printf("\n 0 se não existe 1 caso exista: %d ", existe(l, 2));
  printf("\n 0 se não existe 1 caso exista: %d ", existe(l, 3));
  printf("\n Qts vezes o numero %d se repete: %d ", 2 ,contaRecorrencia(l, 2));

  printf("\nSomatório: %d ", somatorioLista(l));

  l = removerElemento(l, 2);
  printf("\n");
  imprimeLista(l);

  return 0;
}
