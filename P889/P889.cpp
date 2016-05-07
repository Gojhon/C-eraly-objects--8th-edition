// P889.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>


class ColorCodeStream : public std::fstream
{
public:
	void writeInColor(std::string str, std::string aColor)
	{
		*this << "<span style = \"color: " + aColor + "\">";
		*this << str << "<br/>";
		*this << "</span>" << std::endl;
	}
};

void openFile(std::fstream &file, std::string descr);

int main()
{
	ColorCodeStream outputFIle;
	std::fstream blackFile, blueFile;
	openFile(blackFile, "black");
	openFile(blueFile, "blue");
	openFile(outputFIle, "output");

	std::string blackInput, blueInput;
	std::getline(blackFile, blackInput);
	std::getline(blueFile, blueInput);

	while (blackFile || blueFile)
	{
		if (blackFile && blueFile)
		{
			if (blackInput <= blueInput)
			{
				outputFIle.writeInColor(blackInput, "black");
				std::getline(blackFile, blackInput);
			}
			else
			{
				outputFIle.writeInColor(blueInput, "blue");
				std::getline(blueFile, blueInput);
			}
			if (blackFile && !blueFile)
			{
				outputFIle.writeInColor(blackInput, "black");
				std::getline(blackFile, blackInput);
			}
			if (blueFile && !blackFile)
			{
				outputFIle.writeInColor(blueInput, "blue");
				std::getline(blueFile, blueInput);
			}
		}
	}


	
	return 0;
}

void openFile(std::fstream &file, std::string descr)
{
	std::string fileName;
	std::cout << "Enter the name of the " << descr << " file : ";
	std::cin >> fileName;

	if (descr == "output")
		file.open(fileName.data(), std::ios::out);
	else
		file.open(fileName.data(), std::ios::in);

	if (!file)
	{
		std::cout << "Cannot open the file " << fileName;
		exit(1);
	}

}