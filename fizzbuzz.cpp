#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // 1. Create the "tray" to hold your answers
        vector<string> ans; 

        // 2. Your loop from 1 to n
        for (int i = 1; i <= n; i++) {
            
            // 3. Your Logic (The exact same logic you wrote!)
            if (i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");
            } 
            else if (i % 3 == 0) {
                ans.push_back("Fizz");
            } 
            else if (i % 5 == 0) {
                ans.push_back("Buzz");
            } 
            else {
                // to_string(i) turns the number 1 into text "1"
                ans.push_back(to_string(i));
            }
        }

        // 4. Send the tray back to LeetCode
        return ans; 
    }
};
