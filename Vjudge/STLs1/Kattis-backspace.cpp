#include <iostream>
#include<deque>
using namespace std;

int main()
{
    string s;
    cin >> s;
    deque<char> d;
    for (char i: s) {
        if (i == '<')
            d.pop_back();
        else d.push_back(i);
    }
    for (auto i : d) cout << i;

    return 0;
}