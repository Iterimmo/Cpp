    class Person:
    name = 'Ivan'
    age = 30

    def die():
        print('Time to die')


print('\n')
# Вызов функции

Person.die()
getattr(Person, 'die')()


print('\n')
# Вызов функции через экземпляр невозможна без "@staticmethod"

a = Person()
print(a.die)  # bound method
print(Person.die)  # function

print('\n')


class Person_2:
    name = 'Liza'
    age = 23

    @staticmethod
    def die():
        print('Time to die')


b = Person_2()
print(b.die)  # function
print(Person_2.die)  # function

print('\n')


# Также это можно реализовать через self
class Person_3:
    name = 'Nikita'
    age = 34

    @staticmethod
    def die(self):
        print('Time to die')

c = Person_3()
print(c.die)  # bound method
print(Person.die)  # function


































