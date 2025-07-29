import random

def determine_winner(player_choice, computer_choice):
    """
    Determines the winner based on player and computer choices.
    Returns 1 if player wins, -1 if computer wins, and 0 for a tie.
    """
    if player_choice == computer_choice:
        return 0
    elif player_choice == 's':
        if computer_choice == 'w':
            return 1
        else:
            return -1
    elif player_choice == 'w':
        if computer_choice == 'g':
            return 1
        else:
            return -1
    elif player_choice == 'g':
        if computer_choice == 's':
            return 1
        else:
            return -1

def main():
    print("Welcome to Snake, Water, and Gun game!")
    rounds = int(input("Enter the number of rounds: "))
    options = ['s', 'w', 'g']
    comp_win = 0
    user_win = 0

    for round_num in range(1, rounds + 1):
        print(f"\nRound {round_num}:\nSnake - 's'\nWater - 'w'\nGun - 'g'")
        try:
            player_choice = input("Choose your option: ")
        except EOFError as e:
            print(e)
            continue

        if player_choice not in options:
            print("Invalid input, try again.\n")
            continue

        computer_choice = random.choice(options)

        result = determine_winner(player_choice, computer_choice)

        if result == 1:
            user_win += 1
            print(f"You won round {round_num}!\n")
        elif result == -1:
            comp_win += 1
            print(f"Computer won round {round_num}!\n")
        else:
            print("It's a draw!\n")

    if user_win > comp_win:
        print("Congratulations! You won the game.")
    elif comp_win > user_win:
        print("You lose! Better luck next time.")
    else:
        print("The game ended in a draw.")

if __name__ == "__main__":
    main()
