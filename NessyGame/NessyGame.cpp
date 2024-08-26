// NessyGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;


void simulate() {
    float ardyKnight = 84.3;
    float currentXP = 4638806;
    int currentLvl = 88;
    int Levels[11] = {4852295, 5346332, 5902831, 6517235, 7195629, 7944614, 8771558, 9684577, 10692629, 11805606, 13034431};
    int B = 257211;
    bool petGot = false;
    bool doubled = false;
    int randomNumber;
    int i = 0;
    int knights = 0;
    int odds = B - (currentLvl * 25);
    random_device rd;
    mt19937 gen(rd());

    while (!petGot) {
        uniform_int_distribution<> distr(0, odds);
        randomNumber = distr(gen);

        currentXP += ardyKnight;
        knights += 1;
        if (currentXP >= Levels[i] && currentLvl != 99) {
            currentLvl++;
            if (i != 10) {
                i++;
            }
        }
        if (currentXP >= 200000000 && doubled == false) {
            odds = 2 * odds;
            doubled = false;
        }
        if (randomNumber == 0) {
        cout << "Rocky! " << endl;
        cout << "Current Level: " << currentLvl << endl;
        cout << "Current XP: " << currentXP << endl;
        cout << "Number of Pickpockets: " << knights;

        petGot = true;

        }
        else {
             cout << currentLvl << endl;
        }

    }
}

    



void menu() {
    char x;
    cout << "New Simulation?  Y/N";
    cin >> x;
    if (x == 'Y') {
        simulate();
     }

}

int main()
{
    
    cout << "New Game\n";
    // menu();
    simulate();
   
}

    // 1 in B - (lvl * 25)
   // B = 257,211
   // Lvl = 88
   // Current XP: 4,543,462
   // Next LvL: 4,852,295
   // 90: 5,346,332
   // 91: 5,902,831
   // 92: 6,517,235
   // 93: 7,195,629
   // 94: 7,944,614
   // 95: 8,771,558
   // 96: 9,684,577
   // 97: 10,692,629
   // 98, 11,805,606
   // 99: 13,034,431