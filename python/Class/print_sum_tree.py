from LEC14_Tree import *

numbers = tree(3, [tree(4), tree(5, [tree(6)])])

def print_sum(t, start):
    start = start + label(t)
    if is_leaf(t): 
        print(start)
    for b in branches(t):
        print_sum(b, start)

#b最开始遍历进4，5，6的一个树，因为4是叶子所以start = 3 + 4
#b开始遍历tree（5， tree(6)]）此时start 仍然是3

def count_paths(t, total):
    if label(t) == total:
        found = 1
    else:
        found = 0 
    return found + sum(count_paths(b, total - label(t)) for b in branches(t))
t = tree(3, [tree(-1), tree(1, [tree(2, [tree(1)])], tree(3)), tree(1, [tree(-1)])])
"""
count_paths(t, 3)
2

"""