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
