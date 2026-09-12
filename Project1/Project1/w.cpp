#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <random>

using namespace std;

enum State { MENU, INFO, STORE, BATTLE, REW, AY, };

int main() {
    cout << "start!!! ('DOXOD == income') \n";
    this_thread::sleep_for(std::chrono::seconds(2));

    State currentState = MENU;

    string xer;
    int input;


    int doxod = 0;
    int balance = 0;
    int hp = 100;

    bool mex = false;
    bool bron = false;
    bool shet = false;
    bool posox = false;
    bool ticket = false;

    bool qest = false;

    bool reward10 = false;
    bool reward50 = false;
    bool reward100 = false;
    bool reward350 = false;
    bool reward650 = false;
    bool reward1000 = false;
    bool reward10000 = false;

    while (true) {
        if (currentState == MENU) {
            cout << "\n Where shall we go? \n \n";
            cout << "1. the forest for treasures\n"
                << "2. to kill the boss\n"
                << "3. to receive a task\n"
                << "4. to the store\n"
                << "5. information\n";
            cout << "balance = " << balance << endl;
            cout << "hp = " << hp << endl;
            cout << "income = " << doxod << endl;
            cout << mex;
            cout << bron;
            cout << shet;
            cout << posox;
            cout << ticket \n;

            cin >> input;


            if (input == 5) currentState = INFO;
            else if (input == 3) currentState = REW;
            else if (input == 4) currentState = STORE;
            else if (input == 1) currentState = BATTLE;
            else if (input == 2) currentState = AY;
            else if (input == 0) break;
        }



        if (currentState == BATTLE && mex == false) {
            cout << "you dead. What were you counting on by going without a weapon?\n";

        }
        if (currentState == REW) {

            cout << "You_ve taken the set of tasks! Now you need to collect 5-50-100-350-650-1000-?. coins!\n \n";

            this_thread::sleep_for(std::chrono::seconds(2));
            currentState = MENU;
            if (balance >= 50000 && !reward10000) {
                reward10000 = true;
                cout << "broooo + 9999999\n";
                balance += 9999999;
                cout << "239387212\n";
            }
            else if (balance >= 1000 && !reward1000) {
                reward1000 = true;
                cout << "The quest is completed. + DOXOD 500!!!!!!\n";
                doxod += 500;
            }
            else if (balance >= 650 && !reward650) {
                reward650 = true;
                cout << "The quest is completed. + DOXOD 100\n";
                doxod += 100;
            }
            else if (balance >= 350 && !reward350) {
                reward350 = true;
                cout << "The quest is completed. + DOXOD 30\n";
                doxod += 30;
            }
            else if (balance >= 100 && !reward100) {
                reward100 = true;
                cout << "The quest is completed. + DOXOD 10\n";
                doxod += 10;
            }
            else if (balance >= 50 && !reward50) {
                reward50 = true;
                cout << "The quest is completed. + 30\n";
                balance += 30;
            }
            else if (balance >= 10 && !reward10) {
                reward10 = true;
                cout << "The quest is completed. + 5\n";
                balance += 5;
            }

            else {
                currentState = MENU;
            }
        }
        else if (currentState == INFO) {
            cout << "The task is to defeat the main boss. To do this, you need more than 80 HP and all the equipment,\n";
            cout << "as well as a ticket for the battle, which costs 500 coins. Take the task from the king (from me) and\n";
            cout << "get a free sword in the store, then go into battle. (The more equipment you have, the more coins you get.)\n";
            this_thread::sleep_for(std::chrono::seconds(2));
            cout << "0 - exit\n";
            cin >> input;
            if (input == 0) currentState = MENU;
        }

        if (currentState == BATTLE && mex == true) {
            if (hp <= 0) {
                cout << "dead";
                exit(1);
            }

            if (currentState == STORE or currentState == REW or currentState == AY) {
                if (hp <= 0) {
                    cout << "dead";
                    exit(1);
                }
            }
            cout << "BATTLE - 20 hp + " << doxod << " coins\n";
            hp -= 20;
            balance += doxod;
            this_thread::sleep_for(std::chrono::seconds(1));
            cout << "0 - exit\n";
            cin >> input;
            if (input == 0) currentState = MENU;
        }

        if (currentState == STORE) {
            cout << "1. sword == 0\n"
                << "2. shield == 20\n"
                << "3. armor == 100\n"
                << "4. staff == 250\n"
                << "5. ticket == 500\n"
                << "6. food == 10\n";

            cin >> xer;

            if (xer == "1") {
                mex = true;
                doxod += 5;
                cout << "Successful purchase!!!\n";
            }
            else if (xer == "2" && balance >= 20) {
                shet = true;
                balance -= 20;
                doxod += 15;
                cout << "Successful purchase!!!\n";
            }
            else if (xer == "3" && balance >= 100) {
                bron = true;
                doxod += 30;
                balance -= 100;
                cout << "Successful purchase!!!\n";
            }
            else if (xer == "4" && balance >= 250) {
                posox = true;
                balance -= 250;
                doxod += 50;
                cout << "Successful purchase!!!\n";
            }
            else if (xer == "5" && balance >= 500) {
                ticket = true;
                cout << "Successful purchase!!!\n";
            }
            else if (xer == "6") {
                balance -= 10;
                hp = 100;
                cout << "Successful purchase!!!\n";
            }

            cout << "0 - exit\n";
            cin >> input;
            if (input == 0) currentState = MENU;
        }



        if (currentState != MENU) {
            cout << "\n0 - return to menu\n";
            int exitChoice;
            cin >> exitChoice;
            if (exitChoice == 0) {
                currentState = MENU;
            }
        }

        if (currentState == AY and mex == true and bron == true and shet == true and posox == true and ticket == true) {
            cout << "the main battle?";
            hp -= 80;
            doxod += 35;
            cout << "end?";
        }





    }





    return 0;


}
