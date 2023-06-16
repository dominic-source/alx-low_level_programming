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
    for i in range(550, 1000):
        for j in range(550, 1000):
            result = i * j
            if detect(result) is not None:
                if number < detect(result):
                    number = detect(result)
                    hold = i, j
    print(number, hold)

if __name__ == '__main__':
    multiple()
