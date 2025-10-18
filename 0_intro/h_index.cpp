#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int h_index(vector<int> citations);

int main(void)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a;
        int temp;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            a.push_back(temp);
        }

        cout << h_index(a) << '\n';
    }
}


int h_index(vector<int> citations)
{

    const int n{ static_cast<int>(citations.size()) };
    sort(citations.begin(), citations.end());
    for (int j = 0; j < n; j++)
    {
        if (citations[j] >= n - j)
            return n - j;    
    }
    return 0;
}
