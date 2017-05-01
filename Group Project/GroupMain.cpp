#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include "nameObj.h"
#include "nameObj.cpp"

using namespace std;

int main()
{
    
    

    ifstream instream;
    ifstream myfile("names.txt");
    
    if (instream.fail())
    {
        
        cout << "File failed to open." << endl;
        exit(1);
    }
    
    string nextLine;
       
    vector<nameObj> list;
    map <nameObj, int> nameScores;
    
    
    string line;
    while(getline(myfile,line)){
    
    
          if (!instream.eof()) {
        
        
        
                nameObj temp(nextLine);
                list.push_back(temp);
                nameScores[temp] = temp.computeScore();
        
        
    }
}
}
