'''
author: nobrakebicycle
created: 06.12.2021 22:06:45
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
import sys
l = []
i = 0
s = ""
for t in sys.stdin:
    if(t == "" or t == "\n" or t == ''):
        if not s == "":
            l.append(s)
        i = 0
        s = ""
        continue
    if(i == 0):
        t = t.strip()
        s = s + t.lower()
        i = i+1
    else:
        t = t.strip()
        t = t.lower()
        t = t.capitalize()
        s = s+t
    # print(s)
if not s == "":
    l.append(s)
k = ""
for t in l:
    k = k+t+" "
k = k.strip()
print(k)
