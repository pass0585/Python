def mydef01():
	print("함수를 선언합니다")
mydef01()
def mydef02(str="인수함수를 선언합니다."):
	print(str)

mydef02()					# 파이썬의 entry point은 맨 앞
mydef02("인수를 넣습니다.")	# 함수선언이 먼저나오고 호출해야함
