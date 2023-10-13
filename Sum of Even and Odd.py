N=input()
sume = 0
sumo = 0

for i in N:
    if int(i)%2==0:
        sume+=int(i)
    else:
        sumo+=int(i)
print(sume," ",sumo)
