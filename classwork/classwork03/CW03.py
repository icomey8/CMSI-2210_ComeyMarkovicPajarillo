import argparse
import sys

nato_alphabet = {
    "A" : "Alfa",
    "B" : "Bravo",
    "C" : "Charlie",
    "D" : "Delta",
    "E" : "Echo",
    "F" : "Foxtrot",
    "G" : "Golf",
    "H" : "Hotel",
    "I" : "India",
    "J" : "Juliett",
    "K" : "Kilo",
    "L" : "Lima",
    "M" : "Mike",
    "N" : "November",
    "O" : "Oscar",
    "P" : "Papa",
    "Q" : "Quebec",
    "R" : "Romeo",
    "S" : "Sierra",
    "T" : "Tango",
    "U" : "Uniform",
    "V" : "Victor",
    "W" : "Whiskey",
    "X" : "Xray",
    "Y" : "Yankee",
    "Z" : "Zulu"
    }
morse_alphabet = {
    "A" : "._",
    "B" : "_...",
    "C" : "_._.",
    "D" : "_..",
    "E" : ".",
    "F" : ".._.",
    "G" : "_ _.",
    "H" : "....",
    "I" : "..",
    "J" : "._ _ _",
    "K" : "_._",
    "L" : "._..",
    "M" : "_ _",
    "N" : "_ .",
    "O" : "_ _ _",
    "P" : "._ _.",
    "Q" : "_ _ . _",
    "R" : ". _ .",
    "S" : "...",
    "T" : "_",
    "U" : ".._",
    "V" : "..._",
    "W" : "._ _",
    "X" : "_.._",
    "Y" : "_._ _",
    "Z" : "_ _ .."
    }

def alphabet_to_nato(input):
    for letter in input:
        print(nato_alphabet[letter.upper()])

def alphabet_to_morse(input):
    for letter in input:
        print(morse_alphabet[letter.upper()])

def interest_rate(initial_balance, interest_rate):
    balances = []
    balances.append(initial_balance)
    while len(balances) < 4:
        interest_percent = float(interest_rate)*0.01/12 + 1.0
        balance_unrounded = float(balances[-1])*interest_percent
        balances.append(round(balance_unrounded, 2))
    print("Initial balance:", balances[0])
    print("Annual interest rate in percent:", interest_rate)
    print("After first month:", balances[1])
    print("After second month:", balances[2])
    print("After third month:", balances[3])

def main():
    parser = argparse.ArgumentParser(description="Let's check our parking lot!")
    parser.add_argument("--nato", "-n",
                        help="A word to be converted to the NATO alphabet.")
    parser.add_argument("--morse", "-m",
                        help="A word to be converted to morse code.")
    parser.add_argument("--balance", "-b",
                        help="An integer for the initial balance in a bank account.")
    parser.add_argument("--interest", "-i",
                        help="An integer for the percent interest rate on back account." )
    args = parser.parse_args()
    nato_input = args.nato
    morse_input = args.morse
    balance_input = args.balance
    interest_input = args.interest

    if nato_input:
        alphabet_to_nato(nato_input)
    elif morse_input:
        alphabet_to_morse(morse_input)
    elif balance_input and interest_input:
        interest_rate(balance_input, interest_input)
    else:
        raise TypeError(f"Missing argument.")

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        sys.exit()
