
def contadorString(string):
    cont = 0
    for i in string:
        cont = cont + 1
        
    return cont

entrada = input()


novo = []
for i in range(contadorString(entrada)):
    
    if entrada[i] == ' ':
        pass
    
    aux = ord(entrada[i])
    
    
    if (aux > 64 and aux <= 90) or (aux >= 97 and aux <= 122):
        aux = aux + 3
        novo.append(chr(aux))
    else:  
        novo.append(chr(aux))
        pass
    
for i in novo:
    for j in novo:
        aux2 = novo[j]
        novo[j] = novo[j+1]
        novo[j+1] = aux2
        
        
print(entrada)
print(novo)


