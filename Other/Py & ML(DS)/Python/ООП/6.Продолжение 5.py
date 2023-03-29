# <имя атрибута> (без подчеркиваний вначале) - публичное свойство класса (public)
# _<имя атрибута> с одним нижним подчеркиванием - защищенное свойство класса. Можно обращаться только внутри класса
# и во всех его дочерних классах
# __<имя атрибута> с двумя подчеркиваниями - приватное свойство классса. Можно обращаться только внутри класса.
# Однако к содержимому такого класса/экземпляра класса можно обратиться чрез _ИмяКласса__ИмяПеременной (pt._Point__x)
class Point:

    WIDTH = 5

    def __init__(self, x= 0, y = 0):
        self.__x = x; self.__y = y

    def __checkValue(x):
        if isinstance(x, int) or isinstance(x, float):
            return True
        else:
            return False

    def setCorrds(self, x, y):  # setter - сеттер
        if Point.__checkValue(x) and Point.__checkValue(y):
            self.__x = x
            self.__y = y
        else:
            print('Сделал хуйню')

    def getCorrds(self):  # getattr - геттер
        return self.__x, self.__y

    def __getattribute__(self, item): # Запомнить конструкцию
        if item == '_Point__x':
            return 'Частная переменная'
        else:
            return object.__getattribute__(self, item)

    def __setattr__(self, key, value):
        if key == 'WIDTH':
            raise AttributeError
        else:
            print('Свойства класса были изменены')
            self.__dict__[key] = value

    def __getattr__(self, item):
        print('__getattr__: ' + item)

    def __delattr__(self, item):
        print('__delattr__: ' + item)




pt = Point(1,2)
pt.z = 5