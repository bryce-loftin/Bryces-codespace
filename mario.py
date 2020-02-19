from cs50 import get_int, get_string

while True:
    n = get_int("Height: ")
    if n > 0 and n < 9:
        break
# now stop and go play mario
for i in range(n):
    print(" " * (n-(i+1)), end="")

    print("#" * (i+1))
# no really go play the actual game