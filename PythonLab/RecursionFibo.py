def fibo(num):
	if(num<=1):
		return(num)
	return(fibo(num-1)+fibo(num-2))

num=int(input("Enter no of terms:"))
for x in range(1,num+1):
	print(fibo(x))


