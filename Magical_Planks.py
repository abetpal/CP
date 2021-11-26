'''
author: nobrakebicycle
created: 26.11.2021 21:38:29
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
tt = int(input())
for ii in range(0, tt):
    nn = int(input())
    ss = input()
    n1 = 0
    n2 = 0
    for ii in range(0, len(ss)-1):
        if ss[ii] == ss[ii+1]:
            pass

        elif ss[ii] != ss[ii+1]:
            if ss[ii] == 'W':
                n1 += 1
            else:
                n2 += 1
    if ss[-1] == 'W':
        n1 += 1
    else:
        n2 += 1
    print(min(n1, n2))
