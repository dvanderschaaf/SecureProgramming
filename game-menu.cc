#include <iostream>
#include <limits>

using namespace std;

// Tell us something about yourself
// Name /.-
// General Location -

// Set up your global variables here


// Define your functions here

void PressN2Continue()
  {
      cout << "Press 'n' then <Enter> to continue....\n";

    while (1)
      {
         if ('n' == getchar())
          break;
        }
  }

void hello() {

cout << "Hello Player!\n";
PressN2Continue();
 return;
}

int main()
{

    int choice;

    do
    {
        cout << "\nGAME MENU\n";
        cout << "0 - Exit the program.\n";
        cout << "1 - Greetings\n";
        cout << endl << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 0: cout << "Good-bye.\n"; break;
            case 1: hello(); break;
            default: cout << "That was not a valid choice.\n";
        }
    }
    while (choice != 0);

    return 0;
}
