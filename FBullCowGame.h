#pragma once

// NEVER USE using namespace IN A HEADER FILE! (Actually probably should never use at all.)

#include <string>

class FBullCowGame {

public:
	FBullCowGame(); // constructor - runs when instanciate a new class instance - not stictly 
					// necessary, e.g., could just initialize private variables below at
					// compile time depending on runtime requirements - here they need to
					// be reset with each new game run, so use a constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();
	void CheckGuessValid(std::string);

private:
	// see constructor for initialization values
	int MyCurrentTry;
	int MyMaxTries;
};


