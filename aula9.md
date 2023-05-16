# Árvore B

## Propriedades de uma árvore de ordem N

### A raiz é uma folha ou tem no mínimo dois filhos

### Cada nó tem no máximo N filhos e o mínimo N/2 filhos

### O número de chaves é igual ao número de filhos do nó menos 1

### Todas as folhas etão no mesmo nível

### A ordem N da árvore "deve" ser impar

## Inserção

### Se nula, crie o nó e insira o elemento

### As chaves são inseridos nos nós folhas

### Se o nó ficar cheio (N chaves), divida a folha e duas partes e suba a chave central para o nó pai

### Se o pai ificar cheio repita o processo, no pior caso até a raiz

### Se necessário o nó raiz deverá ser dividido e a chave central será transformada em nova raiz

## Remoção

### Na remoção é conveniente sempre remover folha

### Deste modo, se

### 1=> A chave está na folha

#### - Se a remoção não faz com que o nó fique com poucas chaves, remova a chave

### 2=> A chave não está na folha

#### - Se a remoção (1) e (2) fizerem com que uma folha tenha um número menor que o mínimo então, temos que observar os irmãos adjacentes

### 3=> Se um irmão tem o número mínimo de chaves então

#### - Suas chaves devem ser combinadas com a chave do só pai

#### - Este processo é recursivo

### 4=> Caso contrário

#### -Uma chave do nó pai vai para posição da chave removida

#### - Uma chave do nó adjacente vai para o nó pai

#### Não será cobraado

## Árvore B*

### É uma variante da árvore B, posterga a divisão de nós até que as folhas adjacentes estejam completamente cheias

#### Para fazer isso

#### - Redistribuição de chaves

## Árvore B+

### Esta árvore é uma variação da estrutura básica da árvore B

### Características

#### Todas as chaves são mantidas em folhas

#### As chaves são repetidas em nós não-folha para formar índicies

#### As folhas são ligadas oferecendo um caminho osequencial para percorrer as chaves
