/*
	2023年8月21日10:50:53
	目的：两个变量值的互换 

*/

#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int t;//设定一个空变量 临时：temporary 
	
	t = a;//此时t变量已经赋值为1 
	a = b;//a变量更改 
	b = t;//把t中的1 赋值给b 
	
	printf("a = %d  b = %d", a, b);
	
} 

/*
输出结果：a = 2 b = 1 
*/
