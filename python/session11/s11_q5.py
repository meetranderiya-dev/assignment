def update_cart(cart,item,qty):
    cart[item] = qty
    return cart
cart ={
    "laptop": 1,
    "mouse": 2
}
print(update_cart(cart,"keyboard",1))
print(update_cart(cart,"mouse",3))