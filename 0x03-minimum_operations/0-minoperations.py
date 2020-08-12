#!/usr/bin/python3
""" Minimum Operations """


def minOperations(n):
    copy = 1
    count = 0
    minimo = []

    if n < 2:
        return 0

    for paste in range(1, n):
        for number in range(n):
            copy += copy * paste
            count += paste + 1

            if n <= copy:
                minimo.append(count)
                break
        count = 0
        copy = 1
    return(min(minimo))
