#pragma once
class Aux
{
private:
	double auxBudget; //보조 업체의 예산
public:
	Aux() { auxBudget = 0; } //Aux 클래스의 생성자
	void addBudget(double); // Aux 예산을 더하는 함수
	double getDivBudget()const { return auxBudget; } //출력함수
};