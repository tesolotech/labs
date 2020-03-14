def BuubleSort(list, size):
	for x in range(1,size):
		for y in range(0,size-1):
			if(list[y]>list[y+1]):
				temp=list[y]
				list[y]=list[y+1]
				list[y+1]=temp

list=[12,15,15,23,65,48,78,98,45]
size=len(list)
BuubleSort(list,size);
print("Sorted list:")
for i in range(0,size):
	print(list[i])
