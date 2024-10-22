def fact_times(n, k):
    if n == 0:
        return k
    else:
        fact_times(n-1, k*n)

fact_times(4,1)