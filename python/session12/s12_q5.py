from functools import reduce

prices = [120, 80, 150, 60]

total_bill = reduce(lambda x, y: x + y, prices)

print("Total Bill Amount:", total_bill)