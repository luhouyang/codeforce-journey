#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'quartiles' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#


def quartiles(arr: list):
    # Write your code here
    arr.sort()

    l = len(arr)

    if (l % 2 == 0):
        q2 = (arr[int((l - 2) / 2)] + arr[int(l / 2)]) / 2
    else:
        q2 = arr[int((l - 1) / 2)]

    n_q1 = math.ceil((l + 1) / 4.0)
    n_q3 = math.ceil((l + 1) * 3.0 / 4.0)
    # q1 = (arr[math.floor(n_q1)] + arr[math.ceil(n_q1)]) / 2

    if (n_q1 % 2 == 0):
        q1 = (arr[max(int((n_q1 - 1)), 0)] + arr[int(n_q1)]) / 2
    else:
        q1 = arr[int((n_q1 - 1))]

    # q3 = (arr[math.floor(n_q3)] + arr[math.ceil(n_q3)]) / 2

    if (n_q3 % 2 == 0):
        q3 = (arr[max(int((n_q3 - 1)), 0)] + arr[int(n_q3)]) / 2
    else:
        q3 = arr[int((n_q3 - 2))]

    return [math.floor(q1), math.floor(q2), math.floor(q3)]


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    data = list(map(int, input().rstrip().split()))

    res = quartiles(data)

    print(res)

    # fptr.write('\n'.join(map(str, res)))
    # fptr.write('\n')

    # fptr.close()
