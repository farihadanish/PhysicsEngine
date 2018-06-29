#include<iostream>
#include<string.h>
#include "CharacterBasic.h"
//#include "oneD.h"
using namespace std;
	
	//class oneD;
	
class Minion: public CharacterBasic
{
	public:
		Minion()
		{	
				
		}
		void setName(string name)
		{
			this->name=name;
		}
		void setEyes(int eyes)
		{
			this->eyes=eyes;
		}
		string getname()
		{
			return this->name;
		}
		int geteyes()
		{
			return this->eyes;
		}
		
			
		void Minionlaugh()
		{
			cout<<"Huhuhahahehe"<<endl;
		};
		
		
		
	private:
		//enum state{walk, run, stop, climb, jump};
		
		int eyes;
};


