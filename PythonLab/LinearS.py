def LSearch(list,size,key):
	for x in range(0,size):
		if(list[x]==key):
			return(x)
	return(-1)

list=[50,12,4,563,12,23,45]
size=len(list)
key=4562
res=LSearch(list,size,key)
if(res!=-1):
	print("Element found at postion:",+res)
else:
	print("Element not found in list");
