// P581.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

const std::string name[4] = { " ","rock","paper","scissors" };

int main()
{
	int computerChoice, playerChoice, computerPoints = 0, playerPoints = 0;

	srand(time(NULL));

	playerPoints = 0;
	computerPoints = 0;

	std::cout << "Let's play Rock-Paper-Scissors: " << std::endl;
	std::cout << "    First Player to score 5 Points Wins" << std::endl << std::endl;

	do
	{
		computerChoice = 1 + rand() % 3;
		std::cout << "Pick 1(rock),2(paper), or 3(scissors): ";
		std::cin >> playerChoice;

		if (computerChoice == playerChoice)
		{
			std::cout << "I chose " << name[computerChoice]
				<< "too, so we tied" << std::endl << std::endl;
		}
		else if ((playerChoice == 1 && computerChoice == 2) ||
			(playerChoice == 2 && computerChoice == 3) ||
			(playerChoice == 3 && computerChoice == 1))
		{
			std::cout << "I chose " << name[computerChoice] << "So I win! "
				<< name[playerChoice] << std::endl << std::endl;
			computerPoints++;
		}
		else
		{
			std::cout << "I chose " << name[computerChoice] << " so you win!" <<
				name[playerChoice] << " beats" << name[computerPoints] << std::endl;
			playerPoints++;
		}

	} while ((playerChoice < 5 && computerPoints < 5));

	std::cout << "Let's see how you did :" << std::endl
		<< "You won " << playerPoints << " Points and I won"
		<< computerPoints << " Points" << std::endl;


	if (playerPoints == 5)
		std::cout << "Congratulations! You're the champ!" << std::endl;
	else
		std::cout << "Hurray for me! I'm the champ! ";


	
    return 0;
}

