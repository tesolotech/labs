"""
def fun(num):
	if(num>=1):
		return(num*fun(num-1))
	else:
		return(1)
num=int(input("enter max limits"))
res=fun(num)
print(res)
"""
fact=1
num=int(input("enter max limits"))
for x in range(1,num+1):
	fact=fact*x
print(fact)
