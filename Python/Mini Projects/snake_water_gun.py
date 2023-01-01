import random
# function to get the result


def SnakeWaterGun(you, comp):
    if (you == comp):
        return 0
    if (you == 's' and comp == 'w'):
        return 1
    elif (you == 's' and comp == 'g'):
        return -1
    if (you == 'g' and comp == 's'):
        return 1
    elif (you == 'g' and comp == 'w'):
        return -1
    if (you == 'w' and comp == 's'):
        return -1
    elif (you == 'w' and comp == 'g'):
        return 1
    else:
        print("Invalid Choice! Play according to rules!")


print("*******************Welcome To Snake Water Gun*******************")
you = input(
    "Enter your choice \'s\' for snake, \'w\' for water, \'g\' for gun :\n")
number = random.randint(1, 100)
# Choice of computer
if (number > 33):
    comp = 's'
elif (number < 33 and number > 66):
    comp = 'w'
else:
    comp = 'g'
result = SnakeWaterGun(you, comp)
if (result == 0):
    print("Game drawn!")
elif (result == 1):
    print("You won!")
else:
    print("You lose!")
print(f"You Choose {you} and computer chose {comp}.")
print(f"Your donwwonla")
