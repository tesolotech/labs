def Star(num,num1):
	for i in range(0,num):
		for j in range(0,num1):
			if j>=i:
				print("*",end=" ")
			else:
				print(" ", end=" ")
		print("\n")

num=int(input("enter number of row"))
num1=int(input("enter number of column"));
Star(num,num1)
