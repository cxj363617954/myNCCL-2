
/*
* output:
  global address   --- 00422a30, 00422a32, 00422a34
  global address+1   --- 00422a31, 00422a34, 00422a38
  local address --- 0012ff44, 0012ff40, 0012ff3c
  conclusion:
  ȫ�ֱ����������ĳ�ʼ��ַ��ǰһ����ַ���������������й�
  ��ַ��+1��Ϊ�������ĳ�ʼ��ַ+ƫ����  ƫ����������������й�
*/


#include <stdio.h>

char   global1	= 'z';
short   global2   = 66;
double   global3   = 85.5;


int main(void)
{
	int   local1	= 123;
	int   local2   = 0;
    int   local3   = 85;

	printf("global address   --- %p, %p, %p\n", &global1, &global2, &global3);
	printf("global address+1   --- %p, %p, %p\n", &global1+1, &global2+1, &global3+1);
	printf("local address --- %p, %p, %p\n", &local1, &local2, &local3);
	
	return 0;
}