#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#include <iostream>
using namespace std;
//C++�еĹ�ϵֻ������: 
//(1)����		==
//(2)������		!=
//(3)С��		<
//(4)С�ڵ���	<=
//(5)����		>
//(6)���ڵ���	>=
//��ϵ�����������ڱȽ��������ʽ��ֵ,�������� 1-true,0-flase
// �����ϵ���������,����Ϊ1,����Ϊ0
//ע��:(1)��ϵ����������߿�������ֵ,������Ҳ�����Ǳ��ʽ��
//     (2)��std::cout�����ϵ������ʽʱ����ϵ���ʽҪ�����ţ�ֻ�й�ϵ�������Ҫ��,������뱨��,���������������Ҫ
//     (3)��ϵ����Ҳ�������ַ�����string�����ַ������õĹ�ϵ������==��!=�������Ļ����ϲ��á�
// 
// 
// 
//



int main()
{
	int a = 10;
	int b = 50;
	bool result = 0;
	result = a == b;
	cout << result << endl;
	cout << (11==11) << endl;

	cout << (a == b) << endl;


	string str1 = "��ʩ";
	string str2 = "����";
	cout << (str1 != str2) << endl;
	cout << (str1 == str2) << endl;

	return 0;
}