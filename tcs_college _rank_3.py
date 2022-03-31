'''
author: nobrakebicycle
created: 12.03.2022 14:20:08
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
noOfColleges, noOfStudents = [int(i) for i in input().split()]
collegeSeats = [0] + [int(i) for i in input().split()]
cutOffMarks = [-1] + [-1 for i in range(noOfColleges)]
Marks = set()
list1 = []
dum = noOfStudents
while(dum > 0):
    id, aaa, b, c, dd2 = input().split(",")
    id = int(id[8:])
    aaa = float(aaa)
    b = int(b[2:])
    c = int(c[2:])
    dd2 = int(dd2[2:])
    list1.append([aaa, id, 1, b])
    list1.append([aaa, id, 2, c])
    list1.append([aaa, id, 3, dd2])
    dum -= 1
list1.sort(key=lambda x: (-x[0], x[1], x[2]))
ptr = 0
while(ptr < len(list1)):
    if list1[ptr][1] not in Marks:
        if collegeSeats[list1[ptr][3]] > 0:
            collegeSeats[list1[ptr][3]] -= 1
            cutOffMarks[list1[ptr][3]] = list1[ptr][0]
            Marks.add(list1[ptr][1])
    ptr += 1
collegeSeats = [[collegeSeats[i], i, cutOffMarks[i]]
                for i in range(1, len(collegeSeats))]
collegeSeats.sort(key=lambda x: (-x[0], x[1], x[2]))
d1 = 0
ptr = 0
while(ptr < len(list1)):
    if list1[ptr][1] not in Marks:
        while d1 < len(collegeSeats) and collegeSeats[d1][0] <= 0:
            d1 += 1
        if d1 < len(collegeSeats):
            collegeSeats[d1][0] -= 1
            if collegeSeats[d1][2] == -1:
                collegeSeats[d1][2] = 100
            collegeSeats[d1][2] = min(collegeSeats[d1][2], list1[ptr][0])
            Marks.add(list1[ptr][1])
    ptr += 1
collegeSeats.sort(key=lambda x: -x[2])

for mem in collegeSeats:
    if mem[2] != -1:
        print("C-" + str(mem[1]), mem[2])
    else:
        print("C-" + str(mem[1]), "n/a")
