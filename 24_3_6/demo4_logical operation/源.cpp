#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#include <iostream>
using namespace std;
//�߼�������ݸ������߼����ӣ����ʽ,������ֵ������һ���µ��߼����ӡ�
//   &&	�߼���		a&&b;   ���a��b��Ϊ�棬����Ϊ�棬����Ϊ�١�
//   ||	�߼���		a||b;	���a��b����һ��Ϊ�棬����Ϊ�棬���߶�Ϊ��ʱ�����Ϊ�١�
//   !	�߼��ǣ�����	!a;		���aΪ�٣���!aΪ�棻 ���aΪ�棬��!aΪ�١�
// ע��:(1)�߼����ʽֱ�ӷ���cout֮��Ҳ��Ҫ��()
//      (2)�߼�����������߿�������ֵ������Ҳ�����Ǳ��ʽ��(����������ȼ�����)
//      (3)��ʵ�ʿ����У��߼�����Ķ���������ص㡣(�������������)
// 
// 
//
int main()
{
	//bool a1 = true;
	//bool b1 = true;
	//bool c1 = a1 && b1;
	//cout << c1 << endl;


	//bool a2 = false;
	//bool b2 = true;
	//bool c2 = a2 && b2;
	//cout << c2 << endl;

	//bool a3 = true;
	//bool b3 = false;
	//bool c3 = a3 && b3;
	//cout << c3 << endl;

	//bool a4 = false;
	//bool b4 = false;
	//bool c4 = a4 && b4;
	//cout << c4 << endl;
	//bool a1 = true;
	//bool b1 = true;
	//bool c1 = a1 || b1;
	//cout << c1 << endl;


	//bool a2 = false;
	//bool b2 = true;
	//bool c2 = a2 || b2;
	//cout << c2 << endl;

	//bool a3 = true;
	//bool b3 = false;
	//bool c3 = a3 || b3;
	//cout << c3 << endl;

	//bool a4 = false;
	//bool b4 = false;
	//bool c4 = a4 || b4;
	//cout << c4 << endl;
	bool num1 = true;
	bool num2 = false;
	cout << num1 << endl;
	cout << !num1 << endl;
	cout << num2 << endl;
	cout << !num2 << endl;
	return 0;
}