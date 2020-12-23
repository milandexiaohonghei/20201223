#include <stdio.h>
#include<windows.h>
#pragma warning(disable:4996)


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，
//可以多少汽水（编程实现）
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