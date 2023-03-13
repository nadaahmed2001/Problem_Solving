#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    map<string, string>myMap;
    vector<string> lecture;
    cin >> n >> m;
    string a, b;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        myMap[a] = b;
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        lecture.push_back(s);
    }
    for (int i = 0; i < n; i++) {
        for (auto m : myMap) {
            if (lecture.at(i) == m.first){
                if (m.first.length() > m.second.length())cout << m.second;
                else cout << m.first;
                cout << " ";
                break;
            }
        }
    }
        
    
    return 0;
}
