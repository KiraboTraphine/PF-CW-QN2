#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int num) {
    vector<int> divisors;

    // Find all divisors of num
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    // Sort divisors in decreasing order
    sort(divisors.rbegin(), divisors.rend());

    // Print divisors in a column
    for (int divisor : divisors) {
        cout << divisor << "\n";
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << "\n";
    cout << "The program will repeatedly prompt you to enter a positive integer." << "\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << "\n";

    while (true) {
        int num;
        cout << "Please enter a positive integer (enter 0 or a negative number to quit): ";
        cin >> num;

        // Check if the input is valid
        if (num <= 0) {
            cout << num << " is not a positive integer." << "\n";
            break;
        }

        // Print the divisors of the number
        printDivisors(num);

        // Ask the user if they want to continue
        char response;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> response;

        // Handle different cases of the user's response
        if (response == 'N' || response == 'n') {
            break;
        } else if (response != 'Y' && response != 'y') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << "\n";
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> response;

            if (response == 'N' || response == 'n') {
                break;
            }
        }
    }

    cout << "Program terminated." << "\n";
    return 0;
}

