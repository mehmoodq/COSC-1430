#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "nameObj.h"

using namespace std;

int main() 
{
int main()
{
    int finalTotalScore = 0;
    
    std::ifstream infile("names.txt");
    std::string line;
    int counter = 1;
    
    while (std::getline(infile, line))
    {
        int totalScore = 0;
        int tempScore = 0;
        std::istringstream iss(line);
        string word;
        
        if (!(iss >> word)) { break; } // error
      
        for(int i=0;i<word.length();i++){
            int _char = word[i];
            tempScore += (_char-64);
        }
       
        totalScore = tempScore*counter;
        cout<<"For "<<word<<" the score is: "<<totalScore<<endl;
        finalTotalScore += totalScore;
        counter++;
    }
    cout<<"Final score of all names : "<<finalTotalScore<<endl;
    return 0;
}
	
	
}
