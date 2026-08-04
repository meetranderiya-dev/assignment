messages = ['hi','spam','hello','spam','how are you?']
for message in messages:
    if message == "spam":
        continue
    if message == "how are you?":
        print("found how are you?,stopping. ")
        break
    print(message)