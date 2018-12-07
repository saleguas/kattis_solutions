def population (a):
  total = 0;
  arr = a.split(" ")
  for x in range (1, arr.index("0")):
    if int(arr[x])>2*int(arr[x-1]):
      total=total+int(arr[x])-2*int(arr[x-1])
  return total

num=int(input())
lol =[]
for x in range (0,num):
  lol.append(input())
for x in range (0,len(lol)):
  print(population(lol[x]))