'''
author: nobrakebicycle
created: 02.04.2022 14:43:41
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
testcasecount = 1
testcase = int(input())
while(testcase):
    right, center = map(int, input().split())
    print("Case #"+str(testcasecount)+":")
    for i1 in range(2*right+1):
        for j1 in range(center*2+1):
            # Write your code here
            if(i1 < 2 and (j1 == 0 or j1 == 1)):
                print('.', end="")
            else:
                if(i1 & 1):
                    if(j1 & 1):
                        # Write your code here
                        print('.', end="")
                    else:
                        print('|', end="")
                else:
                    if(j1 & 1):
                        # Write your code here
                        print('-', end="")
                    else:
                        print('+', end="")
        print()
    testcase -= 1
    testcasecount += 1
