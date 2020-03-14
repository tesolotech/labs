def InsertionSort(list,size):
	for x in range(1,size):
		temp=list[x]
		for y in range(x-1,1,-1):
			if(temp<list[y]):
				list[y+1]=list[y]
	list[y+1]=temp

list=[12,15,45,78,12,36,25]
size=len(list)
InsertionSort(list,size);
for i in range(size):
	print(list[i])

