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
    string temp;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    getline(cin, temp);
    j = stoi(temp);
    getline(cin, temp);
    e = stod(temp);
      //cin >> j >> e;
      //getline(cin, t);
    getline(cin, t);
    // Print the sum of both integer variables on a new line.
    cout << i+j << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d+e);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    s.append(t);
    cout << s;
    
    return 0;
}
