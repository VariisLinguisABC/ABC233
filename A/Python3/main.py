import math


def answeer(x):
    if x <= 0:
        return 0
    else:
        return math.ceil(x/10)


if __name__ == "__main__":
    args = [int(i) for i in input().split(" ")]
    sticked, required = args[0], args[1]
    print(answeer(required - sticked))
