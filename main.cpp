//Angineh Pilosian 
//CSIS 135 - Hybrid Online/Remote Course 
//(Thursdays 6:40 pm)- Fall 2021
//Hypergrade Homework #3-2 -  MULTIPLICATION TABLES

// Pseudocode
//1- Declare all variables for input charecter from meue, input i, j for counter and multiplicationNo
//2- display menue and ask user to input char
//3- Prompt the user to enter a charecter
//4- Wait for the user to enter a character. 
//5- check validation for char.
//6- if its 'a' than ask user for multiplication time and go to nested for loop to display multiplication
//7- if its 'q' show messege to exit
//8- if its any other char show invalid selection and let user type again
//9- program end

#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int main()
{

    char selection;
    int input =0, i , j;
    int multiplicationNo;



    do {
        cout << "MENU" << endl;
        cout << "a) Generate Multiplication Table" << endl;
        cout << "q) Quit the program" << endl;
        cout << "Please make a selection: ";
        cin >> selection;

        if (selection == 'a') {
            cout << "Please enter a number for your multiplication table: ";
            cin >> multiplicationNo;
            cout << endl << endl;
            cout << "MULTIPLICATION TABLE: " << multiplicationNo << "'s\n" << endl;
        
            for ( i = 1; i <= multiplicationNo; i++)
            {
                for (i = 1; i <= multiplicationNo; i++)
                    cout << setw(6) << i;
                    cout <<endl << "-";
                for (i = 1; i <= multiplicationNo; i++)
                    cout << "-----|" ;
                    cout << endl;
                for (i = 1; i <= multiplicationNo; i++)
                {
                    cout << i << "|";

                    for ( j = 1; j <= multiplicationNo; j++)
                    {
                    cout << setw(4) << "" <<i * j << "|";

                    }
                cout << endl;
                cout << "--";
                for ( j = 1; j <= multiplicationNo; j++)
                cout << "-----|";
                cout << endl;
                }

            }
        }
        if (selection != 'a' && selection != 'q') {
            cout << "Invalid Selection\n" << endl;
        }
        if (selection == 'q') {
            cout << "You have chosen to quit the program. Thank you for using!" << endl;
        }

    } while (selection != 'q');    

    //system("PAUSE");
    return 0;
}
