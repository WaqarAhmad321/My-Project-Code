# To print the sum of n numbers of fibonacci series
def fibonacci(n):
    if (n == 0):
        return 0
    elif (n == 1):
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)


n = int(input("Enter a number : "))
print(f"The fibonacci sum of {n} is {fibonacci(n)}")
