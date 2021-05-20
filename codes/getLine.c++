#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your Name ?" << endl;
    string userName = "no name"; //we create a variable with a list of characters
    getline(cin, userName); //We update the variable with the entire user input

    cout << "What is the value of PI ?" << endl;
    double piUser= -1; //we create a variable with a real number
    cin >> piUser; //we update it with the user input

    cout << "Your name is " << userName << " and you think PI is " << piUser << "." << endl;

    return 0;
}