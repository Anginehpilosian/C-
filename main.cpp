//Angineh Pilosian 
//CSIS 135 - Hybrid Online/Remote Course 
//(Thursdays 6:40 pm)- Fall 2021
//Hypergrade Homework #3-1 -  DICE ROLLING SIMULATION

// Pseudocode
//1- Declare all variables for input charecter for rollTime, random roll, roll1, ... roll6 and 
//    percentRoll1 ... percentRoll6.
//2- display queston for how many time user wants roll dice
//3- Prompt the user to enter a charecter
//4- Wait for the user to enter a character. 
//5- check validation for rolltime. it should be greater than 1 or if it is not should display message 
//   for user to insert another number valid
//6- Store the rollTime values into a rollTime variables and check for loop
//7- check if roll is 1 than add 1 to roll1 count, if its 2 add to roll2 count , ...
//8- end for loop after number of time dice rolled and 6 dice defined and add counter
//8- show the DICE Roll result, how many time each number happened, and what percent roll1, ... roll6 happened based on rolltime number
//9- program end

#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
    int rollTime;
    int roll;  //this is a dice created random number

    int roll1 = 0;
    int roll2 = 0;
    int roll3 = 0;
    int roll4 = 0;
    int roll5 = 0;
    int roll6 = 0;
    double percentRoll1 = 0.00;
    double percentRoll2 = 0.00;
    double percentRoll3 = 0.00;
    double percentRoll4 = 0.00;
    double percentRoll5 = 0.00;
    double percentRoll6 = 0.00;

    srand((unsigned int)time(NULL));
    

    cout << "How many times would you like to roll the dice?" << endl;
    cin >> rollTime ;

    while (rollTime < 1)
    {

        cout << "This is an invalid number. " << endl;
        cout << "The number of rolls should be equal to or greater than 1." << endl;
        cout << "Please enter again." << endl;
        cin >> rollTime;
        
    }
        for (int counter = 0; counter < rollTime; counter++) {
            roll = (rand() % 6) + 1;

            if (roll == 1) {
                roll1++;

            }
            else if (roll == 2) {
                roll2++;
            }
            else if (roll == 3) {
                roll3++;
            }
            else if (roll == 4) {
                roll4++;
            }
            else if (roll == 5) {
                roll5++;
            }
            else if (roll == 6) {
                roll6++;
            }

        }
    cout << endl;
    cout << "DICE ROLL STATISTICS\n" << endl;
    cout << "# Rolled \t # Times \t % Times" << endl;
    cout << "-------- \t -------- \t --------" << endl;

    cout << setw(8) << " 1\t" << setw(8) << roll1 << "\t" << fixed << setprecision(2) << setw(8) << (double)(roll1) / (double)(rollTime) * 100 << "%" << endl;
    cout << setw(8) << " 2\t" << setw(8) << roll2 << "\t" << fixed << setprecision(2) << setw(8) << (double)(roll2) / (double)(rollTime) * 100 << "%" << endl;
    cout << setw(8) << " 3\t" << setw(8) << roll3 << "\t" << fixed << setprecision(2) << setw(8) << (double)(roll3) / (double)(rollTime) * 100 << "%" << endl;
    cout << setw(8) << " 4\t" << setw(8) << roll4 << "\t" << fixed << setprecision(2) << setw(8) << (double)(roll4) / (double)(rollTime) * 100 << "%" << endl;
    cout << setw(8) << " 5\t" << setw(8) << roll5 << "\t" << fixed << setprecision(2) << setw(8) << (double)(roll5) / (double)(rollTime) * 100 << "%" << endl;
    cout << setw(8) << " 6\t" << setw(8) << roll6 << "\t" << fixed << setprecision(2) << setw(8) << (double)(roll6) / (double)(rollTime) * 100 << "%" << endl;




    //system("PAUSE");
    return 0;
}
