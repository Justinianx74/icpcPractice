t=int(input())
for i in range(t):
    n=int(input())
    thisdict=dict()
    for x in range(n):
        inp=input()
        thing=inp.split(" ")
        thing[1]=int(thing[1])
        if thing[0] in thisdict:
            thisdict[thing[0]] = thisdict[thing[0]] + thing[1]
        else:
            thisdict[thing[0]] = thing[1]
    print(len(thisdict))
    for i in sorted(thisdict.items(), key = lambda item: item[1], reverse=True):
        print(i[0], i[1])