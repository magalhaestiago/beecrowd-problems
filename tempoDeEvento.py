

# print(horaCompleta[3])

def contadorString(s):
    cont = 0
    for i in s:
        cont = cont + 1
        
    return cont


# Inicio do evento


diaComeco = input()
horaCompletaComeco = input()

if contadorString(diaComeco) > 5:
    diaComecoInt = int(diaComeco[4]+diaComeco[5]) 
else:
    diaComecoInt = int(diaComeco[4])

horaComeco = int(horaCompletaComeco[0] + horaCompletaComeco[1])
minutosComeco = int(horaCompletaComeco[5] + horaCompletaComeco[6])
segundosComeco = int(horaCompletaComeco[10] + horaCompletaComeco[11])



horasEmSegundosComeco = horaComeco * 3600
minutosEmSegundosComeco = minutosComeco * 60
segundosTotalComeco = horasEmSegundosComeco + minutosEmSegundosComeco + segundosComeco


# Data final do evento

diaFinal = input()
horaCompletaFinal = input()

if contadorString(diaFinal) > 5:
    diaFinalInt = int(diaFinal[4]+diaFinal[5]) 
else:
    diaFinalInt = int(diaFinal[4])


horaFinal = int(horaCompletaFinal[0] + horaCompletaFinal[1])
minutosFinal = int(horaCompletaFinal[5] + horaCompletaFinal[6])
segundosFinal = int(horaCompletaFinal[10] + horaCompletaFinal[11])


horasEmSegundosFinal = horaFinal * 3600
minutosEmSegundosFinal = minutosFinal * 60
segundosTotalFinal = horasEmSegundosFinal + minutosEmSegundosFinal + segundosFinal


# calculos

# qntdDiasSegundos = (diaFinalInt - diaComecoInt) * 86400 
print("Segundos total do inicio: ",segundosTotalComeco)
print("Segundos total do final: " ,segundosTotalFinal)