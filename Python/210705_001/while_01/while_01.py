str = "꿈은 이루어진다."
i= 0
while i<3:
	print(str)
	i=i+1
print("------------------")

i = int(input("반복 횟수를 입력"))
j=1
flag = True
while flag:
	j = j + 1
	if i<j: 
		flag = False
	print(str)
