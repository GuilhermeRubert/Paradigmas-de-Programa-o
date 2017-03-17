#1. Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome.

def funcNomes(listaNomes):
    return  list(map(lambda x:'Sr '+x,listaNomes))
#Escreva uma função que, dada uma lista de números, calcule 3n*2 + 2/n + 1 para cada número n da lista.
def funcCalcula(listaNum):
    return  list(map(lambda x:(3*x)*2+(2/x)+1, listaNum))
#Crie uma função que reretorne outra lista com somente aqueles nomes que terminarem com a letra 'a'.

def funcProcura(lista):
    return  list(filter(lambda x:'a' in x, lista))

#Escreva uma função que, dada uma lista de idades de pessoas no ano atual, retorne uma lista somente com as idades de quem nasceu depois de 1970. Para testar a condição, sua função deverá subtrair a idade do ano atual. Exemplo de uso:

def ProcuraIdade(listaIdades):
    return list(filter(lambda x:(2017-x)>1970,listaIdades))
                

#O código abaixo é escrito em Python imperativo. Escreva um código equivalente usando programação funcional.
numbers =[1,2,3,4]

def funcMultiplica(listaNumeros):
    return list(map((lambda x: x*2), listaNumeros))





