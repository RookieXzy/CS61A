def square(x):
     return x * x

def make_repeater(f, n):
    """Returns the function that computes the nth application of f.

    >>> add_three = make_repeater(increment, 3)
    >>> add_three(5)
    8
    >>> make_repeater(triple, 5)(1) # 3 * 3 * 3 * 3 * 3 * 1
    243
    >>> make_repeater(square, 2)(5) # square(square(5))
    625
    >>> make_repeater(square, 3)(5) # square(square(square(5)))
    390625
    """
    def repeater(x):
            k = 0
            while k < n:
                x, k = f(x), k + 1
            return x
    return repeater     #只有在函数末尾返回函数才可以使用make_repeater(square ,3)(5)
                        #链式调用的方式

make_repeater(square ,3)(5)