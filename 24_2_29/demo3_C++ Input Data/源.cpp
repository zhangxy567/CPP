#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include <iostream>
using namespace std;
//�����������ݵķ�ʽ�ж��֡�
//�ӿ���̨�Ľ��������루��ҳ��PC�������APP���򣩣�
//���ļ��ж�ȡ��
//�����ݿ��ж�ȡ��
//�������ж�ȡ��
//����ѧϰ��򵥵Ĵӿ���̨����,��ʹ��   std::cin>>������;
// ����ʹ��������ȱʡ�ռ�,����std::cin����д�� cin
// 
// �������Ͷ��ܼ�,�ص㽲һ��bool����
// (1)bool���͵�ֵ�ڼ��������0��1����
// (2)�����ڲ��п���true�� flase,Ҳ������д0/1,����ֵ(��ֵ����������С��)ǿ��ת����1      //���ڳ����ʼ�����߸�ֵ�׶� , ������ʹ��cin����
// (3)ʹ��cinֻ��������1/0,����(��ֵ)ֵҲǿ��ת����1           //��cin�׶�ֻ��������ֵ,ֻ��0��ʾ0,������������,С��,����,�������1,���ǵ�����
// �����ַ�/�ַ�����ʱ��(����true)��ֻ�����0
// (4)cout���ֻ��ʾ0/1,����ʾtrue/false
// 
//

int main()
{
	string chararray = { 0 };
	//std::cin >> chararray;
	//cin >> chararray;
	//cout << chararray;
	//string womanname;
	//cout << "�����볬��Ů��������: " ;
	//std::cin >> womanname;
	//cout <<"������ĳ���Ů��������: " << womanname;
	//string womanname;
	//cout << "�����볬��Ů��������: ";
	//cin >> womanname;
	//cout << "������ĳ���Ů��������: " << womanname;
	//return 0;

	//bool yz;
	//yz= true;
	///*cout << "�����볬��Ů������ֵ: ";
	//cin >> yz;*/
	//cout << "������ĳ���Ů����ֵ��: " << yz;
	//bool yz = true;
	///*cout << "�����볬��Ů������ֵ: ";
	//cin >> yz;*/
	//cout << "������ĳ���Ů����ֵ��: " << yz;
	//bool yz = 3.14;
	///*cout << "�����볬��Ů������ֵ: ";
	//cin >> yz;*/
	//cout << "������ĳ���Ů����ֵ��: " << yz;
	bool yz;
	cout << "�����볬��Ů������ֵ: ";
	cin >> yz;
	cout << "������ĳ���Ů����ֵ��: " << yz;
	return 0;
}