a = 23;
if a < 50:
	print('50보다 작군요')
# if else
if a < 20:
	print('20보다 작군요')
else:
	print('20보다 크군요')

# elif
age = int(input('현재 나이를 입력합니다. '))
print(type(age))
if age < 10:							# : 조건의 끝을 표시
	print('유년층 입니다.')				# 들여쓰기 중요
elif age < 20:
	print('10대 입니다.')
elif age < 30:
	print('20대 입니다.')
elif age < 40:
	print('30대 입니다.')
else:
	print('장년층 입니다.')


