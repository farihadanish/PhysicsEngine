#include<iostream>
#include<string.h>
#include "CharacterBasic.h"
using namespace std;
	
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
			
		void laugh()
		{
			cout<<"Huhuhahahehe"<<endl;
		};
		
		~ Minion() //destructor
		{
			cout<<"Minion killed"<<endl;
		}		
	private:	
		int eyes;
};


