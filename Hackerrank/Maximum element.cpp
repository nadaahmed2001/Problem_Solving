#include <iostream>
#include <stack>
#include <vector>
#include<sstream>
using namespace std;

vector<int> getMax(vector<string> operations) {
    vector<int>output;

    stack<int>s;
    int max = 0;
    int i;
    if (operations[0] == "") i = 1;
    else i = 0;
    while (i != operations.size()) {
            if (operations[i][0] == '1') {
                string s1 = operations[i];//ex: 1 20
                string word;
                istringstream iss(s1);
                vector<string> pushOperation;
                while (iss >> word) pushOperation.push_back(word.c_str());
                int x = stoi(pushOperation.at(1));
                s.push(x);
                if (x > max) {
                    max = x;
                }
            }
            else if (operations[i][0] == '2') {
                //check if the max is the element to be removed
                if (!s.empty()) {
                    if (s.top() == max) {
                        if (s.size() == 1) {
                            max = 0;//the only and the max element in the stack is deleted
                            s.pop();
                        }
                        else {//Search for the other max element
                            
                            s.pop();
                            stack<int>TempStack = s;
                            stack<int>maxStack;
                            int tempMax = 0;
                            while (!TempStack.empty()) {
                                //push if this is the first element or the element is greater that maxStack.top
                                if (TempStack.top() > tempMax || maxStack.empty()) {
                                    maxStack.push(TempStack.top());
                                    tempMax = TempStack.top();
                                }
                                TempStack.pop();

                            }
                            max = maxStack.top();
                            
                        }

                    }
                    else s.pop();

                }

            }
            else {//Print max element
                output.push_back(max);
            }
            i++;
    }

    return output;
}

int main()
{
    int n;
    cin >> n;
    vector<string>operations(n);
    for (int i = 0; i < n; i++) {
        string ops_item;
        getline(cin, ops_item);
        if (ops_item == "") {
            i--;
            continue;
        }

        else operations[i] = ops_item;
    }
    vector<int> res = getMax(operations);

    for (int i = 0; i < res.size(); i++) {
        cout << res.at(i) << "\n";

    }
    return 0;
}
