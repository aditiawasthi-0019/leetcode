class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                stk.pop();
            }
            else if (operations[i] == "D") {
                stk.push(stk.top() * 2);
            }
            else if (operations[i] == "+") {
                int a = stk.top();
                stk.pop();

                int b = stk.top();

                stk.push(a);
                stk.push(a + b);
            }
            else {
                int score = stoi(operations[i]);
                stk.push(score);
            }
        }

        int sum = 0;

        while (!stk.empty()) {
            sum += stk.top();
            stk.pop();
        }

        return sum;
    }
};