#include "stdio.h"
#include "stdlib.h"

void imprimirCombinacoes(int *vet, int pos, int n){

  if(pos == n){
    for(int i = 0; i < n; i++){
      int sumZero=0;
      if(vet[i] == 0) sumZero++;
      if(sumZero > n/2) printf("%d",vet[i]);
    }
    printf("\n");
  }
  else{
    for(int i = 0; i <= 1; i++){
      vet[pos] = i;
      imprimirCombinacoes(vet,pos+1,n);
    }
  }
}

int main(){

  int n = 3;
  int vet[n];
  imprimirCombinacoes(vet,0,n);

  return 0;  
}