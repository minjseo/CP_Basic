// CP_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

#define  NUMBER 100

using namespace std;
//std::cout => cout

int main()
{
	cout << "Hello World!\n";
	//std:standard
	cout << "Hello C++\n";
	cout << "C++ Programming\n";
	cout << 500 << std::endl; // endl : endline
	cout << NUMBER + 50 << endl;


	//Ű����, ����� : ����, ��ɹ�

	int Number1; // ���� ���� 
	Number1 = 10; // �ʱⰪ ����

	int Number2 = 10; // ���� ���� �� �ʱ�ȭ

	int Number3 = 1, Number4 = 2; //��Ȯ���� ����, ���� �ٿ����Ѵٸ�

	Number3 = 5;

	//�ɺ��� ���(Constant)
	//const int Number5 = 10; 
	//���� ��ü�� ���ͷ� ��� 

	//Number5 = 30; // ���� ������ �� ����

	//������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ��� 

	// ������ Ÿ��(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	//�Ǽ��� Ÿ��(float) //float ���� ��Ȯ�� �ϱ����� �� �ڿ� f ����, �𸮾��� �ٿ��� �Ⱥٿ��� ����
	float Num10 = 1.234f;
	double Num11 = 1.234;

	//���� ������ : ����(1��), ���ڿ�(2���̻�) 
	// char : character 
	// char Ÿ�� ����(1��) ǥ�� : '' ���
	//���ڿ�(2���̻�) : "" ���
	char letter = 'a';

	//bool Ÿ�� ������ 
	// ��/���� ���� : True/False, (Yes/No, On/Off)
	bool Contition = true;

	//auto ���� Ű����, Ÿ���̶�� ���� ���� 
	auto AutoNum = 10;

	cout << Number1 << std::endl;

	// ������� 
	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	//int total = arithmetic1 + arithmetic2; ���� �ʾƵ���

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// �������� (��������+���ҿ���)���� **�ݺ������� ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	// Inc = Inc + 3; �� ���� ���´� �Ʒ��� ����
	Inc += 3;

	// 1�� �����ϴ� ������ Ư���ϰ� count/������ ���� �Ͱ� ���ٰ� �� / 
	Inc = Inc + 1;
	Inc += 1;
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;

	Inc = Inc * 3;
	Inc *= 3;
	Inc /= 3;
	Inc %= 3;
}








// ��Ʈ�� ����Ʈ�� ���� ���� 
/**/
/*�������Է��� �ؾ��ϴ� ��� �����ÿ� �� �ּ� ���*/
/*
   bit : ��ǻ�� "������" ������ �ּҴ��� _ ���ǹ�/�ܼ�����
   byte : ��ǻ�� "����" ������ �ּҴ��� _ ���ǹ�/�ƶ�
   1byte = 8bit : ��� 8���� ��Ʈ������� �����μ��� �ǹ̰� �ִ���  ex.10110001

   2���� ���� ������ : 0,1
   ���� ���
   1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 1
   2^0 ~ 2^10 : 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

   ��ǥ��, ���� ǥ��, IP�ּ� �� �׻� 1bit�� �������� Ȯ��
*/