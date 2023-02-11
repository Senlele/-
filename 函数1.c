#include <stdio.h>
int f(int a)					//1.函数原型/首部  返回值类型+函数名+参数及其参数类型 该处参数称为形式参数,简称形参.任何函数的形参其作用域都是从定义处开始到这个函数体的末尾结束
{							//2.{ }函数体
	return a * a;			//一.把a*a的值发送给调用它的函数 二.结束该函数运行
}
void g(int a, int b)			//void 空类型
{							
	printf("%d\n", a + b);
	return;					//如果函数没有返回值,可省略return;
}
/*
int main(void)				//c99建议把main函数定义成该种形式,以便于利用main函数的返回值查错
{
	printf("%d\n", f(3));   //函数调用中的参数,称作这个函数的实际参数,简称实参
	g(3, 4);
	return 0;
}
*/
void main()					//等价于void main(void)
{
	printf("%d\n", f(3));   
	g(3, 4);
	return 0;
}