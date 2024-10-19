def remove(n, digit):
    """
    Return all digits of non-negative n
    there are not digit, for some 
    non-negative digit less than 10

    >>> remove(231, 3)
    21
    >>> remove(243132, 2)
    4313
    """
    kept, digits = 0, 0
    while n > 0:
        n, last = n // 10, n % 10
        if  last != digit:
            kept = kept / 10 + last
            digits = digits + 1
    return  kept ** (digits * 10)