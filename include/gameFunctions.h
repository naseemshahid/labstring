
//TODO: define, document, and implement this function

initializeBlankString(int length,char *st) ;

//TODO: define, document, and implement this function
printWithSpaces(char* strng);

//TODO: define, document, and implement this function
revealGuessedLetter(const char* string1,char* string2,char c);

//TODO: define, document, and implement this function
checkGuess(char *string3,char *string4);


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
