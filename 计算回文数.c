//һ��5λ���� �ж����ǲ��ǻ������� ��12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
#include <stdio.h>
int main(void)
{
	int num, ge, shi, bai, qian, wan;
	printf("please input a number!\n");
	scanf("%d", &num);
	
	wan= num/10000;
	qian= num%10000/1000;
	if(wan>=10)
	{
		printf("error!\a\n");
		return 0;
	}
	bai=num%1000/100;
	shi = num%100/10;
	ge= num%10;
	if (ge==wan && shi==qian)
	{
		printf("����һ��������\n");
	}else{
		printf("�ⲻ��һ��������\n");
	}
	getch();
	return 0;
}