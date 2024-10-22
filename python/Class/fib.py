def fib(n):  
    start = 1
    update = 0
    if n <= 1:
        return 1          
    for i in range(n-1):
        start += update
        update = start
    return start