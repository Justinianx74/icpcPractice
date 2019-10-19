first= input()
start=first.split(" ")
count=0
maxs=0
for i in start:
    count =0
    for x in range(len(start)):
        if i[0]==start[x][0]:
            count+=1
    if count > maxs:
        maxs=count
print(maxs)