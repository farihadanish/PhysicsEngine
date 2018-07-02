#pragma once 
#include<iostream>
#include<string>
#include"Motion.h"
using namespace std;

class oneD:public Motion
{
	public:
		oneD()
		{
			this->time=0;
			this->velocity=0;
			this->distance=0;
			this->acceleration=0;
		}
		oneD(float time,float velocity,float distance,float acceleration)
		{
			this->time=time;
			this->velocity=velocity;
			this->distance=distance;
			this->acceleration=acceleration;
		}
		oneD(oneD&clone)
		{
			this->time=clone.time;
			this->velocity=clone.velocity;
			this->distance=clone.distance;
			this->acceleration=clone.acceleration;
		}
		void display()
		{
			cout<<"Time:"<<this->time<<endl;
			cout<<"Velocity:"<<this->velocity<<endl;
			cout<<"Distance:"<<this->distance<<endl;
			cout<<"Acceleration:"<<this->acceleration<<endl;
		}
		float calculateVelocity()//to calculate velocity
		{
		    cout<<"Enter distance"<<endl;
		    cin>>distance;
	    	cout<<"Enter time"<<endl;
	    	cin>>time;
		    velocity = distance/time;
			return velocity;
		}
		float calculateAcceleration()//to calculate acceleration
		{
			cout<<"Enter velocity"<<endl;
			cin>>velocity;
			cout<<"Enter Time"<<endl;
			cin>>time;
		    acceleration = velocity/time;
			return acceleration;
		}
		float calculateTime()//to calculate time
		{
			cout<<"Enter distance"<<endl;
			cin>>distance;
			cout<<"Enter velocity"<<endl;
			cin>>velocity;
		    time = distance/velocity;
			return time;
		}
};
