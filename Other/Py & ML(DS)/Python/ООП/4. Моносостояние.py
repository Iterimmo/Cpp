

class Cat:
    __shared_attr = {
        'breed': 'pers',
        'color' : 'black'
    }

    def __init__(self):
        self.__dict__ = Cat.__shared_attr

    def items(self):
        print(self.__dict__)


# Создаем два экземпляра класса

d = Cat()
g = Cat()

d.items()
g.items()
print('\n')

# Изменяем/добавляем значение атрибута экземпляра d и выводим результат на экран.
d.breed = 'siam'
g.age = 5

d.items()
g.items()
# Оба экземпляра изменились