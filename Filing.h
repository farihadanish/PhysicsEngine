#include<fstream>
#include<iostream>
#include<string.h>

class Filing{
	public:
		Filing(){
		}
		void fileRead(){
			ifstream file("History.txt");
			string line;
			while (!file.eof()) {
			    file>>line;
			    cout<<line<<endl;
			}
			file.close();
		}
		
		void filewrite(string str){
			ofstream myfile;
  			myfile.open("History.txt", ios::app);
  			myfile<<str<<endl;
  			myfile.close();  			
		}
	
};
