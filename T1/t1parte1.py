def somaQuad(x,y):#1
    return x**2 + y**2

def hasEqHeads(l1,l2):#2
    return l1[0]==l2[2]

#3
def funcAux(nomes):
    return 'Sr' +' '+ nomes

def funcNomes(listaNomes):
    return  list(map(funcAux,listaNomes))
#fim do 3

#4
def funcAux(str1):
    return filter(lambda c:c!=' ', str1)
def funcEspacos(str1):
    return len(str1) - funcAux(str1)
#fim do 4

#5
def funcAux(numero):
    return (3*numero)*2 + (2/numero)+1 

def funcCalculaNum(listaNumeros):
    return  list(map(funcAux,listaNumeros))
#fim do 5

#6
def funcNumNeg(numero):
    return  list(filter(lambda x:x<0,numero)))
#fim do 6

#7
def funcAux(numero):
	return  numero>0 and numero<=100
def funcEntre(listaNumeros):
	return list(filter(funcAux,listaNumeros))
#fim da 7

#8
def funcAux(numero):
	return  numero%2==0
def funcPar(listaNumeros):
	return list(filter(funcAux,listaNumeros))
#fim da 8

#9
   def charFound(c,s):
	def funcAux(s):
		return c==s
	if(len(list(filter(funcAux,s)))>0):
		return True
	else:
		return False
#fim do 9

#10
    def funcAux(str1):
    return '<B> ' + str1 + " </B>">

    def funcHTML(listaStrings):
    return  list(map(funcAux,listaStrings))
        
    










def main():

 listaNumeros = [1,2,3,-1,-6,0,189,123,89]
 numero = -22
 str1 = "ola shauhs shuahs hsauhsh"
 nomes = ["maria", "joão", "marcelo"]
 x=2
 y=3
 l1= [1,2,5]
 l2 = [1,3, 6]
 
 print(funcHTML(listaStrings))
 print(charFound("a","ssuhasuhas"))
 print(funcPar(listaNumeros))
 print(funcEntre(listaNumeros))
 print(funcNumNeg(numero))
 print(funcCalculaNum(listaNumeros))
 print(funcCalculaNum(listaNumeros))
 print(funcEspacos(str1))
 print(funcAux(nomes))
 print(hasEqHeads(l1,l2))
 print( somaQuad(x,y))
