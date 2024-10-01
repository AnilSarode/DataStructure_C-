#include <iostream>
#include <string>

using namespace std;

void reverse(const string& str, string& rev, int i) {
    if (i == str.size()) {
        return;
    }
    reverse(str, rev, i + 1);
    rev.append(1, str[i]);
}

int main() {
    string myString = "ANIKITA";
    cout << "The Given String: " << myString << "\n";
    
    string reverseString;
    reverse(myString, reverseString, 0);
    
    cout << "The Reversed String: " << reverseString << "\n";
    
    return 0;
}

