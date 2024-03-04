

def contadorString(nome:str):
    cont = 0
    for i in nome:
        cont = cont + 1
        
    return cont


#print(contadorString("Tiago"))
#nome = "Tiago"
#print(nome[0])


aux = 0
cont = 0

num = int(input())

while aux < num:
    cont = 0
    led = input()
    
    for i in range(contadorString(led)):
        if led[i] == '1':
            cont = cont + 2
        elif led[i] == '2':
            cont = cont + 5
        elif led[i] == '3':
            cont = cont + 5
        elif led[i] == '4':
            cont = cont + 4
        elif led[i] == '5':
            cont = cont + 5
        elif led[i] == '6':
            cont = cont + 6
        elif led[i] == '7':
            cont = cont + 3
        elif led[i] == '8':
            cont = cont +7
        elif led[i] == '9':
            cont = cont + 6
        elif led[i] == '0':
            cont = cont + 6
            
    print(f'{cont} leds')
    aux = aux + 1
