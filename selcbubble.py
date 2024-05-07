n=int(input("total student in class"))

P=[]   
for i in range(n):
    r=float(input("enter percentage of student"))
    P.append(r)
print("precentage of student",P)


#selection sort
for i in range(n):
    min=P[i]
    ind=i
    j=i+1
    while(j<n):
        if(min>P[j]):
            min=P[j]
            ind=j
        j=j+1
        temp=P[i]
        P[i]=P[ind]
        P[ind]=temp
print("sorted list by selection sort",P)


#bubble sort
for i in range(n):
    j=0
    while(j<n-i-1):
        if(P[j]>P[j+1]):
            temp=P[j+1]
            P[j+1]=P[j]
            P[j]=temp
        j=j+1
print("sorted list by bubble sort",P)
        
    