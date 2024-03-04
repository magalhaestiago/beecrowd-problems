

lista = {
    'vertebrado': {
        'ave':{
            'carnivoro':
                'aguia'
            , 'onivoro':
                'pomba'
            
            }, 
        'mamifero':{
            'onivoro':'homem',
            'herbivoro': 'vaca'
        }
    },
    'invertebrado': {
        'inseto':{
            'hematofago':
                'pulga'
            , 'herbivoro':
                'lagarta'
            
            }, 
        'anelideo':{
            'hematofago':'sanguessuga',
            'onivoro': 'minhoca'
        }
    }
}
"""
def checar(i1, i2, i3):
    print(lista[i1][i2][i3])
"""
h1 = input()
h2 = input()
h3 = input()

print(lista[h1][h2][h3])