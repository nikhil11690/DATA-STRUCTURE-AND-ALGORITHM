#include<iostream>
using namespace std;

int main() {

    int amount;
    cin >> amount;

    int note100, note50, note10, note1;

    switch(1) {

        case 1:
            note100 = amount / 100;
            amount %= 100;
            cout << "100 notes = " << note100 << endl;

        case 2:
            note50 = amount / 50;
            amount %= 50;
            cout << "50 notes = " << note50 << endl;

        case 3:
            note10 = amount / 10;
            amount %= 10;
            cout << "10 notes = " << note10 << endl;

        case 4:
            note1 = amount;
            cout << "1 notes = " << note1 << endl;
    }

    return 0;
}
