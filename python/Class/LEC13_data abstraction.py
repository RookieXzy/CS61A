"""def rational(n, d):
    def select(name):
        if name == 'n':
            return n
        elif name == 'd':
            return d
    return select
def numer(x):
    return x('n')
def denom(x):
    return x('d')

x = rational(3, 8)
numer(x)"""

def rational(n, d):
    return [n, d]
def numer(x):
    return x[0]
def denom(x):
    return x[1]
def add_rational(x, y):
    nx, dx = numer(x), denom(x)
    ny, dy = numer(y), denom(y)
    return rational(nx * dy + ny * dx, dx * dy)

add_rational([1, 2], [1, 3])
"""最后一行代码 add_rational([1, 2], [1, 3]) 违反了抽象层次
，因为它直接传递了具体的列表 [1, 2] 和 [1, 3] 作为有理数，而不是使用定义好的 rational 函数来构造有理数。
这导致了抽象的“泄漏”，即我们应该把有理数看作一种抽象的概念
（由 rational 函数封装），而不应该直接用具体的实现细节（列表）来操作。
正确的做法是通过 rational(n, d) 来构造有理数，例如：

add_rational(rational(1, 2), rational(1, 3))
这样就保持了抽象层次的统一性，所有的有理数操作都通过 rational 函数进行封装，不直接暴露底层的实现细节（列表）。
"""

def divide_rational(x, y):
    return [ x[0] * y[1], x[1] * y[0]]

"""这两行代码违反了抽象规则，因为它直接访问了有理数的具体实现细节（列表中的元素 x[0] 和 y[1]），
而没有使用已经定义的抽象函数 numer(x) 和 denom(x) 来提取有理数的分子和分母。
按照抽象规则，操作有理数时，应该使用定义好的抽象接口，而不是直接访问底层数据结构。
这样可以让代码更加通用、易读，并且如果底层数据结构改变（比如将有理数表示为其他形式而非列表），
代码依然可以保持不变。
"""