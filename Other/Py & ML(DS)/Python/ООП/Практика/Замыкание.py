def mother(x):
    def son(y):
        nonlocal x
        x *= y
        return x
    return son




