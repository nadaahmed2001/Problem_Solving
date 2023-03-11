#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string st;
    set<string>s;
    getline(cin, st);

    stringstream stringStream(st);
    string line;
    
    while (getline(stringStream, line))
    {
        std::size_t prev = 0, pos;
        while ((pos = line.find_first_of(" ,}{", prev)) != std::string::npos)
        {
            if (pos > prev)
                s.insert(line.substr(prev, pos - prev));
            prev = pos + 1;
        }
        if (prev < line.length())
            s.insert(line.substr(prev, std::string::npos));
    }
   // for (auto s : s)cout << s;
    cout << s.size();
    return 0;
}