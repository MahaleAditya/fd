S=[]
n=int(input("no of student in the class"))
for i in range(n):
    i=i+1
    S.append(i)
print("total student in class",S)

M=[]
#m=int(input("marks of the student"))
for i in range(n):
    r=int(input("enter score of each student"))
    M.append(r)
print("score of the whole class",M)

#average score
add=0
for j in range(n):
        add=add+M[j]
        avg=add/n
print("average score of the class is ",avg)

#highest score
high=0
for i in range(n):
    if(M[i]>high):
        high=M[i]
print("highest score of the class is ",high) 

#lowest score
low=100
for i in range(n):
    if(M[i]<low):
         low=M[i]
print("lowest score of the class is ",low)

#frequency
for i in range(n):
    count=0
    for j in range(n):
        if(M[i]==M[j]):
              count=count+1
    print("frequency of",M[i],"is",count)


    
          



    
