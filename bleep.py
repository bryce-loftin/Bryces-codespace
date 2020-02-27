import sys
from cs50 import get_string
#not actually bad words

def main():

    if len(sys.argv) != 2:
        print("Usage: python bleep.py dictionary")
        exit(1)

    infile = open(sys.argv[1], "r")
    bad = infile.read()
    ban = bad.split()
    cuss = bad.upper()
    x = cuss.split()
    text = get_string("What message would you like to censor?\n")
    word = text.split()

    for i in word:

        if i.upper() in cuss:
            for n in i:
                print("*", end="")
            print(" ", end="")

        elif i in ban:
            for n in i:
                print("*", end="")
            print(" ", end="")

        else:
            print(f"{i} ", end="")

    print("")
# this should bleep actual bad words

if __name__ == "__main__":
    main()


#oof