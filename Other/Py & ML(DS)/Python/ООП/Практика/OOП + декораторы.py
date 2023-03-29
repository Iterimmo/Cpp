class Box:

    def __init__(self, side, sq = 0):
        self.side = side
        self.sq = sq

    @property
    def square(self):

        self.sq = self.side ** 2

class Circle:

    def __init__(self, radius):
        self.radius = radius

    @property
    def square(self):

        return self.radius * 2 * 3.14



class Rectangle():

    def __init__(self, side_a, side_b):
        self.side_a = side_a
        self.side_b = side_b

    @property
    def square(self):

        return self.side_b * self.side_a




F_1 = Box(5)
F_2 = Circle(5)
F_3 = Rectangle(5,4)

print(F_1.square)
print(F_1.sq)

print(F_2.square)
print(F_3.square)

#Пропити и геттеры сеттеры