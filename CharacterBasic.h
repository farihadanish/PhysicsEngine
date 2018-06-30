#pragma once
#include<string.h>
#include"oneD.h"
#include"twoD.h"
#include<iostream>
using namespace std;

class CharacterBasic
{
	public:
		void walk()
		{
			cout<<"Minion is walking, what do you want to calculate?"<<endl;
			int choice;
			cout<<" 1. Acceleration \n 2. Velocity \n 3. Distance"<<endl;
			cin>>choice;
			oneD calc;
			switch(choice)
			{	
				case 1:  
					cout<<"Acceleration is: "<<calc.calculateAcceleration()<<" m/s^2"<<endl;
					break;
				case 2:
					cout<<"Velocity is: "<<calc.calculateVelocity()<<" m/s"<<endl;
					break;
				case 3:
				    cout<<"Distance is: "<<calc.calculateDistance()<<" m"<<endl;
					break; 
				default:
					cout<<"Sorry, wrong input";
			}		
//			oneD calcAcceleration;//object created
//			cout<<"Acceleration is: "<<calcAcceleration.calculateAcceleration()<<endl;
		};
		void jump()
		{
			twoD calHeight; //object created
			cout<<"Maximum height at which your character jumped is:"<<calHeight.MaximumHeight()<<" m"<<endl;
			
		};
		void run()
		{
		}
		
	public:
		string name;
	
};
