def divisor(n):
    return[1] + [x for x in range(2, n) if n % x ==0]
#返回值 x在整数组里遍历，当n值能整除x时返回x





odds = [1, 3, 5 ,7, 9]
[x + 1 for x in odds]
[x for x in odds if 25 % x == 0]