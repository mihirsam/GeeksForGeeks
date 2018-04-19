#PROBLEM : https://practice.geeksforgeeks.org/problems/next-greater-number-set-digits/0

testCase = int(input("Enter The Number OF Test Case : "))
setList = []

for i in range(testCase):
    temp = input("Enter The Number : ")
    setList.append(temp)

for i in setList:
    finalList = [int(j) for j in str(i)]
    

    if(finalInt == int(i)):
        print("not possible")
    else:
        print(finalInt)

    del finalList
    del tempList
