from random import randint

decision = ["rock", "paper", "scissors"]

def main():

    comp = decision[randint(0,2)]

    print("Let's play Rock Paper Scissor!\n")
    you = input("Your choice: ").lower()
    print("Computer chose: " + comp)

    if you == comp:
        print("It's a Draw!")
    elif you == "rock" and comp == "paper":
        print("Computer Wins!")
    elif you == "rock" and comp == "scissors":
        print("You Win!")
    elif you == "paper" and comp == "scissors":
        print("Computer Wins!")
    elif you == "paper" and comp == "rock":
        print("You Win!")
    elif you == "scissors" and comp == "rock":
        print("Computer Wins!")
    elif you == "scissors" and comp == "paper":
        print("You Win")

    main()
main()