#define _CRT_SECURE_NO_WARNINGS




#include<string>
#include<stdio.h>
#include<windows.system.h>

int main()
{
	char input[] = { 0 };
	printf("您的电脑将在两分钟后关机，输入“我是猪”即可停止关机\n");
	system("shutdown -s -t 120");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)
		system("shutdown -a");

	return 0;
}