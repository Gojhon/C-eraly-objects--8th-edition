#include<iostream>
#include<iomanip>

int main()
{
	double * sales, total = 0.0, average;
	int numDays;

	std::cout << "How many days of sales figures do you wish";
	std::cout << "to Process?";
	std::cin >> numDays;

	sales = new double[numDays]; //double �� ������ ���� Sales�� �Է¹��� numDays��ŭ �޸��Ҵ�
	std::cout << "Enter the sales figures below." << std::endl;
	for (int count = 0; count < numDays; count++)
	{//Sales ������ �Ҵ�� �޸𸮿� ����ڰ� �Էµ� ���� �Է¹޴´�.
		std::cout << "Day " << (count + 1) << " ";
		std::cin >> sales[count];
	}
	for (int count = 0; count < numDays; count++)
	{//Sales�� �Էµ� ���� int�� ���� total�� ���Ѵ� 
		total += sales[count];
	}

	average = total / numDays;//total�� �ִ� ���� �Ҵ�� �޸� ���� ��ŭ ���� ���� average������ �����Ѵ�.

	// ��±��� ��ü���� Total ��  Total�� ���� average�� ����Ѵ�.
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << std::endl << std::endl << "Total Sales : $" << total << std::endl;
	std::cout << "Average Sales: $" << average << std::endl;
	
	delete[]sales;
	//sales ��ü �Ҹ�
	sales = 0;
	//sales�� 0�� �Ҵ��ϹǷν� �޸�����

}