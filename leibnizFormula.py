n = int(input("Enter the number of terms to use: "))
pi = 0
sign = 1

for i in range(n):
    pi += sign * 4 / (2 * i + 1)
    sign *= -1

print("Approximation of pi:", pi)
