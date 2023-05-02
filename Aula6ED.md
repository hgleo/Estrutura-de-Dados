# Árvore AVL

## São ABB

## São balanceadas -> Diferença entre as alturas das subárvores esquerda e direita é inferior ou igual a 1

## As funçoes implementadas para uma árvore AVL devem tirar proveito (total ou parcial), se possível, da ordenação da árvore assim como acontece com as áevores ABB

## Vantagens da árvore AVL

### Quando é possivel tirar prooveito da ordenação, o balanceamento gatante que esse proveito será semelhante em qualquer nó da árvore. Por epemplo a busca por um elemento em uma árvore garante uma complepidade de pior caso de O(logn) passos, onde n é o numero de elementos da árvore, independente do valor a ser buscado

## Desvantagens de árvore AVL

### A cada operação de modificação (inserção e remoção) na árvore, o balanceamento desta deve ser garantido

## Rotação pra Esquerda simples (Seja p o nó desbalanceado)

### b = p -> dir

### p -> dir = b -> esq

### b-> esq = p

### return b

## Rotação pra Direita simples (Seja p o nó desbalanceado)

### b = p -> esq

### p -> esq = b -> dir

### b -> dir = p

### return B

## Rotação pra Direita dupla (Seja p o nó desbalanceado)

### Rotação Direita (b)

### Rotação Esquerda(p)

## Rotação pra Esquerda dupla (Seja p o nó desbalanceado)

### Rotação Esquerda (b)

### Rotação Direita (p)
