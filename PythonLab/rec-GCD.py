def GCD(a,b):
	if(a==b):
		return(a)
	if(a%b==0):
                return(b)
	if(b%a==0):
		return(a)
	if(a>b):
		return(GCD(a%b,b))
	else:
		return(GCD(a,b%a))

num=int(input("Enter first no big no:"))
num1=int(input("Enter second no:"))
print(GCD(num,num1))
