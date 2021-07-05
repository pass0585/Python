class AutoMobile:										# 클래스 선언
	name = ""											# 객체의 문자열 속성 선언
	# __name = ""										  __: private  _:protected 기본은 public  or __가 양쪽으로 붙은경우 
	velocity = 0										# 객체의 숫자 속성 
	
	def velocityPlus(self):								# 객체의 기능인 메소드 선언
		self.velocity = self.velocity + 1				
		print("속도는 %d 입니다." %self.velocity)
	
	def velocityDw(self):								# 객체의 기능인 메소드 선언
		self.velocity = self.velocity - 1
		if self.velocity <0:
			self.velocity = 0
		print("속도는 %d 입니다." % self.velocity)

ac = AutoMobile()										# 객체 생성
ac.velocityPlus()										# 메소드 호출
ac.velocity=20											# 객체 속성에 값을 대입
ac.velocityDw()											# 메소드 호출
