def hailstone(n):
    """Print the hailstone sequence starting at n and return its
    length.

    >>> a = hailstone(10)
    10
    5
    16
    8
    4
    2
    1
    >>> a
    7
    >>> b = hailstone(1)
    1
    >>> b
    1
    """
    "*** YOUR CODE HERE ***"
    times = 0
    while (n != 1):
        print('', n)
        if(n % 2 == 0):
            n = n // 2
            print(' ', n)
        else:
            n = n * 3 + 1
            print(' ', n)
        times += 1
    return times

a=hailstone(27)
print('', a)