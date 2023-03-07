#include <iostream>
#include <deque>
#include<math.h>
#include <iomanip>
using namespace std;

long double getSegment(pair<int, int> p1, pair<int, int> p2) {
    return sqrt(pow(p2.first - p1.first,2)+pow(p2.second - p1.second,2)*1.0);
}
int main()
{
    int n;
    cin >> n;
    pair<int, int>p;
    deque<pair<int,int>> mydeque;
    long double max = 0.0;
    while (n--) {
        cin >> p.first>>p.second;
        mydeque.push_back(p);
        if (mydeque.size() > 1) {
            for (int i = 0; i < mydeque.size()-1; i++) {
                //calculate distance between p and other points in deque
                long double segment = getSegment(p, mydeque.at(i));
                //compare to max
                if (segment > max) max = segment;
            }
        }
    }

    cout << fixed << setprecision(10) << max;

    return 0;
}