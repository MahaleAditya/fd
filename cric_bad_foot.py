#no of student who play play both cri and badminton
def AintersectionB(A,B):
    AandB=[]
    for i in A:
        for j in B:
            if(i==j):
                AandB.append(i)
    print("student who play both cricket and bad: ",AandB)
    print("total number of student who play both cri and bad: ",len(AandB))    

#no of student who play either cricket or badminton but not both
def AsymdifferenceB(A,B):
    AorB=[]
    
    for i in A:
        if i not in B:
            AorB.append(i)

    for i in B:
        if i not in A:
            AorB.append(i)
    print("student who play either crickrt or badminton but not both:",AorB)
    print(" total student who play either crickrt or badminton but not both: ",len(AorB)) 

#student who play neither cricket nor badminton 
def AnotB(A,B,C):
    result=[]
    for i in C:
        if i not in A and i not in B:
            result.append(i)
    print("student who play neither cricket nor badminton",result)
    print(" total student who play neither cricket nor badminton ",len(result)) 

#student who play both cricket and football but not badminton
def ACnotB(A,B,C):
    temp=[]
    result=[]
    for i in C:
        if(i in A):
            temp.append(i)
    for i in temp:
        if(i not in B):
            result.append(i)

    print("student who play both cricket and football but not badminton",result)
    print(" total student who play both cricket and football but not badminton",len(result))         
            
#this is a main function

A=[]
B=[]
C=[]
n=int(input("enter the number of student who play cricket : "))
for i in range(0,n,1):
    ele=int(input("enter the roll no student : "))
    A.append(ele)
print("student who play cricket ",A)

m=int(input("enter the number of student who play badminton : "))
for i in range(0,m,1):
    ele=int(input("enter the roll no student : "))
    B.append(ele)
print("student who play badminton ",B)

x=int(input("enter the number of student who play football : "))
for i in range(0,x):
    ele=int(input("enter the roll no student : "))
    C.append(ele)
print("student who play football",C)

AintersectionB(A,B)
AsymdifferenceB(A,B)
AnotB(A,B,C)
ACnotB(A,B,C)
