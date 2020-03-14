def PrimeFun(num):
		x=2
		while(num):
			for y in range(2,x):
				if(x%y==0):
					break;
			if(x==y):
				print(x)
			#	num--
			x++

print("Prime Number:")
num=int(input("Enter number of term that you want:"))
PrimeFun(num)
