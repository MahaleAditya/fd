m=int(input("enter number of row :"))
n=int(input("enter number of coloum :"))
A=[]
for i in range(m):
    sublist=[]
    for j in range(n):
        e=int(input("enter :"))
        sublist.append(e)
    A.append(sublist)
print(A)    

x=int(input("enter number of row :"))
y=int(input("enter number of coloum :"))
B=[]
for i in range(m):
    sublist=[]
    for j in range(n):
        e=int(input("enter :"))
        sublist.append(e)
    B.append(sublist)
print(B)    

C=[]
for i in range(x):
    sublist=[]
    for j in range(y):
        e=A[i][j]+B[i][j]
        sublist.append(e)
    C.append(sublist)
print("ADDITION OF TWO MATRIX",C)  

D=[]
for i in range(m):
    sublist=[]
    for j in range(n):
        e=A[i][j]-B[i][j]
        sublist.append(e)
    D.append(sublist)
print("SUBSTRACTION OF TWO MATRIX",D)  

K=[]
for i in range(m):
    sublist=[]
    
    for j in range(n):
        sum=0
        for k in range(m):
         sum=sum+A[i][k]*B[k][j]
         
         sublist.append(sum)
    K.append(sublist)
print("MULTIPLICATION OF TWO MATRIX", K)  

E=[]
for i in range(m):
    sublist=[]
    for j in range(n):
        e=(A[j] [i]) 
        sublist.append(e)
    E.append(sublist)
print("TRANSPOSE OF TWO MATRIX",E)  

F=[]
for i in range(m):
    sublist=[]
    for j in range(n):
        e=(B[j] [i]) 
        sublist.append(e)
    F.append(sublist)
print(F)  
