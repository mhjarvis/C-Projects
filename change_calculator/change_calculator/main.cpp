//
//  main.cpp
//  change_calculator
//
//  Created by Markus Jarvis on 12/13/24.
//

#include <iostream>
using namespace std;

int main() {
    
    int change = 0, dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    
    cout << "Enter an amount in cents : ";
    cin >> change;
    
    if (change >= 100) {
        dollars = change / 100;
        change %= 100;
    }
    if (change >= 25) {
        quarters = change / 25;
        change %= 25;
    }
    if (change >= 10) {
        dimes = change / 10;
        change %= 10;
    }
    if (change >= 5) {
        nickels = change / 5;
        change %= 5;
    }
    pennies = change;
    
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickles  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;
    
    return 0;
}
