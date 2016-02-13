// P416.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cmath> //pow함수를 호출할때 사용

class Circle {
private: // 해당 클래스 이외에는 데이터를 변경 못함
	double radius;
public:  //상속 관계 등에 상관없이 어떤 클래스든지 접근할 수 있도록 허용하는 접근제어자 입니다
	void setRadius(double r)
	{
		radius=r; //입력된 값을 radius변수에 대입한다.
	}
	double getArea() 
	{
		return 3.14*pow(radius, 2);//getArea 호출시 radius변수의 값을 제곱을 한후 3.14를 곱한다.
	}

}; //Circle 클래스를 선언한다.
int main()
{
	Circle circle1, circle2; //Circle클래스의 객체 circle1과 circle2를 만든다. 

	circle1.setRadius(1); //circle1의 setRadius함수에 1을 대입한다
	circle2.setRadius(2.5);//circle2의 setRadius함수에 2.5을 대입한다

	std::cout << "area of circle1 is " << circle1.getArea() << std::endl;  //circle1의 getArea()함수의 반환된 값을 출력.
	std::cout << "area of circle2 is " << circle2.getArea() << std::endl;  //circle2의 getArea()함수의 반환된 값을 출력.
    return 0;
}

