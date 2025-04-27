#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int val = 0;  // Initialize the value to 0
    
    string command;
    for (int i = 0; i < n; ++i) {
        cin >> command;  // Read the command (e.g., X++ or --X)
      
        if (command == "X++" || command == "++X") {
            val++;  
        } else if (command == "--X" || command == "X--") {
            val--;  
        }
    }

    cout << val << endl;  
    return 0;
}
