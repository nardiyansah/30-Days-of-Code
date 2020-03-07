[Day 1 Data Types Problem](https://www.hackerrank.com/challenges/30-data-types/problem)

My solution
```
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;

    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> e;
    getline(cin >> ws,t); // ws for eat whitespace

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
   cout << i+j << '\n';

    // Print the sum of the double variables on a new line.
    double temp = d + e;
    cout << fixed << setprecision(1) << temp << '\n';

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + t << endl;

    return 0;
}
```