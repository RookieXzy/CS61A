"""
每个树都有根标签和子树的列表
每个子树都是树的实例
没有子树的数叫做叶(leaf)
在树上的每个位置都可以叫作节点(node)
每个节点都有一个标签，标签上存该节点的值
每个节点都可以是别的节点的父节点或者子节点

                    3
                /       \ 
               1         2
                        /  \
                       1    1
            [3, [1], [2, [1], [1]]]
"""

def tree(label, branches=[]):
    for branch in branches:
        assert is_tree(branch), 'branches must be trees'
    return [label] + branches

def label(tree):
    return tree[0]
#直接返回标签值 

def branches(tree):
    return tree[1:]

# 验证是不是树
def is_tree(tree):
    if type(tree)!= list or len(tree) < 1:
        return False
    for branch in branches(tree):
        if not is_tree(branch):
            return False
    return True

def is_leaf(tree):
    return not branches(tree)
    #如果branches为空，返回True，否则返回False

def fib_tree(n):
    if n <= 1:
        return tree(n)
    else:
        left, right = fib_tree(n-2), fib_tree(n-1)
        return tree(label(left) + label(right), [left, right])

#计数一共有多少片叶子
def count_leaves(tree):
    """Count the leaves of a tree."""
    if is_leaf(tree):
        return 1
    else:
        return sum([count_leaves(b) for b in branches(tree)])

#直接把叶子的值通过list表示出来 
def leaves(tree):
    if is_leaf(tree):
        return [label(tree)]
    else:
        return sum([leaves(b) for b in branches(tree)], [])

#把除了根，节点意外的叶子标签全部加1
def increment_leaves(tree):
    if is_leaf(tree):
        return [label(tree) + 1]
    else:
        li_leave = sum([increment_leaves(b) for b in branches(tree)])
        return tree(label(tree), li_leave) 

def increment(t):
    return tree(label(t)+1, [increment(b) for b in branches(t)])
    #每一个标签都会被加1

#把每个标签都表示出来
def print_tree(t, indent=0):
    print(' ' * indent +str(label(t)))      #‘ ‘可以在print中组合起来
    for b in branches(t):
        print_tree(b, indent+1)
