n=int(input("total student in class"))

P=[]   
for i in range(n):
    r=float(input("enter percentage of student"))
    P.append(r)
print("precentage of student",P)

def partition(array,low,high):
    pivot=array[high]
    i=low-1
    for j in range(low,high):
        if array[j]<=pivot:
            i=i+1
            (array[i],array[j])=(array[j],array[i])
        (array[i+1],array[high])=(array[high],array[i+1])
        return i+1

def quicksort(array,low,high):
    if(low<high):
        pi=partition(array,low,high)
        quicksort(array,low,pi-1)
        quicksort(array,low+1,high)
        
quicksort(P,0,n-1)
print(P)
        
        
            





















