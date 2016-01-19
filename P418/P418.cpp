// P418.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
class Circle
{
private: //접근제어 지시자 private 클래스내에서만 접근허용
	double radius; //radius의 값을 변경할려면 클래스내에서 변경해주어야한다.

public: //접근제어 지시자 public는 어디서든 접근허용
	void setRadius(double);
	double getArea();
};
//클래스 Circle을 선언 및 Circle클래스의 함수를 외부로 출력할 수 있다.
void Circle::setRadius(double r) //함수명과 출력타입 사이에 클래스이름과 범위연산자를 입력
{
	radius=r; //클래스내에 변수 radius값을 입력한다. 
}
double Circle::getArea() //함수명과 출력타입 사이에 클래스이름과 범위연산자를 입력
{
	return 3.14* pow(radius, 2); //입력된 값을 제곱하여 3.14를 곱해준다.
}
int main()
{
	Circle circle1, circle2; //Circle클래스 circle1,circle2 객체를 생성 

	circle1.setRadius(1); //circle1의 radius변수명에 값을 입력
	circle2.setRadius(2.5);//circle2의 radius변수명에 값을 입력

	std::cout << "area of circle1 is " << circle1.getArea() << std::endl;//circle1의 getArea()함수 호출하여 값을 출력한다. 
	std::cout << "area of circle2 is " << circle2.getArea() << std::endl;//circle2의 getArea()함수 호출하여 값을 출력한다.

    return 0;
}

