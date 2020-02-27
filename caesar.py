import sys
from cs50 import get_int, get_string
#from ctype import isalpha, isupper, islower

if len(sys.argv) != 2:
    print("Usage: python caesar.py k")
    exit(1)


key = int(sys.argv[1])


text = get_string("text: ")
print("ciphertext: ", end="")

for i in range(len(text)):
    if text[i].isalpha():
        x = ord(text[i])

        if text[i].isupper():
            x = x - 65
            y = (x + key) % 26
            y = y + 65

        if text[i].islower():
            x = x - 97
            y = (x + key) % 26
            y = y + 97
        z = chr(y)
        print(z, end="")
    else:
        print(f"{text[i]}", end="")

print("")

# why so may comments
# so manyyyyyyyyyy
# whyyyyyy