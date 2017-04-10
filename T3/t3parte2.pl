#Defina um predicado somaQuad(X,Y,Q) que seja verdadeiro se Q for a soma dos quadrados de X e Y. Exemplos de uso:
somaQuad(X,Y,Q):- Q is X*X + Y*X.
#Defina um predicado zeroInit(L) que é verdadeiro se L for uma lista que inicia com o número 0 (zero). 
zeroInit(L) :- nth0(0, L, X), X=0.
#Defina um predicado hasEqHeads(L1,L2) que seja verdadeiro se as listas L1 e L2 possuírem o mesmo primeiro elemento. 
hasEqHeads(L1,L2) :- nth0(0, L1, X), nth0(0, L2, Y), X=Y.
#Defina um predicado has5(L) que seja verdadeiro se L for uma lista de 5 elementos. Lembre de como funciona a unificação em Prolog e resolva este exercício sem usar o predicado pré-definido length. 
hasN(L) :- length(L,5).
#Defina um predicado isBin(L) que seja verdadeiro se L for uma lista contendo somente elementos 0 e 1. Use recursão.
isBin(L) :- pelem([Y, X], L), Y=0.


#Defina um predicado mesmaPosicao(A,L1,L2) para verificar se um elemento A está na mesma posição nas listas L1 e L2. Assuma que L1 e L2 sejam permutações de uma lista de elementos distintos, sem repetições. 
#Dica: procure auxílio em predicados pré-definidos. 
#mesmaPosicao(A,L1,L2) :- 