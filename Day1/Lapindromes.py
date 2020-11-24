# cook your dish here
n=int(input())
l1=[]
l2=[]
for i in range (n):
    s=input()
    l1=s[:len(s)//2]
    if(len(s)%2==0):
        l2=s[len(s)//2:]
    else:
        l2=s[len(s)//2+1:]
        
    if sorted(l1)==sorted(l2):
        print("YES")
    else:
        print("NO")

