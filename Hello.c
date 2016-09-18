#include <stdio.h>

void increment(int x)
{
	x = x + 1;
}

void newLine()
{
	printf("\n--------------------------\n");
}

int foo(void)
{
	int i;
	printf("%d\n", i);
	//i = 777;
	i++;
}

int main()
{
	printf("Hello word");
	printf("character: %c\ninteger: %d\nfloating point: %f\n", '}', 34, 3.14);
	printf("字符串：5;\n字符：%c;\n整数：%d;\n浮点数：%f;",'5',5,5.5);
	newLine();
	int i,j = 2;
	increment(i);
	increment(j);
	printf("%d\n%d\n",i,j);
	newLine();
	foo();
	foo();
	return 0;
}
