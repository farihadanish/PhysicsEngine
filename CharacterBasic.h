#include<iostream>
#include<string.h>
#include"oneD.h"
<<<<<<< HEAD
//#include"twoD.h"
=======

>>>>>>> 74b8b9d2a10e714f7f262300ad26bb6cc79a7962
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
