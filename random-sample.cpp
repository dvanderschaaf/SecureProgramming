#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
	srand(time(NULL));
	while(true) {
		int cpuRandNumber = rand() % 99 + 2;
		int guessInput;
		int tries = 0;

		while(true) {
			std::cout << "Enter a number between 1 and 100\n";
			std::cin >> guessInput;
			std::cin.ignore();
			if(guessInput > cpuRandNumber) {
				std::cout << "Too high! Try again.\n";
			} else if(guessInput < cpuRandNumber) {
				std::cout << "Too low! Try again.\n";
			} else {
				break;
			}
			tries++;
		}
			std::cout<<"You did it! " << std::endl;
			std::cout<<"It only took you " << tries << " tries!\n";
      std::cout << "\n\nPress enter anything to exit";
	    std::cin.ignore();
	return 0;
  }
}
