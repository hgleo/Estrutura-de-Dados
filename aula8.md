# Árvore Rubro Negra

## Propriedades

### - É uma ABB

### - Todo nó é vermelho ou preto

### - A raiz é preta

### - NULL é considerado preto

### - Se um nó é vermelho, seus filhos são pretos

### - Todo caminho da raiz até qualquer NULL possui exatamente a mesma quantidade de nós pretos(altura negra)

## Balanceamento

### Características

### - Uma árvoreo RB com N nós tem altura menor ou igual a 2logN(n+1)

### - Uma busca leva um tempo O(log(n))

### - Inserções e retiradas podem violar as propriedades RB

### - Para restabelecer as propriedades, recorre-se a rotação de recolação dos nós
