#include <iostream>
#include <string>
using namespace std;

int main() {
// This is just some sample code to show you how to take input from the user
// and incorporate that input into output text.

//Set up our variables

int num_warriors, num_killed, num_monsters, num_survivors;
string leader;

// Get input from the user (what happens if the input string includes a space?)

// How many are in your squad?
cout << "Enter a number: ";
cin >> num_warriors;

// How many of them got killed on your quest?
cout << "Enter a number, smaller than the first: ";
cin >> num_killed;

// How many monsters attacked?
num_monsters = num_warriors * 10;

// How many of your warriors survived?
num_survivors = num_warriors - num_killed;

// Identify yourself!
cout << "Enter your last name: ";
cin >> leader;

// Now we add the user input to some output text. (endl simply indicates a newline.)
cout << "Welcome, brave " << leader << "!" << endl;
cout << "You have " << warriors << " on your squad." << endl;
cout << killed << " of your warriors were killed by an attack of " << monsters << " monsters." << endl;
cout << "You have " << survivors << " warriors remaining." << endl;

}
