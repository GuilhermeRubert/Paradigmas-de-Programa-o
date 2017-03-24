
l1 = [1,2,3,4,5]
l2 = [2,3,4,5,6,7]
suf = '@inf.ufsm.br'
vogais = 'aeiouAEIOU'

#Defina uma função addSuffix(suf,nomes) que retorne a lista de nomes com o sufixo suf adicionado.
def addSufix(suf,nome):
    return [x+suf for x in nome]


#Escreva uma função countShorts(words), que receba uma lista de palavras e retorne a quantidade de palavras dessa lista que possuem menos de 5 caracteres.
#exemplo 1
def countShorts1(words):
    #filter(Nome (N Maiusculo), list) retorna apenas os valores true da lista
    return len(filter(None,[len(x)<5 for x in words]))
#exemplo 2
def countShorts2(words):
    return len(filter(lambda x : x<5,[len(x) for x in words]))
#exemplo 3
def countShorts3(words):
    return len([x for x in words if len(x)<5])

#Defina uma função stripVowels(s) que receba uma string e retire suas vogais
def stripVowels(s):
    return ''.join([x for x in s if x not in vogais])
    
#Defina uma função hideChars(s) que receba uma string, possivelmente contendo espaços, e que retorne outra string substituindo os demais caracteres por '-', mas mantendo os espaços. 
def hideChars(s):
    return ''.join([x if x in ' ' else '-' for x in s])

#Defina uma função que receba um número n e retorne uma tabela de números de 1 a n e seus quadrados
def gentable(n):
    return [(x,x**2) for x in range(1,n+1)]

#Defina uma função que receba uma lista de palavras e retorne uma string contendo o primeiro e o último caracter de cada palavra da lista.
def gencode(lis):
    return ''.join([x[0]+x[-1] for x in lis])
#Defina uma função myZip(l1,l2) que reproduza o comportamento da função zip do Python:
#   >>> myZip([1,2,3],[4,5,6])
#   [(1, 4), (2, 5), (3, 6)]
#   >>> myZip([1,2,3],[4,5])
#   [(1, 4), (2, 5)]
def myZip(l1,l2):
    return [(l1[x],l2[x]) for x in range(min([len(l1),len(l2)]))]

#Escreva uma função enumerate(words) que numere cada palavra da lista recebida
def enumerate1(words):
    return [(x+1, words[x]) for x in range(len(words))]
#Escreva uma função isBin(s) que verifique se a string recebida representa um número binário. 
def isBin(str1):
    return len(([x for x in str1 if x=='0' or x=='1']))==len(str1)

#Escreva uma função bin2dec(digits), que receba uma lista de dígitos representando um número binário e retorne seu equivalente em decimal.
def bin2dec(digits):
    return sum([ digits[(len(digits)-1)-x]*2**x for x in range(len(digits))])

    
