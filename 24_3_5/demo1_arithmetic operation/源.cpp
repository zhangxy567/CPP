#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#include <iostream>
using namespace std;
//C++��������: + - * / %(ȡģ����ȡ��Ԥ��)
// ����Ȼ��,���������¹���
// (1)�������г�������ȡģ����ʱ�������ĸΪ0�������޷�����
// (2)���������г�������ʱ�������ĸΪ0.0�����õ�inf��infinite�������
// //����:ԭ���Ǽ�����и������洢�Ĳ�����,��������С����,�κ�һ������������С�������������
// (3)�����������г�������ʱ������ȥС�����֣��õ�һ������
// (4)�����븡�������г�������ʱ���õ��Ľ���Ǹ�����   //����ӷ�ĸ˳���޹�
// (5)���г�������ʱ��������ǰ���(float)��(double)���Խ�����ת��Ϊfloat��double����   /ǿ��ת�����ȼ����
// (6)ȡģ����ֻ��������������ĸҲ����Ϊ0��
// (7)����ǿ��ת������,�������,ֻҪ�õȺ����ߵ�����һ���Ϳ϶�û������
// 
// 
// 
// 
//

int main()
{
	int number = 10;
	float fa1=3.14;
	//cout << 10 / 0 << endl;
	//cout << fa1 / 0.0 << endl;
	//cout << number / 3 << endl;
	//cout << (float)number / 3 << endl;
	cout << number % 3 << endl;
	return 0;
}