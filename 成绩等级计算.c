/* ���������������Ƕ������ɴ��⣺ѧϰ�ɼ���=90��
��ͬѧ��A��ʾ��60-89��֮�����B��ʾ��
60�����µ���C��ʾ��
1.���������(a��b)?a:b��������������Ļ������ӡ�
2.����Դ���� */
#include <stdio.h>
int main()
{
	int score;
	char grade;
	printf("please input your score\n");
	scanf("%d", &score);
	grade=(score>=90)?'A':(score<60)?'C':'B';
	printf("your grade is %c", grade);
	getch();
	return 0;
}