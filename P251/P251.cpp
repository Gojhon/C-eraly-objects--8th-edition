// P251.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	const int MIN_PLAYERS = 9, MAX_PLAYERS = 15;

	int players, teamSize, numTeams, leftOver;

	std::cout << "How many Players do you with per team" << std::endl;
	std::cout << "(Enter a value in the range " << MIN_PLAYERS << " - " << MAX_PLAYERS << ") : ";
	std::cin >> teamSize;

	while (teamSize<MIN_PLAYERS || teamSize>MAX_PLAYERS)
	{
		std::cout << std::endl << "Team size should be" << MIN_PLAYERS << " to " << MAX_PLAYERS << " players" << std::endl;
		std::cout << "How many players do you wish per team ? ";
		std::cin >> teamSize;
	}
	std::cout << std::endl << "How many Players are available?";
	std::cin >> players;

	while (players<=0)
	{
		std::cout << "Plase enter a Positive number : ";
		std::cin >> players;
	}

	numTeams = players / teamSize;
	leftOver = players%teamSize;
	std::cout << std::endl << " There will be " << numTeams << " Team with";
	std::cout << leftOver << " Players left over" << std::endl;

    return 0;
}

