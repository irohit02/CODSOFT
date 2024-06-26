// NUMBER GUESSING GAME

#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	//seed the random number generator
	std::srand(static_cast<unsigned int>(std::time(0)));
	
	int secretNumber = std::rand() % 100 + 1;
	int userGuess = 0;
	
	std::cout<<"welcome to the guess the number game!\n";
	while(userGuess != secretNumber)
	{
		std::cout<<"Guess the number between 1 and 100:";
		std::cin>> userGuess;
		if(userGuess<secretNumber)
		{
			std::cout<<"too low! Try again.\n";
		} 
		else if(userGuess > secretNumber)
		{
			std::cout<<"too high! Try again.\n";
		}
		else {
			std::cout<<"congratulations! You've guessed the correct number"<<secretNumber<<"!\n";
		}
	}
	return 0;
}

