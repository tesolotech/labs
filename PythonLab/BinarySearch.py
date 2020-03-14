def BST(list,start,end,ele):
	if(end>=start):
		mid=int(start+(end-start)/2)
		if(list[mid]==ele):
			return(mid)
		if(ele<list[mid]):
			return(BST(list,start,mid-1,ele))
		else:
			return(BST(list,mid+1,end,ele))
	return(-1)

list=[]
size=int(input("Enter the size of list:"))
for x in range(0,size):
	c=int(input("enter the element in an list:"))
	list.append(c)
key=int(input("enter the element you want to search:"))
res=BST(list,0,size,key)
if(res!=-1):
	print("Element found at postion:",+res)
else:
	print("Element not found")
