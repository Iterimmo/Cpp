class Point3D:
    xyz = [0] * 3

    def __init__(self, x = 0, y = 0, z = 0):
        self.xyz[0] = x
        self.xyz[1] = y
        self.xyz[2] = z

    def items(self):
        print(self.__dict__)

    def move(self, x = xyz[0], y = xyz[1], z = xyz[2]):
        self.xyz[0] = x
        self.xyz[1] = y
        self.xyz[2] = z




pt_1 = Point3D()
pt_1.cord = Point3D.xyz
pt_1.items()
pt_1.move(y = 5)
pt_1.items()

cord_list = list(pt_1.cord)
print(cord_list)





































