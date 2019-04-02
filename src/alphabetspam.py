s = input()
l = len(s)
arr = [0, 0, 0, 0]
for i in s:
  if i.isupper():
    arr[2] += 1
  elif i.islower():
    arr[1] += 1
  elif i == "_":
    arr[0] += 1
  else:
    arr[3] += 1
print(*[str(x/l) + '\n' for x in arr])