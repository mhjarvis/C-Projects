//
//  main.cpp
//  test
//
//  Created by Markus Jarvis on 12/13/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int scores [] {100, 99, 44};
    
    for (int score : scores) {
        cout << score + 1 << endl;
    }
    
    return 0;
}
