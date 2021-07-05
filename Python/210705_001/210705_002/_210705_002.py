# p.90 list05.py
aa = [10, 20, 30, 40]
print("aa[-1]은 %d, aa[-2]는 %d" % (aa[-1],aa[-2]))

print(aa[0:2])
print(aa[2:4])
print(aa[0:])

# 상한선 에러 : print(aa[4])
# 하한선 에러 : print(aa[-5])

print() 
# p.90 list05.py
aa = [30, 10, 20]
print("현재의 리스트 : %s" % aa)

aa.append(40)
print("append 후의 리스트 : %s" % aa)
aa.pop()
print("pop 후의 리스트 : %s" % aa)
aa.sort()
print("sort 후의 리스트 : %s" % aa)
aa.reverse()
print("reverse 후의 리스트 : %s" % aa)
aa.insert(2,222)
print("insert(2,222) 후의 리스트 : %s" % aa)
print("20값의 위치 : %d" % aa.index(20))
aa.remove(222)
print("remove(222) 후의 리스트 : %s" % aa)
aa.extend([77,88,77])
print("extend([77,88,77]) 후의 리스트 : %s" % aa)
print("77값의 개수 : %d" %aa.count(77))



