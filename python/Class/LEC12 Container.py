pairs = [[1, 1],[2, 2],[3, 3],[4, 4]]
same_count = 0

for x,y in pairs:
    if x == y:
        same_count = same_count + 1
print(same_count)
#python中for循环可以遍历数组，或者是range整数
#for name in range
#name如果有两个变量，那么会直接遍历到数组中的数组


range[-2, 2]
# Length: ending value - starting value
# 元素的顺序：序号 + 起始值
list(range(-2, 2))
# >>> [-2, -1, 0, 1]

odds = [1, 3, 5, 7]
[odds[i] for i in range(1, 3)]
odds[1:3]
#遍历序号1到3的元素 odds[x:y]
#当x为空时，默认从0开始
#当y为空时，默认到最后一个元素
#当x和y都为空时，默认遍历整个数组

sum([[2, 3], [3]], [])
#sum函数可以将数组的元素相加，第二个参数可以设置相加的初始值
#>>> [2, 3, 3]

max(range(10), key=lambda x: (x-5)*2/3)
# >>> 5
# range(10) 生成一个0到9的数组
# max函数可以找到数组中的最大值，key函数可以设置最大值的判断条件

all([x < 5 for x in range(5)])
# >>> True
all(range(5))
# >>> False
# all函数可以判断参数是否全部为True，如果有一个为False或，则返回False

curry = lambda f: lambda x: lambda y: f(x, y)
curry(add)(3)(4)
# >>> 7





#Dictionary
numernals = {'I': 1, 'V': 5, 'X': 10}
d = {1:['first', 'second'], 3:'third'}

#dictionay{key:value}
#key 只能声明一次，value可以声明多次
#key 不能是字典或者是数组，value可以是任何值

def index(keys, values, match):
    """
    Return a dictionary from keys k to a list of values v for which
    match(k, v) is a true value.
    """
    return {k: [v for v in values if match(k, v)] for k in keys}


index([7, 9, 11], range(30, 50), lambda k, v: v % k == 0)
# >>> {7:[35, 42, 49], 9:[36, 45], 11:[33, 44]}


