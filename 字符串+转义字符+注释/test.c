#include <stdio.h>
//字符串 - 一串字符 - 用双引号括起来的一串字符
//注：字符串的结束标志是一个\0的转义字符。
//    在计算字符串长度的时候\0是结束标志，不算作字符串内容
//int main()
//{
//	"abcdef";
//	return 0;
//}

int main()
{
	//字符数组 - 数组是一组形同类型的元素
	//char arr[] = "hello";//此处结尾隐藏了一个\0字符串，是字符串的结束标志
	char arr1[] = "hello";
	char arr2[] = { 'a','b','c'/*此处若加,\0即可正常结束*/ };

	//打印字符串
	printf("%s\n", arr1);// h e l l o \0 （结束）
	printf("%s\n", arr2);// a b c （未知）烫烫烫烫烫烫烫烫烫烫烫烫蘞鯫jZ

	//求字符串的长度
	int len = strlen/*string length,求字符串长度且返回*/("abc");
					//会警告strlen未定义，可使用#include <string.h>解决
	printf("%d\n", len);//结果为3，可见\0并不会被计算为字符串的长度

	printf("%d\n", strlen(arr1));//值 - 5
	printf("%d\n", strlen(arr2));//随机值 - 3+未知

	return 0;
}
