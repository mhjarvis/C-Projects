//
//  main.cpp
//  user_menu
//
//  Created by Markus Jarvis on 12/13/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    string selection = "a";
    vector <int> arr {3, 4, 5, 7, 8};
    
    while (selection != "q" && selection != "Q") {
        
        cout << "----------------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> selection;
        
        if (selection == "p" || selection == "P") {
            for (int i = 0; i < arr.size(); i++) {
                cout << arr[i] << " ";
            }
            cout << "\n\n";
        } else if (selection == "a" || selection == "A") {
            int num = 0;
            cout << "\nEnter a number to add to the list: ";
            cin >> num;
            arr.push_back(num);
        } else if (selection == "m" || selection == "M") {
            int total = 0;
            for (int i = 0; i < arr.size(); i++) {
                total += arr[i];
            }
            cout << "The mean is: " << total / arr.size() << "\n\n";
        } else if (selection == "s" || selection == "S") {
            int smallest = arr[0];
            for (int i = 1; i < arr.size(); i++) {
                if (arr[i] < smallest) {
                    smallest = arr[i];
                }
            }
            cout << "The smallest number is: " << smallest << "\n\n";
        } else if (selection == "l" || selection == "L") {
            int largest = arr[0];
            for (int i = 1; i < arr.size(); i++) {
                if (arr[i] > largest) {
                    largest = arr[i];
                }
            }
            cout << "The largest number is: " << largest << "\n\n";
        }
    }
    return 0;
}
