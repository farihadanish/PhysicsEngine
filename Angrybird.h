#include<iostream>
#include<string.h>
#include"CharacterBasic.h"
#include"twoD.h"
using namespace std;

class Angrybird: public CharacterBasic
{
	public:
		Angrybird()
		{
		}
		Angrybird(string color,int size)
		{
			this->color=color;
			this->size=size;
		}
		Angrybird(Angrybird&clone)
		{
			this->color=clone.color;
			this->size=clone.size;
		}
		void display()
		{
			cout<<"Color:"<<this->color<<endl;
			cout<<"Size:"<<this->size<<endl;
		}
	    void launch()
	    {
	    	cout<<"your angrybird has been launched, what do you want?"<<endl;
	    		int choice;
			cout<<"1. Height   2. Range	3.flightTime 4. trajectory "<<endl;
			cin>>choice;
			twoD calc;
			switch(choice)
			{	
				case 1:  
					cout<<"Character moved till height  of "<<calc.MaximumHeight()<<" m"<<endl;
					break;
				case 2:
					cout<<"Character moved  "<<calc.MaximumRange()<<" m/kg"<<endl;
					break;
				case 3:
				    cout<<"Character was in flight for "<<calc.TimeOfFlight()<<" sec"<<endl;
					break; 
				case 4:
					cout<<"Character has covered trajectory of  "<<calc.ProjectileTrajectory()<<" m"<<endl;
					break;

				default:
					cout<<"Sorry, wrong input";
			}		
	    	
		}
	    
		private:
			string color;
			int size;
};
