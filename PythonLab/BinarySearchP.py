def BST(list,start,end,key):
	if(end>=start):
		mid=int(start+(end-start)/2)
		if(list[mid]==key):
			return(mid)
		if(key<list[mid]):
			return(BST(list,start,mid-1,key))
		else:
			return(BST(list,mid+1,end,key))
	return(-1)

list=[]
size=int(input("Enter size of list:"))
for x in range(0,size):
	c=int(input("Enter element in list:"))
	list.append(c)
key=int(input("enter key element:"))
res=BST(list,0,size-1,key);
if(res!=-1):
	print("Element found at postion",+res)
else:
	print("Element not found")
