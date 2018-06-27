#include<iostream>
#include<string.h>
#include"CharacterBasic.h"
#include"oneD.h"
using namespace std;

//class oneD;

class Minion: public CharacterBasic{
	
	public:
		Minion(){
			
		}
		
		void walk(){
			oneD calcAcceleration;//object created
			cout<<"Acceleration is: "<<calcAcceleration.calculateAcceleration();
		};
		
	private:
		//enum state{walk, run, stop, climb, jump};
		string name;
		string color;
		
		};

