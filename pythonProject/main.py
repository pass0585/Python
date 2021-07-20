outFp = None
outStr = ""

outName = input("파일명입력 : ")
path = "C:/Temp/"+outName+".txt"
outFp = open(path, "w")

while True:
    outStr = input("내용입력 : ")
    if outStr !="":
        outFp.writelines(outStr + "\n")
    else:
        break
outFp.close()
print("---정상적으로 파일에 씀---")