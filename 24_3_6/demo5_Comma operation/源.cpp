#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
//��������:
//��һ������еĶ�����ʽ[����]���������򽫴�����ִ�б��ʽ��
//�﷨�����ʽһ, ���ʽ��, ����, ���ʽn;
//�������㳣�����������������
//ע��:(1)û�й�ϵ�ı��ʽһ�㲻������
//	   (2)()��������ȼ����(1��),","���������ȵȼ����(15��)
//	   (3)���ű��ʽ�Ľ��������ֵ
//	   (2)
//	   (2)
// 
// 
// 
// 
//

#include <iostream>
using namespace std;

int main()
{
	//int a = 10, b = 20;
	//cout << a << endl;
	//cout << b << endl;
	int a;
	int b;
	//b = a = 2, a * 2;
	b = (a = 2, a * 2);
	cout << a << endl;
	cout << b << endl;
	return 0;
}