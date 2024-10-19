#include <stdio.h>

int main(void)
{
	int y = 1;
	int x; 
	x = (y < 0) ? -y : y; 
	printf("%d", x);
	
	return 0;
	
//? 运算符是三元运算符 在这个例子中 三个对象分别是 x -y y
//当y < 0 时 x的值为 -y 否则 x的值为 y    ?在这里是一个运算符 
} 
