#define _CRT_SECURE_NO_WARNINGS




#include<string>
#include<stdio.h>
#include<windows.system.h>

int main()
{
	char input[] = { 0 };
	printf("���ĵ��Խ��������Ӻ�ػ������롰����������ֹͣ�ػ�\n");
	system("shutdown -s -t 120");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
		system("shutdown -a");

	return 0;
}