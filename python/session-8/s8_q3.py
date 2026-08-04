

def reverse_message(message):
    reversed_text = ""
    
    
    for i in range(len(message) - 1, -1, -1):
        reversed_text += message[i]
    
    return reversed_text


msg = "Hello WhatsApp"
print(reverse_message(msg))