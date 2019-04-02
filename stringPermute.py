# Python program to print all permutations with
# duplicates allowed
 
def toString(List):
    return ''.join(List)

# Function to print permutations of string
# This function takes three parameters:
# 1. String
# 2. Starting index of the string
# 3. Ending index of the string.

def permute(a, begin, last):
    #print("begin = ",begin,"last = ",last)
    if begin==last:
        print (toString(a))
    else:
        for i in range(begin,last+1):
            print(i)
            a[begin], a[i] = a[i], a[begin]
            permute(a, begin+1, last)
            a[begin], a[i] = a[i], a[begin] # backtrack
            
 
# Driver program to test the above function
string = str(input())
n = len(string)
a = list(string)
permute(a, 0, n-1)
