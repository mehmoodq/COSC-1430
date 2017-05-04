#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

using namespace std;

int score(string name);

int main(){

	string names[10000];
	int sum=0; 
	int total=0; 
	int tmp=0;
	string line="blank";
	int SIZE = 0;
	ifstream myfile;
	myfile.open("names.txt");
	
	while(!myfile.eof())
	{
		getline(myfile,line);
		names[SIZE]=line;
		SIZE++;
	}
	myfile.close();
	sort(begin(names), names+SIZE);

	for(int a=1; a<=SIZE; a++){
		string item = names[a];
		sum = score(item);
		tmp  = sum * a;
		total = total + tmp;
	}

	cout<<"Total sum score of all the names in the file is: "<<total;

	cin.get();cin.get();
}

int score(string item){
	int name_sum=0;
	for(int q=0; q<item.length();q++){
		if(item[q]=='A'||item[q]=='a'){
			name_sum = name_sum +1;
		}else if(item[q]=='B'||item[q]=='b'){
			name_sum = name_sum +2;
		}else if(item[q]=='C'||item[q]=='c'){
			name_sum = name_sum +3;
		}else if(item[q]=='D'||item[q]=='d'){
			name_sum = name_sum +4;
		}else if(item[q]=='E'||item[q]=='e'){
			name_sum = name_sum +5;
		}else if(item[q]=='F'||item[q]=='f'){
			name_sum = name_sum +6;
		}else if(item[q]=='G'||item[q]=='g'){
			name_sum = name_sum +7;
		}else if(item[q]=='H'||item[q]=='h'){
			name_sum = name_sum +8;
		}else if(item[q]=='I'||item[q]=='i'){
			name_sum = name_sum +9;
		}else if(item[q]=='J'||item[q]=='j'){
			name_sum = name_sum +10;
		}else if(item[q]=='K'||item[q]=='k'){
			name_sum = name_sum +11;
		}else if(item[q]=='L'||item[q]=='l'){
			name_sum = name_sum +12;
		}else if(item[q]=='M'||item[q]=='m'){
			name_sum = name_sum +13;
		}else if(item[q]=='N'||item[q]=='n'){
			name_sum = name_sum +14;
		}else if(item[q]=='O'||item[q]=='o'){
			name_sum = name_sum +15;
		}else if(item[q]=='P'||item[q]=='p'){
			name_sum = name_sum +16;
		}else if(item[q]=='Q'||item[q]=='q'){
			name_sum = name_sum +7;
		}else if(item[q]=='R'||item[q]=='r'){
			name_sum = name_sum +18;
		}else if(item[q]=='S'||item[q]=='s'){
			name_sum = name_sum +19;
		}else if(item[q]=='T'||item[q]=='t'){
			name_sum = name_sum +20;
		}else if(item[q]=='U'||item[q]=='u'){
			name_sum = name_sum +21;
		}else if(item[q]=='V'||item[q]=='v'){
			name_sum = name_sum +22;
		}else if(item[q]=='W'||item[q]=='w'){
			name_sum = name_sum +23;
		}else if(item[q]=='X'||item[q]=='x'){
			name_sum = name_sum +24;
		}else if(item[q]=='Y'||item[q]=='y'){
			name_sum = name_sum +25;
		}else if(item[q]=='Z'||item[q]=='z'){
			name_sum = name_sum +26;
		}

	}
	return name_sum;
}