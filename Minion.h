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
			
		void Minionlaugh()
		{
			cout<<"Huhuhahahehe"<<endl;
		};
		
		
		
	private:
		//enum state{walk, run, stop, climb, jump};
		
		int eyes;
};


