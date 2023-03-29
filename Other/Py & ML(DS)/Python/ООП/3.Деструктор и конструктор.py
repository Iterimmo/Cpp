class Point:

    x = 10
    y = 5

    # --Создание конструктора --
    def __init__(self, val_1 = 0, val_2 = 0):  # Для  val_1 и val_2 можно задать значения (val_1 = 0...) для гибкости
        self.first = val_1
        self.second = val_2

    # --Создание деструктора
    def __del__(self):  # Пока на объект имеется хотя бы одна внешняя ссылка - он существует. Если таковых нет - del
        print('{} был удален'.format(self.__str__()))

    # --Создание локальных переменных--
    def сreateсonst(self, val_1, val_2):
        self.third = val_1
        self.four = val_2

    # Вывод словаря на экран
    def items(self):
        print(self.__dict__)


print('\n')
# Несколько вариантов создания локальных переменных
pt_1 = Point(90, 200)
pt_1.third = 130
pt_1.four = 56


pt_2 = Point(90, 200)
pt_2.сreateсonst(130 , 56)



pt_1.items()
""""""
print('\n')
""""""
pt_2.items()



