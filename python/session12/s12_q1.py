def get_discounted_price(price, discount_percent):
    discount_amount = price * (discount_percent / 100)
    final_price = price - discount_amount
    return final_price

# Test the function
price = 500
discount = 10

result = get_discounted_price(price, discount)
print("Final price after discount:", result)