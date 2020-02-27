import sys
from cs50 import get_string


def main():

 if len(sys.argv) != 2:
  print("Usage: python bleep.py dictionary")
  False

 infile = open(sys.argv[1], "r")
 bad = infile.read()
 ban = bad.split()
 cuss = bad.upper()

 text = get_string("What message would you like to censor?\n")
 word = text.split()


 for i in word:
  if i.upper() in cuss:
   for n in i:
    print("*", end="")
   print(" ", end= "")
  elif i in ban:
   for n in i:
    print("*", end="")
   print(" ", end= "")
  else:
   print(f"{i} ", end="")

 print("")
if __name__ == "__main__":
    main()