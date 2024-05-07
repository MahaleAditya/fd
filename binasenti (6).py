U=[]
u=int(input("enter the number of attendent in program"))
for i in range(u):
    r=int(input("number of students attendents in program"))
    U.append(r)
print("total attendend are",U)
    
key=int(input("enter the number that you choose"))


#binary search
U.sort()
start=0
end=u-1
flag=0
while(start<=end):
    mid=(start+end)//2
    if(key==U[mid]):
        flag=1
        break
    elif(key<=U[mid]):
        end=mid-1
    else:
        start=mid+1
if(flag==1):
    print(key,"is present")
else:
    print(key,"is absent")
    
#sentinel
U.append(key)
i=0
while(U[i]!=key):
    i=i+1
if(i<u):
    print(key,"is present")
else:
    print(key,"is absent")
    


