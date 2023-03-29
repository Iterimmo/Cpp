#map , zip , lamda , yield
def um(x):
    return x*5


dictt = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
map_1 = list(map(int, dictt)) # преобразование из кортежа в список
print(map_1)
map_2 = list(map(um,map_1))
print(map_2)

dictt_1 = ('I`m', 'I`m', 'I`m')
dictt_2 = ('first', 'second', 'third')
dictt_3 = ('Number', 'Number', 'Number')
zip_1 = list(zip(dictt_1, dictt_2 , dictt_3))  # Объединение трех кортежей
print(zip_1)

list_1 = ['I`m', 'I`m', 'I`m']
list_2 = ['first', 'second', 'third']
list_3 = ['Number', 'Number', 'Number']
zip_2 = list(zip(list_1, list_2 , list_3))
print(zip_2)

ammo = ['ammo', 'food', 'clothes', 'food', 'ammo', 'tanks', 'guns', 'ammo']
only_ammo = list(filter(lambda x: x == "ammo", ammo))
print(only_ammo)

def plswork():

    for i in [43,65,32,41,23,61]:
        yield i

s = plswork()
print(next(s))
print(next(s))
print(next(s))
print(next(s))
print(next(s))
print(next(s))
print('213')
s = plswork()
DS = plswork()
print(next(DS))
print(next(DS))
print(next(DS))

