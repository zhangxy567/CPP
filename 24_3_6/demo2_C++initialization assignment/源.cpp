#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


#include <iostream>
using namespace std;
//(1)��ֵд��С�����У����ںſ���ʡ�ԣ�C++��׼��
//(2)��ֵд�ڻ������У����ں�Ҳ����ʡ�ԣ�C++11��׼����ͳһ��ʼ���б�
// 
// 
// 
// 
//
int main()
{
	int a1 = 10;          //�ϰ�C
	int b1 = (10);	  
	int c1 (10);		  //�ϰ�C++
	cout << a1 << endl;
	cout << b1 << endl;
	cout << c1 << endl;

	int a2{ 100 };        //C++11
	cout << a2 << endl;
	int b2 = { 100 };
	cout << b2 << endl;

	return 0;
}