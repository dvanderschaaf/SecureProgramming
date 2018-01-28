//Critter Caretaker
//Simulates caring for a virtual pet
// Derived from
// Dawson, M. (2011). Beginning C through game programming (3rd ed.).
// New York, New York: Cengage Learning. ISBN-13 978-1-4354-5742-3

// TODO:
// Add two methods to the Critter class:
// Eat() - relieves hunger
// Play() - relieves boredom
//
// REMEMBER - Time passes after each turn!

#include <iostream>

using namespace std;

class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0, int Eat=0, int Play=0);
    void Talk();


private:
    int m_Hunger;
    int m_Boredom;
    int m_Play;
    int m_Eat;

    int GetMood() const;
    void PassTime(int time = 1);

};

Critter::Critter(int hunger, int boredom):
    m_Hunger(hunger),
    m_Boredom(boredom),
    m_Eat(Eat),
    m_Play(Play)
{}

inline int Critter::GetMood() const
{
    return (m_Hunger + m_Boredom + m_Eat + m_Play);
}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
    m_Eat += time;
    m_Play += time;
}

void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood();
    if (mood > 15)
	{
        cout << "mad.\n";
	}
    else if (mood > 10)
	{
        cout << "frustrated.\n";
	}
    else if (mood > 5)
	{
        cout << "okay.\n";
	}
    else
	{
        cout << "happy.\n";
	}

    PassTime();
}

int main()
{
    Critter crit;

    int choice = 1;  //start the critter off talking
    while (choice != 0)
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";


        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Good-bye.\n";
			break;
        case 1:
            crit.Talk();
			break;

        default:
            cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
    }

    return 0;
