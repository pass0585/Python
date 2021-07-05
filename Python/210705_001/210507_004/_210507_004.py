# p.92 tuple01.py
str = "파이썬 문자열"			# 문자열은 튜플이다
print(str[0])					# list 처럼 동작함
print(str[-1])					
#str[-1] = '렬'					# list가 아님을 알 수 있음
card = 'red',4,'python',True	# 튜플로 선언 
print(card)
print(card[1])
#card[0] = 'blue'

print()
# p.92 tuple02.py
one = '하나'
print(type(one))
one = "원"
print(one)
two = '둘'
print(type(two))
#two[0] = '투'
print(two[0])

# p.93 tuple03.py
card = 'red', 4, 'python', True
a, b, c, d = card
print(a)
print(b)
print(c)
d = False
print(d)