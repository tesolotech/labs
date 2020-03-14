def Lsearch(list, size, key):
	for x in range(0,size):
		if(list[x]==key):
			return(x)
	return -1

list=[10,12,15,42,45,23,26]
size=len(list)
key=42
res=Lsearch(list,size,key);
if(res!=-1):
	print("Element found at postion ",+res)
else:
	print("---------element not found-----")
   
