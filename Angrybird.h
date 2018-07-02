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
	    	cout<<"Your Angrybird has been launched, what do you want to calculate?"<<endl;
	    		int choice;
			cout<<" 1. Height \n 2. Range \n 3. Time of flight \n 4. Trajectory "<<endl;
			cin>>choice;
			twoD calc;
			switch(choice)
			{	
				case 1:  
					cout<<"Character moved upto a height of: "<<calc.MaximumHeight()<<" m"<<endl;
					break;
				case 2:
					cout<<"Character moved: "<<calc.MaximumRange()<<" m/kg"<<endl;
					break;
				case 3:
				    cout<<"Character was in flight for: "<<calc.TimeOfFlight()<<" sec"<<endl;
					break; 
				case 4:
					cout<<"Character has covered trajectory of: "<<calc.ProjectileTrajectory()<<" m"<<endl;
					break;

				default:
					cout<<"Sorry, wrong input"<<endl;
			}		
	    	
		}
	    
		private:
			string color;
			int size;
};
