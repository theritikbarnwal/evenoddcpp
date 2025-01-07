#include <iostream>
using namespace std;

int main(){
    
    string evenstore = ""; // Initialize as an empty string
    string oddstore = ""; // Initialize as an empty string
    int interval;
    int endnumber;
    int evencount = 0, oddcount = 0;
    int i;

    cout << "Enter the starting number: ";
    cin >> i; // Start number
    cout << "Enter the end number: ";
    cin >> endnumber; // End number
    cout << "Enter the intervals: ";
    cin >> interval; // Interval value

    while (i <= endnumber) // Loop until the number exceeds the end number
    {
        if(i % 2 == 0) // Check if the number is even
        {
            cout << i << " is even" << endl;
            evenstore = evenstore + to_string(i) + ". "; // More efficient concatenation
            evencount++; // Increment even count
        }
        else // If the number is odd
        { 
            cout << i << " is odd" << endl;
            oddstore = oddstore + to_string(i) + ". "; // More efficient concatenation
            oddcount++; // Increment odd count
        }
        i = i+ interval; // Increment the number by the specified interval
    }
    // Output the stored even and odd numbers, and their counts
    cout << "Even numbers: " << evenstore << endl;
    cout << "Total even numbers: " << evencount << endl;
    cout << "Odd numbers: " << oddstore << endl;
    cout << "Total odd numbers: " << oddcount << endl;
}

