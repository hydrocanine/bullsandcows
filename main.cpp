#include <iostream>
#include <string> 

#include"FBullCowGame.h"

// using namespace std;  // so don't have to use std:: all the time, but,
// need to be careful about namespace clashes
// better to just never use at all

void PrintIntro(int len);	// introduce the game
void PlayGame();            // loop for number of turns asking for guesses
std::string GetGuess();     // get user's word guess std::string
bool AskToPlayAgain();

//==================== MAIN APPLICATION ====================

FBullCowGame BCGame;  // instantiate a new game

int main()
{
	constexpr int WORD_LENGTH = 9;

	bool bPlayAgain = false;
	do {
		PrintIntro(WORD_LENGTH);
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	std::cout << "\n\nSee Ya!\n\n";

	return 0; // exit the application

}

//====================== SUBROUTINES =======================

void PlayGame()
{

	BCGame.Reset();

	int MaxTries = BCGame.GetMaxTries();
	int CurrentTry = BCGame.GetCurrentTry();

	std::cout << MaxTries << " " << CurrentTry << std::endl;

	// loop for number of turns asking for guesses
	for (int i = 0; i < MaxTries; i++) {
		// get a guess from the player
		std::string Guess = GetGuess();       // uppercase variables is Unreal coding convention
		std::cout << "Your guess " << CurrentTry << " was: " << Guess << "\n\n";
	}
}

std::string GetGuess()
{
	int CurrentTry = BCGame.GetCurrentTry();

	// get user's word guess std::string
	std::string Guess = "";
	std::cout << "Try " << CurrentTry << ". Please enter your guess: ";
	std::getline(std::cin, Guess);
	std::cout << "\n";
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (Y/N)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return  (Response[0] == 'y' || Response[0] == 'Y');
}

void PrintIntro(int len)
{
	// introduce the game
	std::cout << "\n\n\t+======================================+\n";
	std::cout << "\t|              WELCOME TO:             |\n";
	std::cout << "\t|                                      |\n";
	std::cout << "\t|            Bulls And Cows            |\n";
	std::cout << "\t|                                      |\n";
	std::cout << "\t|           A FUN WORD GAME!           |\n";
	std::cout << "\t+======================================+\n\n";
	std::cout << "Can you guess the " << len;
	std::cout << " letter isogram I'm thinking of?\n\n";
	return;
}
