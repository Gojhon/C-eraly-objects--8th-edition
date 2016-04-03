// P612.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void selectionSort(int[], int); //선택정렬
void showArray(const int[], int); //정렬 표출

int main()
{
	const int SIZE = 6;
	//
	int values[SIZE] = { 5,7,2,8,9,1 };
	//int 형 배열을 만들고 6개의 값을 넣어준다.

	std::cout << "The unsorted values are" << std::endl;
	showArray(values, SIZE); //정렬 표출 : 정렬 전 값을 보여준다.

	std::cout << "정렬 변환 과정" << std::endl;
	selectionSort(values, SIZE); //선택정렬 호출
	
	std::cout << "The soreted values are" << std::endl;
	showArray(values, SIZE);//정렬 표출 : 정렬 후 값을 보여준다.
	return 0;
}

void selectionSort(int array[], int size)//decay때문에 array 사이즈값을 따로 값을 보내야함
{
	int startScan, minIndex, minValue;
	// int 형 변수 3개를 생성한다.
	for (startScan = 0; startScan < (size - 1); startScan++)
	{	//{ 5,7,2,8,9,1 };
		//startSacn=0.1,2,3,4
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{   //index=1,2,3,4,5
			if(array[index]<minValue)
			{ 
			minValue = array[index]; //작은 값은 minvalue에 넣어준다.
			minIndex = index; //배열의 순서를 저장한다.
			}
		}
		showArray(array, size);
		array[minIndex] = array[startScan];//위치를 변경해준다.
		array[startScan] = minValue; //작은 값은 배열 순서대로 값을 넣어준다.
	}

}
void showArray(const int array[], int size) //정렬된 값을 표출한다.
{
	for (int count = 0; count < size; count++) //배열 0부터 5까지 출력한다.
		std::cout << array[count] << " ";
	std::cout << std::endl;
}