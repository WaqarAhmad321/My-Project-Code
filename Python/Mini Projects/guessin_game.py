import random
print("***************Welcome to Number Guessing game***************")
num = random.randint(1, 100)
guess = None
nguess = 1
while (guess != num):
    print("Guess a number between 1 and 100 : ")
    guess = int(input())
    if (guess > num):
        print("Lower number please!")
    elif (guess < num):
        print("Higher number please!")
    nguess = nguess + 1
print(f"You guessed it in {nguess} attempts.")
