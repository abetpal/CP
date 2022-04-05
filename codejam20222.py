'''
author: nobrakebicycle
created: 03.04.2022 06:08:34
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

c = 1
testcase = int(input())

while(testcase):
    case1, mark1, yark1, kite1 = map(int, input().split())
    case2, mark2, yark2, kite2 = map(int, input().split())
    case3, mark3, yark3, kite3 = map(int, input().split())

    k4 = min(kite1, kite2, kite3)
    c4 = min(case1, case2, case3)
    y4 = min(yark1, yark2, yark3)

    print("Case #"+str(c)+": ", end="")
    m4 = min(mark1, mark2, mark3)
    c += 1
    if(c4 >= 1000000):
        print(1000000, 0, 0, 0)
    elif(m4 >= 1000000):
        print(0, 1000000, 0, 0)
    elif(y4 >= 1000000):
        print(0, 0, 1000000, 0)
    elif(k4 >= 1000000):
        print(0, 0, 0, 1000000)
    elif(c4+m4 >= 1000000):
        print(c4, 1000000-c4, 0, 0)
    elif(c4+y4 >= 1000000):
        print(c4, 0, 1000000-c4, 0)
    elif(c4+k4 >= 1000000):
        print(c4, 0, 0, 1000000-c4)
    elif(m4+y4 >= 1000000):
        print(0, m4, 1000000-m4, 0)
    elif(m4+k4 >= 1000000):
        print(0, m4, 0, 1000000-m4)
    elif(y4+k4 >= 1000000):
        print(0, 0, y4, 1000000-y4)
    elif(c4+m4+y4 >= 1000000):
        print(c4, m4, 1000000-(c4+m4), 0)
    elif(c4+m4+k4 >= 1000000):
        print(c4, m4, 0, 1000000-(c4+m4))
    elif(c4+y4+k4 >= 1000000):
        print(c4, 0, y4, 1000000-(c4+y4))
    elif(m4+y4+k4 >= 1000000):
        print(0, m4, y4, 1000000-(m4+y4))
    elif(c4+m4+y4+k4 >= 1000000):
        print(c4, m4, y4, 1000000-(c4+m4+y4))
    else:
        print("IMPOSSIBLE")
    testcase -= 1
