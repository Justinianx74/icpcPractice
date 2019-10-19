both=input()
bothl=both.split(" ")
first=bothl[0]
second=bothl[1]
amount=0
while first <= second:
    unique=True
    div=True
    for x in first:
        if first.count(x) >= 2:
            unique=False
        count=int(first)
        if int(x) ==0: div=False
        elif count%(int(x)): div=False
    if unique & div:
        amount+=1       
    first=int(first)
    first+=1
    first=str(first)
print(amount)