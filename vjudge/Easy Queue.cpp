#include <iostream>
#include <deque>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    deque<long long>d;
    bool isReverse = 0;

    for (long long i = 0; i < n; i++) {
        string instruction;
        long long num;
        cin >> instruction;

        if (instruction == "front"){
            if (!d.empty()) {
                if (isReverse) {
                    cout << d.back()<<"\n";
                    d.pop_back();
                }
                else {
                    cout << d.front()<<"\n";
                    d.pop_front();
                }
            }
            else cout << "No job for Ada?\n";
        }

        else if (instruction == "back") {
            if (!d.empty()) {
                if (isReverse) {
                    cout << d.front()<<"\n";
                    d.pop_front();
                }
                else {
                    cout << d.back()<<"\n";
                    d.pop_back();
                }
            }
            else cout << "No job for Ada?\n";

        }
        else if (instruction == "reverse") {
            if (isReverse==1) {
                isReverse = 0;
            }
            else {
                isReverse = 1;
            }
 
        }
        else if (instruction == "push_back") {
            cin >> num;
            if (isReverse) {
                d.push_front(num);
            }
            else d.push_back(num);
        }
        else if (instruction=="toFront") {
            cin >> num;
            if (isReverse) {
                d.push_back(num);
            }
            else {
                d.push_front(num);
            }    
        }
    }

    return 0;
}
