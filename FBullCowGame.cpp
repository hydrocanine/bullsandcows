#include "FBullCowGame.h"  // use double quotes to include own file

// constructor 
FBullCowGame::FBullCowGame()
{
	FBullCowGame::Reset();
	return;
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::CheckGuessValid(std::string)
{
	return;
}

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	int MyMaxTries = MAX_TRIES;
	int MyCurrentTry = 1;
	
	return;
}



