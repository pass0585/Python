# 복습 코드

#으로 시작하는 곳 부터 줄 끝까지 주석
''' 주석 '''
""" 주석 """

Variable = 100					# int
Variable1 = "문자 가능1"		# str
Variable2 = '문자 가능2'		# "와' 는 같다.

print(Variable)									# 출력방법 1
print("%s, %s" % (Variable1, Variable2))		# 출력방법 2
print(type (Variable))							# 변수의 type을 알아내기
a=type (Variable)
print(a)										# 변수의 type을 알아내기

print("Variable2의 Type : %s" % type(Variable2))

a, b, c, d = 100, "apple", 3.14, 'melon'
print("a의 Value : %d" % a)
print("a의 Type : %s" % type(a))
print("a의 Value : %s" % b)
print("a의 Type : %s" % type(b))
print("a의 Value : %.2f" % c)					# float 소수점 둘째까지 출력 (.2f)
print("a의 Type : %s" % type(c))
print("a의 Value : %s" % d)
print("a의 Type : %s" % type(d))

aList = [100, 200, 300, 400]	# C#의 경우 int[4]
print('aList : %d,%d,%d,%d' % (aList[0],aList[1],aList[2],aList[3]));


