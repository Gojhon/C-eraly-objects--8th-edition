// p778.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<fstream>
#include<string>
#include<vector>

class StringVector : public std::vector <std::string>
{
public:
	StringVector(std::string s[])
	{
		int k = 0;
		while (s[k].length()!=0)
		{
			this->push_back(s[k]);
			k++;
		}
	}
};

class HTMLTable
{
private:
	std::vector<std::string> headers;
	std::vector<std::vector<std::string>> rows;
	
	void writeRow(std::ostream &out, std::string tag, std::vector<std::string>);
public:
	void setHeaders(const std::vector<std::string> &headers)
	{
		this->headers = headers;
	}
	void addRow(const std::vector<std::string> &row)
	{
		rows.push_back(row);
	}
	friend std::ostream &operator <<(std::ostream & out, HTMLTable htmlTable);

};

void HTMLTable::writeRow(std::ostream &out, std::string tag, std::vector<std::string> row)
{
	out << "<tr>\n";
	for (unsigned int k = 0; k < headers.size(); k++)
	{
		out << "<" << tag << ">" << row[k] << "</" << tag << ">";
	}
	out << "\n</tr>\n";
}
std::ostream & operator<<(std::ostream &out, HTMLTable htmlTable)
{
	out << "<table border=\"1\">\n";
	htmlTable.writeRow(out, "th", htmlTable.headers);
	for (unsigned int r = 0; r < htmlTable.rows.size(); r++)
	{
		htmlTable.writeRow(out, "td", htmlTable.rows[r]);
	}
	out << "</table>" << std::endl;
	return out;

}
int main()
{
	std::string headers[] = { "Name","Address","Phone","" };

	std::string person1[] =
	{ 
		"Mike Sane","1215 Mills St","630-728-1293","" 
	};
	std::string person2[] =
	{
		"Natasha Upenski","513 Brianrcliff Ln","412-672-1004","" 
	};

	HTMLTable hTable;
	hTable.setHeaders(StringVector(headers));

	hTable.addRow(StringVector(person1));
	hTable.addRow(StringVector(person2));

	std::ofstream outFIle("table.html");
	outFIle << hTable;
	outFIle.close();

	std::cout << hTable;
	system("table.html");

	return 0;
}

