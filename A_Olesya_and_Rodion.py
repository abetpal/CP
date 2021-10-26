'''
author: nobrakebicycle
created: 26.10.2021 22:00:59
Hello Traveller
आज रपट जायें तो हमें ना कहियो
कल फिसल जायें तो हमें ना उठइयो
Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
Dher Mithai mein keeya padela
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

'''

# Write your code here
m, n = map(int, input().split())
if n == 10 and m == 1:
    print("-1")
elif n == 10:
    print("1"+"0"*(m-1))
else:
    print(str(n)*m)
