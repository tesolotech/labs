array=['vikash',123,'bihar']
v=array[1]
print(v)
array[0]="kumar"
print(array)
print(len(array))
for c in array:
	print(c)

array.append("vikash")
print(array)
array.pop(0)
print(array)
array.remove("vikash")
print(array)
