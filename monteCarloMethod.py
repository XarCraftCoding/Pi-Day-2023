import random

n = int(input("Enter the number of points to generate: "))
count = 0

for i in range(n):
    x = random.random()
    y = random.random()

    if x**2 + y**2 <= 1:
        count += 1

pi = 4 * count / n

print("Approximation of pi:", pi)
