#include <iostream>
#include <deque>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {

        deque<int>d;
        vector<int>Discarded_cards;
        for (int i = 1; i <= n; i++) d.push_back(i);
        while (d.size() > 1)
        {
            Discarded_cards.push_back(d.front());
            d.pop_front();
            d.push_back(d.front());
            d.pop_front();
        }

        cout << "Discarded cards:";
        for (int i = 0; i < Discarded_cards.size(); i++)
        {
            cout << " " << Discarded_cards[i];
            if (i != Discarded_cards.size() - 1)
                cout << ",";
        }
        cout << "\n";
        cout << "Remaining card: " << d.front() << "\n";
        cin >> n;
    }

    return 0;
}
