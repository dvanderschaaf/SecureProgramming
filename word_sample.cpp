// Word Guess Sample
// Derived from
// Dawson, M. (2011). Beginning C through game programming (3rd ed.).
// New York, New York: Cengage Learning. ISBN-13 978-1-4354-5742-3

// TODO
// Add at least four additional words and hints, updating NUM_WORDS as needed
// Add an option to display the hint.
// Add an option to quit the game


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 1;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"persistent", "Keep at it."}
    };

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];  // word to guess
    string theHint = WORDS[choice][HINT];  // hint for word

    string jumble = theWord;  // jumbled version of word
    int length = jumble.size();
    for (int i=0; i<length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\t\tWelcome to Word Herd!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "The jumble is: " << jumble;

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while (guess != theWord)
    {
          cout << "Sorry, that's not it.";

        cout <<"\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
	{
        cout << "\nThat's it!  You guessed it!\n";
	}

    cout << "\nThanks for playing.\n";

    return 0;
}
