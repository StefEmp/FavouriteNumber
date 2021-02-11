#include <iostream> //input out library

using std::cout;
using std::cin;
using std::endl;

//What's your favourite number?

int main() {
    int FavouriteNumber;
    cout << "Enter your favourite number between 1 and 100: ";
    cin >> FavouriteNumber;
    cout << "Amazing!! That's my favourite number too!" << endl;
    cout << "No really!! " << FavouriteNumber << " is my favourite number!" << endl;
    return 0;
}