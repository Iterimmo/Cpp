import collections
from collections import namedtuple

# ntuple = collections.namedtuple(typename,field_names, *, \
#                                rename= False, defaults= None, module= None)


# typename - строка, имя именованного кортежа,
# field_names - последовательность строк, имена элементов кортежа,
# rename - bool, авто-переименование повторяющихся имен элементов,
# defaults=None - итерируемая последовательность, значения по умолчанию имен кортежа,
# module=None - атрибут __module__ именованного кортежа.

Point = namedtuple('Point', ['x', 'y'])
p = Point(x=11, y=22)
print(p[0] + p[1], end='\n')
print(p.x + p.y, end='\n')
print(p, end='\n')
x, y = p
print(x, y, end='\n')
print(getattr(p, "x"), end='\n')
print(p._asdict(), end='\n')  # Вывод в форме словаря
print(p, end='\n')  # Не изменяет саму p
p_copy = p._asdict()  # Только если так
print(p_copy, end='\n')
p._replace(x=33)
print(p._replace(x=33), end='\n')  # Не изменяет саму p
print(p, end='\n')
p_copy2 = p._replace(x=33)  # Можно изменить вот так
print(p_copy2, end='\n')
print('\n\n')

print(p._fields, end='\n')
Color = namedtuple('Color', 'red green blue')
Pixel = namedtuple('Pixel', Point._fields + Color._fields)
test = Pixel(11, 22, 128, 255, 0)
print(test)
