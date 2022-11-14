

//局部变量(只在局部使用，出了范围就会被释放)
//全局变量(在本文件下的任何位置都可以被使用)
//const所修饰的定义不可以被修改
//static声明静态的局部变量或全局变量
// 
// 
//运算符
//加( + )   减( - )   乘( * )   除( / )   取余( % )   赋值( = )   等于( == ),
//加上并赋值( += )   减去并赋值( -= )   乘并赋值( *= )   除并赋值( /= ),
//取余并赋值( %= )   加一( ++ )   减一( -- )
// 
// 
//逻辑运算符
//&&(并且)   ||(或者)   !(取反)
// 
// 
//转义字符
// 
//  \字符( \\ )   '字符( \' )   "字符( \" )    ?字符( \? )   	警报铃声( \a )   退格键( \b )
//  换页符( \f )   	换行符( \n )   	回车( \r )   水平制表符( \t )   垂直制表符( \v )
//  一到三位的八进制数( \ooo )   一个或多个数字的十六进制数( \xhh . . . )
// 
// 
//符号
//取地址( & )   解引用( * )   三目操作符(对比表达式?为真返回值:为假返回值)，
//与( & )   或( | )   异或( ^ )    结束语( ; )   单行注释( // )   多行注释( /* 与 */ )
//
// 
// memcpy  (地址，拷贝位置，字符长)  内存拷贝
// memmove  ()  内存移动
// memcmp  ()  内存比较
//
//tolower  转小写
//toupper  转大写
//
//isspace  空白字符 
//iscntrl  控制字符
//fopen(  名称，r)打开文件
//errno  全局的错误码（c语言中的库函数出错时赋值给errno）
//strrttor  报错
//strtok  ()  分割
//assert  ()  判断语句是否有效
//strstr (中找，找的) 找子串
//strlen  (a1)  求字符长
//strcmp  (a1，a2)  对比
//strcat  (后面加，要加的)  追加
//strcpy  (拷贝地址，拷贝)  拷贝
//int main()//主函数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include< math.h >
#include< string.h >//“< >”为系统自带库,“ " " ”为自己的头文件
#define aa 0//宏定义，可以定义为确定值，也可以为表达式

//枚举
enum month	//enum 名称
{
	January, February, March, April, May, June, July, August, September, October, November, December//枚举内容
};


//结构体定义
struct tag {//struct 名称
	int a;//类型 名称
};//  ;前可以命名
//递归（自己调用自己）
void a()
{
	a();
}

//共用体
union Data//union 名称
{
	int i;//类型 名称
	float f;
	char  str[20];
};
//自定义函数
int getmax(int a[],int n)//返回类型  函数名称(传入参数)
{
	int maxnum, i;
	maxnum = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[maxnum])
			maxnum = i;
	}
	return maxnum;//返回最大值下标
}


int main()
{
	int a = 0;//定义一个整形占4字节 
	printf("%d", a);//打印整形a的值（%d）

	long b = 0;//定义一个长整型占4/8字节
	printf("%ld", b);//打印长整型b的值

	long long c = 0;//定义一个更长的整形占8字节
	printf("%lld", c);//打印更长整形c的值
	
	unsigned int d=0;//定义一个无符号整形占4字节
	printf("%u", d);//打印无符号整形d的值

	char e = 0;//定义一个字符型占1字节
	printf("%c", e);//打印字符e的值（%c）
	printf("%s", e);//打印字符串e的值（%s）

	short f = 0;//定义一个短整型占2字节
	printf("%hd", f);//打印短整型f的值（%hd）

	float f = 0;//定义一个单精度小数占4字节
	printf("%f", f);//打印单精度f的值

	double g = 0;//定义一个双精度小数占8字节
	printf("%f", g);//打印双精度g的值
	
	//% + (-,+) + 数字 + 字母【-是左对齐,+是右对齐】字母【八进制( o ),有符号整形( i ),浮点数不显示无意义0( g )】

	int a[] = { 0 };//定义一个为整形的数组,数组第一个下标为0,依次往后叠加

	scanf("%d", &a);//scanf("输出类型",&名称)
	// 
	// 
	// 
	//循环
	//for(初始化:判断:增加或减少)        while(判断)
	//{									 {
	//循环体								循环体
	//}									 }
	//
	// do
	// {
	// 循环体
	// }
	// while(判断)
	//在循环体中可以使用   break(退出)，   continue(跳过)以及  to  do(从某处跳到某处)
	//
	// 判断语句
	// if(判断条件)
	// {
	// 代码块
	// }
	// switch (条件)
	//{
	// case 1:情况1：
	// 内容
	//default:其它（在最后一段）      
	//	break;退出
	//}
	//
	return 0;//返回0 
}