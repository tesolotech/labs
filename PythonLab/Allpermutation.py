def bin(n,list*):
	if(n<1):
		print(list)
	else:
		list[n-1]='0'
		bin(n-1,list)
		list[n-1]='1'
		bin(n-1,list)

list=[]
print(bin(10,list))

