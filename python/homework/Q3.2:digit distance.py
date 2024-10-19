def digit_distance(n):
    #编写一个函数，用于计算给定正整数的数字距离。你必须使用递归，否则测试将失败。
    #对于给定的整数，数字距离是指相邻数字之间绝对差值的总和。例如：
    """Determines the digit distance of n.

    >>> digit_distance(3)
    0
    >>> digit_distance(777)
    0
    >>> digit_distance(314)
    5
    >>> digit_distance(31415926535)
    32
    >>> digit_distance(3464660003)
    16
    >>> from construct_check import check
    >>> # ban all loops
    >>> check(HW_SOURCE_FILE, 'digit_distance',
    ...       ['For', 'While'])
    True
    """
    if n < 10:
    	return 0
    return abs(n % 10 - (n // 10) % 10) + digit_distance(n // 10)
	#一般来说 递归的方式是return输出结果的同时
	#你的自定义函数内的参数用来刷新

