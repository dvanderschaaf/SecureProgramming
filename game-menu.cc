#include <iostream>
#include <limits>
#include "functions.h"
using namespace std;



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
        cout << "1 - Game Lobby\n";
        cout << "2 - Dungeon of the Unknown\n";
        cout << "3 - Tic-Tac-Toe\n";
        cout << "4 - Mind Reader\n";
        cout << "5 - Word Sample\n";
        cout << "6 - Zoo Sample\n";
        cout << "7 - Hang Man\n";
        cout << endl << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 0: cout << "Good-bye.\n"; break;
            case 1: system("./game_lobby.exe"); break;
            case 2: system("./unkown-dungeon.exe"); break;
            case 3: system("./tic-tac-toe.exe"); break;
            case 4: system("./mind-reader.exe"); break;
            case 5: system("./word_sample.exe"); break;
            case 6: system("./zoo_sample.exe"); break;
            case 7: system("./hang-man.exe"); break;
            default: cout << "That was not a valid choice.\n";
        }
    }
    while (choice != 0);

    return 0;
}

    © 2018 GitHub, Inc.
    Terms
    Privacy
    Security
    Status
