class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
      int n = customers.size();
        
        // Step 1: Calculate the baseline satisfaction
        int baselineSatisfaction = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                baselineSatisfaction += customers[i];
            }
        }
        
        // Step 2: Use a sliding window to find the maximum additional satisfaction
        int maxAdditionalSatisfaction = 0;
        int currentAdditionalSatisfaction = 0;
        
        // Initialize the first window
        for (int i = 0; i < minutes; ++i) {
            if (grumpy[i] == 1) {
                currentAdditionalSatisfaction += customers[i];
            }
        }
        maxAdditionalSatisfaction = currentAdditionalSatisfaction;
        
        // Slide the window from minute `minutes` to `n`
        for (int i = minutes; i < n; ++i) {
            if (grumpy[i] == 1) {
                currentAdditionalSatisfaction += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                currentAdditionalSatisfaction -= customers[i - minutes];
            }
            maxAdditionalSatisfaction = std::max(maxAdditionalSatisfaction, currentAdditionalSatisfaction);
        }
        
        // Step 3: Combine the results
        return baselineSatisfaction + maxAdditionalSatisfaction;

    }
};