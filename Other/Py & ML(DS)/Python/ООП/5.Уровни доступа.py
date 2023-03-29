# <имя атрибута> (без подчеркиваний вначале) - публичное свойство класса (public)
# _<имя атрибута> с одним нижним подчеркиванием - защищенное свойство класса. Можно обращаться только внутри класса
# и во всех его дочерних классах
# __<имя атрибута> с двумя подчеркиваниями - приватное свойство классса. Можно обращаться только внутри класса.








class Bank: #public

    def __init__(self, name, balance, passport):
        self.name = name
        self.balance = balance
        self.passport = passport

    def print_data(self):
        print(self.name, self.balance, self.passport)


Person_one = Bank('Oleg', 150000, 12345)
Person_one.print_data()
print(Person_one.name)
print(Person_one.balance)
print(Person_one.passport)

print('\n')


class Protected_Bank:  # Protected. Добавляются везде _ перед атрибутом/методом класса.
                       # Используется на уровне согласования между разработчиками.
    def __init__(self, name, balance, passport):
        self._name = name
        self._balance = balance
        self._passport = passport

    def print_data_Protected(self):
        print(self._name, self._balance, self._passport)


Person_two = Protected_Bank('Zina', 75000, 434545)
Person_two.print_data_Protected()
print(Person_two._name)


class Private_Bank:  # Protected. Добавляются везде __ перед атрибутом/методом класса. Ограничевает доступ все класса

    def __init__(self, name, balance, passport):
        self.__name = name
        self.__balance = balance
        self.__passport = passport


    def __print_data_Private(self):
        print(self.__name, self.__balance, self.__passport)

    def print_data_Protected(self):
        print(self._name, self._balance, self._passport)


Person_three = Private_Bank('Pasha', 30000, 131345)

#Person_three.print_data_Protected() # Вызовет ошибку
#print(Person_three.__name)

#Получание приватной информации

print(dir(Person_three))
Person_three._Private_Bank__print_data_Private()























