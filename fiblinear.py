U=[]
u=int(input("enter the number of attendent in program"))
for i in range(u):
    r=int(input("number of students attendents in program"))
    U.append(r)
print("total attendend are",U)
    
key=int(input("enter the number that you choose"))
flag=0
#linear search

for i in range(u):
    if(U[i]==key):
        flag=1
        break
if flag==1:
    print(key,"is present")
else:
    print(key,"is absent")
    
    

#fibonacci search

offset=-1
fib2=0
fib1=1
fib=fib1+fib2
while(fib<u):
    fib2=fib1
    fib1=fib
    fib=fib1+fib2
flag=0

while(fib>1):
    i=min(offset+fib2,u-1)
    if(U[i]==key):
        flag=1
        break
    elif(U[i]>key):
        fib=fib2
        fib1=fib1-fib2
        fib2=fib-fib1
    elif(U[i]<key):
        fib=fib1
        fib1=fib2
        fib2=fib-fib1
        offset=i
if(flag==1):
    print(key,"is present")
else:
    print(key,"is absent")


    
    
    
    
    
    







    

    

    