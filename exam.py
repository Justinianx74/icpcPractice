correct=int(input())
you=input()
friend=input()
wrong=abs(correct-len(you))
countc=0
countw=0
for x in range(len(you)):
    if ((you[x]==friend[x]) & (countc < correct)):
        countc+=1
    elif ((you[x]!=friend[x]) & (countw < wrong)):
        countw += 1
print (countc+countw)