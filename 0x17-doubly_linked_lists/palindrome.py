#!/usr/bin/python3

def detect(num):
    j = -1
    itra = list(str(num));
    for i in itra:
        if i != itra[j]:
            return None
        j -= 1
    return num

def multiple():
    number = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            result = i * j
            if detect(result) is not None:
                number = detect(result)
    print(number)
if __name__ == '__main__':
    multiple()
