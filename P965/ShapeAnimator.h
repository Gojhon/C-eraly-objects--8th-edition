#pragma once
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

const HANDLE outHandle = GetStdHandle(STD_OUTPUT_HANDLE);

class Shape
{
private:
	int dRow, dCol;
public:
	virtual void setDirection(int drow, int dcol)
	{
		dRow = drow;
		dCol = dcol;
	}
	void getDirection(int &drow, int &dcol)
	{
		drow = dRow;
		dcol = dCol;
	}
	virtual void move() = 0;
};

class SimpleShape : public Shape  //Shape상속
{
private:
	int color;
	int rowPos, colPos;
public:
	virtual void draw() const = 0;
	void setPosition(int row, int col) //포지션 설정
	{
		rowPos = row;
		colPos = col;
	}
	void getPosition(int &row, int &col) const //포지션 
	{
		row = rowPos;
		col = colPos;
	}
	void setColor(int c) { color = c; }
	int getColor() const
	{
		return color;
	}
	virtual void move();
};

class Box : public SimpleShape //SimpleShape 상속
{
private:
	int width, height;
public:
	virtual void draw() const;
	Box(int rowPos, int colPos, int width, int height);
};

class Tent : public SimpleShape //SimpleShape상속
{
public:
	virtual void draw() const;
	Tent(int baseRowPos, int baseColPos, int baseLength);
private:
	int baseLength;
};

class ComplexShape : public Shape // Shape상속
{
private:
	std::vector<Shape *> shapes;
public:
	ComplexShape(Shape * * shapeCollection, int shapesCount);
	virtual void move();
	virtual void setDirection(int dRow, int dCol);
};