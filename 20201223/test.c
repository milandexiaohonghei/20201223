#include <stdio.h>
#include<windows.h>
#pragma warning(disable:4996)


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ��
//���Զ�����ˮ�����ʵ�֣�
int main(){
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	total = money;
	empty = money;
	while (empty>1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);


	system("pause");
	return 0;
}