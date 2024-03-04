"""
def coordenadasDeUmPonto(x: float, y:float):
    if x == 0 and y != 0:
        print("Eixo Y")
    elif y == 0 and x != 0:
        print("Eixo X")
        
    elif x > 0 and y > 0:
        print("Q1")
    elif x < 0 and y > 0:
        print("Q2")
    elif x < 0 and y < 0:
        print("Q3")
    elif x > 0 and y < 0:
        print("Q4")
    else:
        print("Origem")

 
print(coordenadasDeUmPonto(4.5, -2.2))
print(coordenadasDeUmPonto(0.1, 0.1))
print(coordenadasDeUmPonto(0.0, 0.0))
"""  

    
x = float(input())
y = float(input())

if x == 0 and y != 0:
    print("Eixo Y")
elif y == 0 and x != 0:
    print("Eixo X")
    
elif x > 0 and y > 0:
    print("Q1")
elif x < 0 and y > 0:
    print("Q2")
elif x < 0 and y < 0:
    print("Q3")
elif x > 0 and y < 0:
    print("Q4")
else:
    print("Origem")
