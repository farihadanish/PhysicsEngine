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
					cout<<"Character is walking with Acceleration: "<<calc.calculateAcceleration()<<" m/s^2"<<endl;
					break;
				case 2:
					cout<<"Character is walking with Velocity: "<<calc.calculateVelocity()<<" m/s"<<endl;
					break;
				case 3:
				    cout<<"Character has cover distance of: "<<calc.calculateDistance()<<" m"<<endl;
					break; 
				default:
					cout<<"Sorry, wrong input"<<endl;
			}		
		};
		void jump()
		{
			cout<<"Character is jumping, what do you want to calculate?"<<endl;
			int choice;
			cout<<" 1. Maximum Height \n 2. Maimum Range \n 3. Projectile Trajectory \n 4. Time Of Flight"<<endl;
			cin>>choice;
			twoD calc;
			switch(choice)
			{
				case 1:
					cout<<"Character has jumped upto a maximum height of: "<<calc.MaximumHeight()<<" m"<<endl;
					break;
				case 2: 
				    cout<<"Character has covered a maximum range of: "<<calc.MaximumRange()<<" m/kg"<<endl;
				    break;
				case 3:
				    cout<<"Trajectory of jump: "<<calc.ProjectileTrajectory()<<" "<<endl;
					break;
				case 4:
				    cout<<"Time taken: "<<calc.TimeOfFlight()<<" "<<endl;
				    break;
				default:
					cout<<"Sorry, wrong input"<<endl;
		    }	
		};
		void run()
		{
			cout<<"Character is running, what do you want to calculate?"<<endl;
			int choice;
			cout<<" 1. Acce3leration \n 2. Velocity \n 3. Distance"<<endl;
			cin>>choice;
			oneD calc;
			switch(choice)
			{	
				case 1:  
					cout<<"Character is running with Acceleration: "<<calc.calculateAcceleration()<<" m/s^2"<<endl;
					break;
				case 2:
					cout<<"Character is running with Velocity: "<<calc.calculateVelocity()<<" m/s"<<endl;
					break;
				case 3:
				    cout<<"Character has cover distance of: "<<calc.calculateDistance()<<" m"<<endl;
					break; 
				default:
					cout<<"Sorry, wrong input"<<endl;
			}		
		}
		virtual void laugh()
		{
			cout<<"hahahah"<<endl;
		};	
	public:
		string name;	
};
