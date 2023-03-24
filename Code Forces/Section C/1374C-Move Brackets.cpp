#include <iostream>
#include<deque>
using namespace std;

int main()
{
    int tests,num;
    cin >> tests;
    while (tests--) {
        cin >> num;
        string brackets;
        cin >> brackets;
        deque<char> d;
        int moves = 0;
        for(char i :brackets) {
            if (i == '(') {
                d.push_back(i);
            }
            else {
                //does this closing bracket have an opening bracket?
                if (d.empty()) moves++;
                else d.pop_back();
            }

        }
        cout << moves<<"\n";
    }
    return 0;
}