def contadorString(nome:str):
    cont = 0
    for i in nome:
        cont = cont + 1
        
    return cont

expressao = input()

contOpen = 0
contClose = 0

for i in range(contadorString(expressao)):
    if(expressao[i] == '('):
        contOpen = contOpen + 1
    elif expressao[i] == ')' and contOpen == contClose + 1:
        contClose = contClose + 1
        
    
if contClose != contOpen:
    print("incorrect")
else:
    print("correct")


