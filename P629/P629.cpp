// P629.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

class CodeMaker
{
private:
	int size;
	char codeChar[94];
	int findIt(char[], int, char);

public:
	CodeMaker();
	std::string encode(std::string);
	std::string decode(std::string);

};
CodeMaker::CodeMaker()
{
	size = 94;
	std::ifstream inFile; //���� ���� ��ü�� �����Ѵ�.
	inFile.open("code.dat");
	//code.dat������ �д´�.
	
	for (int ascii = 32; ascii < 127; ascii++)
		codeChar[ascii - 32] = ascii - 30;
		//inFile >> codeChar[ascii - 32];

	//code.dat������ �д´�.
	inFile.close();
	//������ �ݴ´�.

}
std::string CodeMaker::encode(std::string s) //��ȣȭ�� �Ѵ�.
{
	int ascii;
	char newChar;
	std::string newString = "";

	for (unsigned pos = 0; pos < s.length(); pos++)
	{
		ascii = s[pos];
		//�Էµ� ���ڿ��� int������ ��ȣȭ�Ѵ�.
		newChar = codeChar[ascii - 32];
		//���ο� ���ڿ��� �����.
		newString += newChar; //���ڿ��� ���Ѵ�.
	}
	return newString;
}

std::string CodeMaker::decode(std::string s) //�ص��Ѵ�.
{
	int index;
	char nextchar;
	char originalChar;
	std::string decodedText = "";

	for (unsigned pos = 0; pos < s.length(); pos++)
	{
		nextchar = s[pos]; //��ȣȭ�� ���ڸ� nextchar������ �Ҵ��Ѵ�.
		index = findIt(codeChar, size, nextchar);

		originalChar = index + 32;
		decodedText += originalChar;

	}
	return decodedText;
}

int CodeMaker::findIt(char A[], int size, char value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (A[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}
int main()
{
	std::string originalText, secretCode, finalText;
	CodeMaker myCoder;

	std::cout << "Enter the message to be encoded" << std::endl;
	std::getline(std::cin, originalText);

	secretCode = myCoder.encode(originalText);
	std::cout << std::endl << "Here is the encoded message" << std::endl << secretCode <<std::endl;
	finalText = myCoder.decode(secretCode);
	std::cout<<std::endl<<"Here is the decoded message"<<std::endl<<finalText<<std::endl;
    return 0;
}

