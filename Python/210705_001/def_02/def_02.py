# 여러개의 인수를 받는 함수
def mydef01():
	i=10
	j=20
	print(i+j)
mydef01()

# 계산할 숫자를 두 개 입력
def mydef03(i, j, p):
	if p == '+':
		print(i+j)
	elif p == '-':
		print(i-j)
	elif p == '*':
		print(i*j)
	elif p == '/':
		print(i/j)
n = int(input("첫 번째 숫자를 입력"))
m = int(input("두 번째 숫자를 입력"))
p = input("연산자를 입력(+, -, *, /)")
mydef03(n, m, p)