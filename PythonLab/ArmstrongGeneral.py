def Armstrong(start,end):
	n=0
	sum=0
	for x in range(start+1,end+1):
		temp=x;
		temp1=x;
		while temp>0:
			temp/=10
			++n
		while temp1>0:
			rem=temp1%10;
			sum+=pow(rem,n)
			temp1/=10
		if sum==x:
			print(x)
		n=0
		sum=0

num=int(input("enter starting number:"))
num1=int(input("enter stop number:"));
Armstrong(num,num1);
