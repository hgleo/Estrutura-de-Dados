#include <stdio.h>

typedef struct arvore{
  
  int info;
  struct arvore *esq;
  struct arvore *dir;

}arvore;

int existir(arvore *a, int x){

  if(a == NULL)
    return 0;

  else if(x == a->info)
    return 1;
  
  else if(x < a->info)
    return existir(a->esq, x);

  else 
    return existir(a->dir, x);

}

void imprimir(arvore *a){

  if(a != NULL){
    printf("%d\n", a->info);
    imprimir(a->esq);
    imprimir(a->dir);
  }
}

void imprimirMaiorIgual(arvore *a, int x){

  if(a == NULL)
    if(a->info >= x){
        printf("%d", a->info);
        imprimirMaiorIgual(a->esq,x);
        imprimirMaiorIgual(a->dir,x);
    }
  else
    imprimirMaiorIgual(a->dir,x);

}

arvore *inserir(arvore *a, int x){

  if(a == NULL){
    a = (arvore *)malloc(sizeof(arvore));
    a->info = x;
    a->esq = NULL;
    a->dir = NULL;
    return a;
  }

  else if(x <= a->info)
    a->esq = inserir(a->esq, x);

  else
   a->dir = inserir(a->dir, x);
  
  return a;
}

arvore *remover(arvore *a,int x){

  if(a != NULL)
    if(a->info == x)
      if(a->esq == NULL && a->dir == NULL){
        free(a);
        return NULL;
      }
      else if(a->esq == NULL){
        arvore *aux = a->dir;
        free(a);
        return aux;
      }
      else if(a->dir == NULL){
        arvore *aux = a->esq;
        free(a);
        return aux;
      }
      else{

        arvore *aux = a->esq;
        while(aux->dir != NULL)
          aux = aux->dir;
        a->info = aux->info;
        a->esq = remover(a->esq,aux->info);

      }
    else if(x < a->info)
      a->esq = remover(a->esq, x);
    else
     a->dir = remover(a->dir, x);
  return a;
}

int main(){

  arvore *a = NULL;

  return 0;
}