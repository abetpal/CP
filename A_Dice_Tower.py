'''
author: nobrakebicycle
created: 28.10.2021 23:11:36
Hello Traveller
आज रपट जायें तो हमें ना कहियो
कल फिसल जायें तो हमें ना उठइयो
Time and Space wait for none.(especially in programming, its just dilemma) ◉‿◉
Dher Mithai mein keeya padela
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
a,b=map(int,input().split())    # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

'''

# Write your code here
n = int(input())
top = int(input())
for i in range(n):
    a, b = map(int, input().split())
    c = 7-a
    d = 7-b
    bottom = 7-top
    if (top == a or top == b or top == c or top == d):
        print("NO\n")
        exit()
print("YES\n")
exit()
