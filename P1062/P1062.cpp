// P1062.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"Imagemap.h"

int main()
{
	ImageMap figurel;
	short int lowerLegl[] = { 1, 10, 2, 10, 3, 10, -1, -1 };
	short int thighl[] = { 4, 9, 5, 8, 6, 7 , 7 , 6, -1, -1 };
	short int thigh2[] = { 6, 7, 7, 8, 8, 9, -1, -1 };
	short int lowerLeg2[] = { 8, 10, 8, 11, -1, -1 };
	short int torso[] = { 8, 5, 9, 4, 10, 3, 11, 2, -1, -1 };
	short int upperArms[] = { 7, 2, 8, 3, 9, 4, 10, 5, 11, 6, -1, -1 };
	short int foreArml[] = { 12, 5, 13, 4, -1, -1 };
	short int foreArm2[] = { 6, 3, 5, 4, -1, -1 };
	short int * figurelAllParts[] =
	{
		lowerLegl, lowerLeg2, thighl, thigh2, torso,
		upperArms, foreArml, foreArm2, 0
	};
	int k = 0;
	for (int k = 0; figurelAllParts[k] != 0; k++)
		figurel.add(figurelAllParts[k]);
	ImageMap figure2;
	short int p2LowerLegl[] = { 1, 11, 2, 10, 3, 9, -1, -1 };
	short int p2thighl[] = { 3, 9, 3, 8, 3, 7 - 1, -1 };
	short int p2thigh2[] = { 4, 7, 5, 7, 6, 7, -1, -1 };
	short int p2LowerLeg2[] = { 6, -8, 6, 9, -1, -1 };
	short int p2torso[] = { 3, 6, 3, 5, 3, 4, 3, 3, 3, 2, 3, 1, -1, -1 };
	short int p2UpperArms[] = { 1, 3, 2, 3, 4, 3, 5, 3, -1, -1 };
	short int p2foreArm1[] = { 1, 4, 1, 5, -1, -1 };
	short int p2foreArm2[] = { 5, 2, 5, 1, -1, -1 };
	short int *figure2Al1Parts[] =
	{
		p2LowerLegl, p2thighl, p2thigh2, p2LowerLeg2,
		p2torso, p2UpperArms, p2foreArm1, p2foreArm2, 0
	};

	for (int k = 0; figure2Al1Parts[k] != 0; k++)
		figure2.add(figure2Al1Parts[k]);
	ImageMap figure3;

	short int p3torso[] = { 4, 7, 4, 6, 4, 5, 4, 4, 4, 3, 4, 2, 4, 1, -1, -1 };
	short int p3Thighl[] = { 5, 8, 6, 9, -1, -1 };
	short int p3Thigh2[] = { 3, 8, 2, 9, -1, -1 };
	short int p3LowerLegl[] = { 6, 10, 6, 11, -1, -1 };
	short int p3LowerLeg2[] = { 1, 8, 0, 7, -1, -1 };
	short int p3UpperArml[] = { 3, 4, 2, 5, -1, -1 };
	short int p3UpperArm2[] = { 5, 4, 6, 5, -1, -1 };
	short int p3ForeArml[] = { 3, 6, 4, 7, -1, -1 };
	short int p3ForeArm2[] = { 7, 4, 8, 3, -1, -1 };
	short int * figure3Al1Parts[] =
	{
		p3torso, p3Thighl, p3Thigh2, p3LowerLegl,
		p3LowerLeg2,p3UpperArml, p3UpperArm2,
		p3ForeArml, p3ForeArm2, 0
	};

	for (int k = 0; figure3Al1Parts[k] != 0; k++)
		figure3.add(figure3Al1Parts[k]);
	system("cls");
	ImageMap *sequence[3] = { &figurel, &figure2, &figure3 };
	k = 0;
	int pos = 0;
	while (pos <= 60)
	{
		sequence[k]->displayAt(pos, 3);
		Sleep(400);

		sequence[k]->eraseAt(pos, 3);
		k = (k + 1) % 3;
		pos = pos + 8;
	}
	sequence[k]->displayAt(pos, 3);
	return 0;
		
}

