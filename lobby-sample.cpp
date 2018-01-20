//Game Lobby (incomplete)
//Simulates a game lobby where players wait
//Currently we can add players to the lobby but can't remove them
// Also, we'd like an option to remove all players (clear the lobby)
// The clear method will also be used in the Lobby destructor method.
// Derived from
// Dawson, M. (2011). Beginning C through game programming (3rd ed.).
// New York, New York: Cengage Learning. ISBN-13 978-1-4354-5742-3

#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    Player(const string& name = "");
    string GetName() const;
    Player* GetNext() const;
    void SetNext(Player* next);

private:
    string m_Name;
    Player* m_pNext;  //Pointer to next player in list
};

Player::Player(const string& name):
    m_Name(name),
    m_pNext(0)
{}

string Player::GetName() const
{
    return m_Name;
}

Player* Player::GetNext() const
{
    return m_pNext;
}

void Player::SetNext(Player* next)
{
    m_pNext = next;
}

class Lobby
{
    friend ostream& operator<<(ostream& os, const Lobby& aLobby);

public:
    Lobby();
    ~Lobby();
    void AddPlayer();
    void RemovePlayer();
    void Clear();

private:
    Player* m_pHead;
};

Lobby::Lobby():
