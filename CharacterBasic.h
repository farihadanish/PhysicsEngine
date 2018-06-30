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
			cout<<"Character is walking, what do you want to calculate?"<<endl;
			int choice;
			cout<<" 1. Acceleration \n 2. Velocity \n 3. Distance"<<endl;
			cin>>choice;
			oneD calc;
			switch(choice)
			{	
				case 1:  
					cout<<"Character is walking with Acceleration : "<<calc.calculateAcceleration()<<" m/s^2"<<endl;
					break;
				case 2:
					cout<<"Character is walking with Velocity: "<<calc.calculateVelocity()<<" m/s"<<endl;
					break;
				case 3:
				    cout<<"Character has cover distance of: "<<calc.calculateDistance()<<" m"<<endl;
					break; 
				default:
					cout<<"Sorry, wrong input";
			}		
		};
		void jump()
		{
			twoD calHeight; //object created
			cout<<"Maximum Height at which your character jumped is: "<<calHeight.MaximumHeight()<<" m"<<endl;
			
		};
		void run()
		{
		}
		
	public:
		string name;
	
};
