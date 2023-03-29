import time

import pygame

pygame.init()

# Спрайты

walkRight = [pygame.image.load("sprites/Right_run_1.png"),
             pygame.image.load("sprites/Right_run_2.png"),
             pygame.image.load("sprites/Right_run_3.png"),
             pygame.image.load("sprites/Right_run_4.png"),
             pygame.image.load("sprites/Right_run_5.png"),
             pygame.image.load("sprites/Right_run_6.png")]
walkLeft =  [pygame.image.load("sprites/Left_run_1.png"),
             pygame.image.load("sprites/Left_run_2.png"),
             pygame.image.load("sprites/Left_run_3.png"),
             pygame.image.load("sprites/Left_run_4.png"),
             pygame.image.load("sprites/Left_run_5.png"),
             pygame.image.load("sprites/Left_run_6.png")]
stand = pygame.image.load("sprites/Punk_hurt.png")
background = pygame.image.load("sprites/background.png")
#

clock = pygame.time.Clock()

# Окно
win = pygame.display.set_mode((500, 500))
pygame.display.set_caption('First_Shit')

# Player`s set
x = 50  # Позиции старта
y = 435
width = 27  # Размер модельки
height = 33
speed = 5  # Скорость передвижение

Jump = False
Jump_Count = 10

Left = False
Right = False
animeCount = 0
lastMove = "Right"

# Функции и классы


class Projectile():

    def __init__(self, x, y, radius, color, facing):
        self.x = x
        self.y = y
        self.radius = radius
        self.color = color
        self.facing = facing
        self.vel = 8 * facing

    def draw(self, win):
        pygame.draw.circle(win, self.color, (self.x, self.y), self.radius)


def DrawWindow():
    global animeCount

    win.blit(background, (0, 0))  # Загрузка фона

    if animeCount + 1 >= 30:
        animeCount = 0

    if Left:
        win.blit(walkLeft[animeCount // 5], (x, y))
        animeCount += 1
    elif Right:
        win.blit(walkRight[animeCount // 5], (x, y))
        animeCount += 1
    else:
        win.blit(stand, (x, y))

    for bullet in bullets:
        bullet.draw(win)
    pygame.display.update()  # Выводим на экран


# Цикл

run = True
bullets = []
while run:
    clock.tick(30)  # 30 FPS

    for event in pygame.event.get():  # pygame.event.get() - специальный массив.
        if event.type == pygame.QUIT:
            run = False

    for bullet in bullets:
        if 500 > bullet.x > 0:
            bullet.x += bullet.vel
        else:
            bullets.pop(bullets.index(bullet))

    keys = pygame.key.get_pressed()  # Массив с кнопками

    if keys[pygame.K_f]:
        if lastMove == "Right":
            facing = 1
        else:
            facing = -1

        if len(bullets) < 100:
            bullets.append(Projectile(round(x + width // 2),round(y + width // 2), 5, (255, 0, 255), facing))

    if keys[pygame.K_LEFT] and x > 5:
        x -= speed
        Left = True
        Right = False
        lastMove = "Left"
    elif keys[pygame.K_RIGHT] and x < 500 - width - 5:
        x += speed
        Left = False
        Right = True
        lastMove = "Right"
    else:
        Left = False
        Right = False
        animeCount = 0

    if not Jump:
        if keys[pygame.K_SPACE]:
            Jump = True
    else:
        if Jump_Count >= -10:
            if Jump_Count < 0:
                y += (Jump_Count ** 2) / 2
            else:
                y -= (Jump_Count ** 2) / 2
            Jump_Count -= 1
        else:
            Jump = False
            Jump_Count = 10

    DrawWindow()

pygame.quit()

