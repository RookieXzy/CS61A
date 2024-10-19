/*
	2023年8月21日10:06:58
	目的：弄懂if else 函数

*/


#include <stdio.h>

int main(void)
{
	if (3 > 2)
		printf("AAAA\n");

//此时只有if接下来的一行语句包含在if内



	if (1 > 2)
	{
		printf("CCCC\n");
		printf("DDDD");
	}
//此时CC和DD都不会输出了
//因为接下来用一个{}设定这两个语句都包含在if内




	if (3 > 2)
	{
		printf("AAAA");
	}
	else
	{
		printf("BBBB");
	}
//如果if表达式中不成立，则运行else里的语句




	if (1)
		printf("111");
	else if (2)
		printf("2222");
	else if (3)
		printf("3333");
	else
		printf("4444");
/*
	这段代码 首先看if中的表达式是否成立
	如果if 中的1成立 则输出111
	如果1不成立 则检查else if 中的2是否成立
	以此类推 有一行语句成立则不输出其他结果
*/
	


//	if (1)
//		printf("111");
//	printf("2222");//因为if只能控制一行语句，这段代码不在if控制之内
//	else if (2)//出错，因为不能直接以else if开头，没有相之匹配的if
	//	printf("2222");
	//else if (3)
	//	printf("3333");
//	else
	//	printf("4444");

}