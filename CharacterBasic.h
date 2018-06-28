#include<iostream>
#include<string.h>
#include"oneD.h"
//#include"twoD.h"
using namespace std;

class CharacterBasic
{
	public:
		void walk(){
			oneD calcAcceleration;//object created
			cout<<"Acceleration is: "<<calcAcceleration.calculateAcceleration()<<endl;
		};
		/*void jump()
		{
			twoD calHeight; //object created
			cout<<"Maximum height at which your character jumped is:"<<calHeight.MaximumHeight();
		};*/
	private:
		string name;
	
};
