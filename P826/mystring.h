#pragma once
#include<iostream>
#include<string>
#include<cstdlib>

const int SIZE = 256;
class MyString {
private:
	char *str;
	int len;
public:
	MyString()
	{
		str = new char[1];
		str[0] = '\0';
		len = 0;
	}
	MyString(const char *);
	MyString(const MyString &);
	~MyString() {
		if (len != 0)	delete[] str;
	}
	int length()const { return len; }
	char *data() {
		return str;
	}
	MyString operator+=(MyString);
	MyString operator=(MyString);

	friend bool operator==(MyString, MyString);
	friend bool operator!=(MyString, MyString);
	friend bool operator>(MyString, MyString);
	friend bool operator<(MyString, MyString);
	friend bool operator>=(MyString, MyString);
	friend bool operator<=(MyString, MyString);
	friend std::ostream  &operator<<(std::ostream &, MyString);
	friend std::istream &operator>>(std::istream &, MyString &);


};