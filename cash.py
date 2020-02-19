from cs50 import get_float

while True:
    ch = get_float("Change owed: ")
    if ch > 0:
        break

x = 0
# x means x
ch = ch * 100
while ch >= 25:
    ch = ch - 25
    x = x + 1

while ch >= 10:
    ch = ch - 10
    x = x + 1

while ch >= 5:
    ch = ch - 5
    x = x + 1

while ch >= 1:
    ch = ch - 1
    x = x + 1

print("", x)

# money