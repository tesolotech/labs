def BubbleSort(list,size):
	for x in range(1,size):
		for y in range(0,size-1-x+1):
			if(list[y]>list[y+1]):
				temp=list[y]
				list[y]=list[y+1]
				list[y+1]=temp
list=[]
size=int(input("enter the size of list:"))
for x in range(0,size):
	c=int(input("enter the element in an array:"))
	list.append(c)
BubbleSort(list,size);
print("Sorted list is this:")
for y in range(0,size):
	print(list[y])
