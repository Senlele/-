#include <stdio.h>
void f(void)					//函数名的作用域,是从函数的定义或函数声明处开始,到源程序文件的末尾结束
{
	printf("1111\n");
}
//main函数之前的代码是为main函数的执行提供信息的,它们不一定被执行
/*
void g(void)
{
	printf("2222\n");
}
*/

void g(void);				//函数首部+分号 就是函数声明 可以扩展函数名的作用域到此
void h(int);					//函数声明的形参变量名可以省略
int main(void)
{
	f();
	g();
	h(3333);
	return 0;
}
void g(void)
{
	printf("2222\n");
}
void h(int a)
{
	printf("%d", a);
	g();						//h函数的定义必须在g函数的作用域之内,因为h函数中有g函数的调用 
}