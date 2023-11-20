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


	//키워드, 예약어 : 선언문, 명령문

	int Number1; // 변수 선언 
	Number1 = 10; // 초기값 대입

	int Number2 = 10; // 변수 선언 및 초기화

	int Number3 = 1, Number4 = 2; //명확하지 않음, 굳이 줄여야한다면

	Number3 = 5;

	//심볼릭 상수(Constant)
	//const int Number5 = 10; 
	//숫자 자체가 리터럴 상수 

	//Number5 = 30; // 값을 수정할 수 없음

	//데이터 타입 - 숫자 데이터 타입 - 정수형, 실수형 

	// 정수형 타입(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	//실수형 타입(float) //float 임을 명확히 하기위해 값 뒤에 f 붙임, 언리얼은 붙여도 안붙여도 무관
	float Num10 = 1.234f;
	double Num11 = 1.234;

	//문자 데이터 : 문자(1개), 문자열(2개이상) 
	// char : character 
	// char 타입 문자(1개) 표현 : '' 사용
	//문자열(2개이상) : "" 사용
	char letter = 'a';

	//bool 타입 데이터 
	// 참/거짓 구분 : True/False, (Yes/No, On/Off)
	bool Contition = true;

	//auto 선언 키워드, 타입이라고 하지 않음 
	auto AutoNum = 10;

	cout << Number1 << std::endl;

	// 산술연산 
	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	//int total = arithmetic1 + arithmetic2; 하지 않아도됨

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// 증감연산 (증가연산+감소연산)에는 **반복실행의 개념이 포함
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	// Inc = Inc + 3; 의 줄인 형태는 아래와 같다
	Inc += 3;

	// 1씩 증가하는 연산은 특별하게 count/갯수를 세는 것과 같다고 함 / 
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








// 비트와 바이트에 대한 이해 
/**/
/*여러줄입력을 해야하는 경우 슬래시와 별 주석 사용*/
/*
   bit : 컴퓨터 "데이터" 저장의 최소단위 _ 무의미/단순단위
   byte : 컴퓨터 "정보" 저장의 최소단위 _ 유의미/맥락
   1byte = 8bit : 적어도 8개의 비트단위어야 정보로서의 의미가 있더라  ex.10110001

   2진수 숫자 데이터 : 0,1
   진법 계산
   1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 1
   2^0 ~ 2^10 : 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

   색표현, 문자 표현, IP주소 등 항상 1bit를 기준으로 확장
*/