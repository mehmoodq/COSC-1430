
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> v;
    ifstream fin("/Users/prakash/Desktop/names.txt");
    
    string s;
    while(fin >> s)
    {
        v.push_back(s);
    }
    
    sort (v.begin(), v.end());
    int scoreSum   = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int nameScore = 0;
        string name = v[i];
        for(int j = 0; j < name.length(); j++)
        {
            nameScore += (name[j] - 'A');
        }
        nameScore = nameScore*(i+1);
        scoreSum += nameScore;
    }
    cout << "Score sum is : " << scoreSum << endl;
    
    return 0;
}
