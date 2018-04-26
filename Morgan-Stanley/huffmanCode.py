inputGraph = {}

def inputStuff(inputGraph):
    tempStr = input("Enter The Character : ")
    tempInt = input("Enter The Frequency : ")
    inputGraph[tempStr] = tempInt

inputStuff(inputGraph)
print(inputGraph)
