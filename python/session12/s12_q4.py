
products = ['Mobile', 'Mouse', 'Laptop', 'Monitor', 'Keyboard']


m_products = list(filter(lambda product: product.startswith('M'), products))

print(m_products)