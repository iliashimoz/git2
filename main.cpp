#include "operations.h"
#include <iostream>

using namespace std;

float a, b;
char op;
bool loop;

int main()
{
    loop = true;
    while(loop)
    {
        system("cls");
        cout << "\nEnter math expression: ";
        cin >> a >> op >> b;
        switch(op)
        {
            case '+':
                cout << "Sorry, it's under development" << endl;
                break;

            case '-':
                cout << "Sorry, it's under development" << endl;
                break;

            case '*':
                cout << "Sorry, it's under development" << endl;
                break;

            case '/':
                cout << "Sorry, it's under development" << endl;
                break;

            default:
                cout << "Invalid operation! Try again";
                break;
        }
        system("pause");
    }
    return 0;
}

