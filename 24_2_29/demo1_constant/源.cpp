#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include <iostream>
using namespace std;
#define MONTHS 12
#define PI 3.1415


//C++�������������ַ���
//(1) һ���Ǻ곣��
//				һ������main������������,�ô�д����(�ô�д�������������,��ȻҲ������Сд,���ǲ���������)
//				�﷨: #define ������ ��ֵ        //define���ܴ��ֺ�";"
//(2)����һ����const���εı���
//				�ڳ�����κεط�����������
//				�﷨: const �������� ����ֵ==ֵ;  //const�÷�������ֺ�
//				const���÷�����˵������������ʱ,��ͷ������const,ʹ֮��Ϊ����ֵ
// �������ص�ʱ�������޸�ֵ,����ᱨ��
// 
// 
// 
// 
//
int main()
{
	//MONTHS = 13;
	const int days = 7;
	cout << " һ���� " << MONTHS << "����" << endl;
	cout << " Բ������ " << PI << endl;
	//days = 10;
	cout << " һ����������: " << days << endl;
	return 0;
}