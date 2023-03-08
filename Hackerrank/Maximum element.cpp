#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximumPerimeterTriangle(vector<int> sticks)
{
    bool validFound = false;
    vector<int>v;//final answer
    long long max = 0, sum = 0;
    //get all possible combinations
    for (int i = 0; i < sticks.size(); i++)
    {
        for (int j = i + 1; j < sticks.size(); j++)
        {
            for (int k = j + 1; k < sticks.size(); k++)
            {
                //check if triangle is valid
                if (sticks[i] + sticks[j] > sticks[k]
                        && sticks[i] + sticks[k] > sticks[j]
                        && sticks[k] + sticks[j] > sticks[i])  //Valid found
                {
                    validFound = true;
                    sum = sticks[i] + sticks[j] + sticks[k];
                    while (sum < 0)
                        sum += 1e9;
                    if (sum > max)
                    {
                        v.clear();
                        max = sum;
                        v.push_back(sticks[i]);
                        v.push_back(sticks[j]);
                        v.push_back(sticks[k]);

                    }

                }
            }
        }
    }
    sort(v.begin(), v.end());
    if (validFound == true)
        return v;
    else
        return{ -1 };

}
int main()
{
    int n;
    cin >> n;
    int* sticks = new int[n];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin >> sticks[i];
        v.push_back(sticks[i]);

    }

    vector<int> v1 = maximumPerimeterTriangle(v);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }


    return 0;
}
