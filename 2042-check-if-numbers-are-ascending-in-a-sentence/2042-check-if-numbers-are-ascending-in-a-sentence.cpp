class Solution {
public:
    bool areNumbersAscending(string s) {
       vector<int> numbers;
        stringstream ss(s);
        string token;
        
        // Tokenize the input string
        while (ss >> token) {
            // Check if the token is a number
            if (isdigit(token[0])) {
                numbers.push_back(stoi(token));
            }
        }
        
        // Check if the numbers are strictly increasing
        for (int i = 1; i < numbers.size(); ++i) {
            if (numbers[i] <= numbers[i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};