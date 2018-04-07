#PROBLEM: https://practice.geeksforgeeks.org/problems/find-largest-word-in-dictionary/0

testCase = int(input())
finalResult = []

for i in range(testCase):
    result = []
    wordList = []
    num = int(input())
    inputString = input()
    targetString = input()

    for i in inputString.split():
        wordList.append(i)

    for i in wordList:
        wordLength = len(i)
        k = 0
        flag = 0
        if(wordLength > len(targetString)):
            pass
        else:
            for j in range(len(targetString)):

                if(i[k] == targetString[j]):
                    if(k < wordLength-1):
                        k += 1
                    else:
                        pass
                else:
                    pass
            if(k+1 == wordLength):
                 result.append(i)
            else:
                pass

    max = 0
    longest = ''
    for i in result:
        if(len(i) > max):
            max = len(i)
            longest = i
        else:
            pass
    #print(result)
    finalResult.append(longest)
    del result;


for i in finalResult:
    print(i)
