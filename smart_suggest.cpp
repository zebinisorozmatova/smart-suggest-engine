#include <iostream>
#include <vector>
using namespace std;

// Minimal Smart Suggestion Demo
void suggestNextLine(vector<int> arr) {
    int sum = 0;

    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i]; // Suggestion: keyingi step = sum += arr[i]
    }

    cout << "Sum: " << sum << endl;

    // AI-style suggestion example (logic-based)
    cout << "Suggestion: You might want to calculate average next." << endl;
}

int main() {
    vector<int> numbers = {10, 20, 30, 40};
    
    suggestNextLine(numbers);

    return 0;
}