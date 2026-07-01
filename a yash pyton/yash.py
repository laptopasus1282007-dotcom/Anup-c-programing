import random
secret_number = random.randint(1,5)
print("i am thinking of a number between 1 and 5")
guess =input("what is your number?")
guess = int(guess)
 if guess == secret_number:
    print("you won")
 else:
    print("you lose the number was",secret_number)