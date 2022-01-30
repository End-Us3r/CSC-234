#include <iostream>

using namespace std;

int main()
{
    int num;
    string input;

    do
    {
        cout << "What highway would you like to take?" << endl;
        cin >> num;

        if (num % 2 == 0)
        {
            cout << "You took path A" << endl;
        }
        else if (num % 2 != 0)
        {
            cout << "You took path B" << endl;
        }
        cout << "Would you like to run it again?" << endl;
        cin >> input;

    } while (input == "y" || input == "Y");

    return 0;
}
