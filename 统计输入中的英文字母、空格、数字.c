/* ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո�����
�������ַ��ĸ��� */
#include <stdio.h >
#include <stdlib.h>
int main(void)
{
	char strs;
	int space=0, num=0, anotherstr=0, str=0, i=0;
	printf("please input a type that is 'str' !\n");
	
	while ((strs=getchar())!='\n')
	{
		if (strs==' ')
		{
			space++;
		}else if(strs>='0'&&strs<='9')
		{
			num++;
		}else if(strs>='A'&&strs<='z')
		{
			str++;
		}else{
			anotherstr++;
		}
		i++;
		
	}
	printf("str=%d, anotherstr=%d, number=%d, space=%d", str, anotherstr, num, space);
	system("pause");
	return 0;
	
	
	
	
	
	
	
}