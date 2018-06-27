#include<iostream>
#include<string.h>

using namespace std;

class CharacterBasic{
	public:
		void walk(){
			oneD calcAcceleration;//object created
			cout<<"Acceleration is: "<<calcAcceleration.calculateAcceleration();
		};
	private:
		string name;
	
		
};
