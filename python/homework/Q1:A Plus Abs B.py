'''
Fill in the blanks in the following function for adding a to the absolute value of b,
 without calling abs. You may not modify any of the provided code other than the two blanks.
'''
from operator import add,mul,sub
def a_plus_abs_b(a,b):
    if b < 0:
        f = sub
    else:
        f = add
    return f(a,b)

print('' ,a_plus_abs_b(2,3))
