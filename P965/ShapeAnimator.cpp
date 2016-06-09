#include "ShapeAnimator.h"

void SimpleShape::move()
{
	int dRow, dCol;
	int savedColor = color;
	color = 0;
	draw();
	getDirection(dRow, dCol);
	rowPos += dRow;
	colPos += dCol;
	color = savedColor;
	draw();
}

void Tent::draw() const
{
	int rowPos, colPos;
	COORD pos;
	int currentLength = baseLength;
	SetConsoleTextAttribute(outHandle, getColor());
	getPosition(rowPos, colPos);
	pos.Y = rowPos;
	pos.X = colPos;
	for (int r = 0; r < (baseLength + 1) / 2; r++)
	{
		SetConsoleCursorPosition(outHandle, pos);
		for (int k = 0; k < currentLength; k++)
		{
			std::cout << "* ";
		}

		std::cout << std::endl;
		pos.Y--;
		pos.X++;
		currentLength -= 2;
	}
	SetConsoleTextAttribute(outHandle, 7);
}

void Box::draw() const
{
	int rowPos, colPos;
	COORD pos;
	SetConsoleTextAttribute(outHandle, getColor());
	getPosition(rowPos, colPos);
	pos.X = colPos;
	pos.Y = rowPos;
	for (int r = 0; r < height; r++)
	{
		SetConsoleCursorPosition(outHandle, pos);
		for (int c = 0; c < width; c++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
		pos.Y++;
	}
	SetConsoleTextAttribute(outHandle, 7);
}

Box::Box(int rowPos, int colPos, int width, int height)
{
	setColor(4);
	setPosition(rowPos, colPos);
	this->width = width;
	this->height = height;
	draw();
}

Tent::Tent(int baseRowPos, int baseColPos, int baseLength)
{
	setColor(2);
	setPosition(baseRowPos, baseColPos);
	this->baseLength = baseLength;
	draw();
}

ComplexShape::ComplexShape(Shape ** shapeCollection, int shapesCount)
{
	Shape *p;
	for (int k = 0; k < shapesCount; k++)
	{
		p = shapeCollection[k];
		shapes.push_back(p);
	}
}

void ComplexShape::move()
{
	for (int k = 0; k < shapes.size(); k++)
		shapes[k]->move();
}

void ComplexShape::setDirection(int dRow, int dCol)
{
	Shape::setDirection(dRow, dCol);
	for (int k = 0; k < shapes.size(); k++)
		shapes[k]->setDirection(dRow, dCol);
}