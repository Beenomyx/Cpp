#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    srand((unsigned) time(NULL));
    int win;
    int x = (rand()%10)/3;
    cout << x;
    bool temp = false;
    bool running = true;
    string botChoice;
    string input;
    string runningChoice;
    while (running){
        cout << x;
        cout << "Choose from Rock, Paper, or Scissors: ";
        cin >> input;
        while (!temp){ 
            if (x == 0){
                x = (rand()%10)/3;
                cout << x;
            } 
            else {
                if (x == 1){
                    botChoice = "rock";
                    temp = true;
                } else if (x == 2){
                    botChoice = "scissors";
                    temp = true;
                } else if (x == 3){
                    botChoice = "paper";
                    temp = true;
                } else {
                    cout << "Something went wrong.";
                    return 0;
                }
            }
        }

        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if (input == "rock") {
            if (botChoice == "rock"){
                win = 0;
            }  else if (botChoice == "paper"){
                win = -1;
            } else {
                win = 1;
            }
        } else if (input == "scissors"){
            if (botChoice == "rock"){
                win = -1;
            }  else if (botChoice == "paper"){
                win = 1;
            } else {
                win = 0;
            }
        } else if (input == "paper"){
            if (botChoice == "rock"){
                win = 1;
            }  else if (botChoice == "paper"){
                win = 0;
            } else {
                win = -1;
            }
        } else {
            cout << "You entered an improper item, or the code is messed up";
        }

        if (win == 1){
            cout << "You win! :)";
        } else if (win == 0){
            cout << "That's a draw! :|";
        } else {
            cout << "You lose! :(";
        }

        cout << "Enter STOP if you want to end the program";
        cin >> runningChoice;
        if (runningChoice == "STOP"){
            running = false;
        }
    }
}