def apply_twice(f,x):
    return f(f(x))
def square(x):
    return x * x
apply_twice(square,10)
'''
在这个项目中 首先定义了一个名为 apply_twice 的函数
接着定义了一个square函数 用于计算其中parameter 的平方
apply_twice has two parameter : f and x
apply_twice(square,10) square 这个函数 传递给了形参f
                        10 这个值 传递给了形参x
'''

def make_adder(x):
    def adder(k):
        return k + x
    return adder
add_three = make_adder(3)
add_three(5)

'''
在这个函数中 首先定义了一个make_adder的函数
            在其中又定义了一个叫adder的函数
            返回值 是返回adder这个函数
            add_three = make_adder(3) 无论在make_adder()这个函数中参数的值是什么
            最终传递出来的都是adder这个函数 递给 addthree
            所以add three这个函数就等同于adder
'''


square = lambda x: x * x
'''
lambda 函数 适用于这些需要自定义一个简短的函数但是不想用def定义的场景
它可以用作为参数也可以用作为函数
在while循环内不能使用lambda函数 只能用def     
'''


a = 1
def f(g):
    a = 2
    return lambda y: a * g(y)
f(lambda y: a + y) (a)


