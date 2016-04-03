#include<iostream>
#include<cstdlib>
#include<ctime>

int *getRandomNumbers(int); //int형 포인터를 반환하는 함수

int main()
{
	int *numbers; //int형 변수 포인터 numbers를 생성한다.
	
	numbers = getRandomNumbers(5); //getRandomNumbers를 호출하고 리턴된 값을 numbers에 할당한다. 
	
	for (int count = 0; count < 5; count++)
	{//numbers 객체에 있는 값을 출력한다.
		std::cout << numbers[count] << std::endl;
	}

	delete[]numbers;// numbers객체를 소멸한다.
	numbers = 0; //numbers를 0으로 초기화한다.
	return 0;
}

int *getRandomNumbers(int size)
{
	int *array; //int형 변수 포인터 array를 생성한다.
	
	if (size <= 0) //피라미터(인자)값인 size가 0보다 작을 경우 NULL을 리턴한다.
		return NULL;

	array = new int[size];//int형 객체를 size의 갯수만큼 생성한다.
	srand(time(0)); //랜덤한 값 임의 수를 생성한다.

	for (int count = 0; count < size; count++)
	array[count] = rand(); //임의 수를 array에 size수 만큼 할당한다. 

	return  array; //array를 리턴한다.
}