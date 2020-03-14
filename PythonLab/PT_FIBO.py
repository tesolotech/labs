def fibo(num):
	if(num==1 or num==2):
		return 1;
	return(fibo(num-1)+fibo(num-2))

num=int(input("enter max limits"))
for x in range(1,num+1):
	print(fibo(x))
