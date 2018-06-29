#pragma once
#include<string.h>
#include"oneD.h"
#include"twoD.h"
#include<iostream>
using namespace std;

class CharacterBasic
{
	public:
		void walk(){
			cout<<"Minion is walking, what do you want to calculate?"<<endl;
			int choice;
			cout<<"1. Acceleration \n 2. Velocity \n 3. Distance"<<endl;
			cin>>choice;
			oneD calc;
			switch(choice){
				
				case 1: 
					 
					cout<<"Acceleration is: "<<calc.calculateAcceleration()<<endl;
					break;
				case 2:
					cout<<"Velocit is: "<<calc.calculateVelocity();
					break;
				case 3:
				    cout<<"Distance is: "<<calc.calculateDistance();
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
			cout<<"Maximum height at which your character jumped is:"<<calHeight.MaximumHeight();
		};
		
	public:
		string name;
	
};
