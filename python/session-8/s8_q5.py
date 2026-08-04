
def mask_phone_number(phone):
    masked_number = "******" + phone[-4:]
    
    return masked_number


phone = "9876541234"
print(mask_phone_number(phone))