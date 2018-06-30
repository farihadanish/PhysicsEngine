#pragma once 
#include<iostream>
#include<string>
#define PI 3.14159265
#include<math.h> 
#include"Motion.h"
using namespace std;

class twoD:public Motion
{
	public:
		static const float g= 9.8; //constant gravity  
		
		twoD()
		{  
		    this->g;
			this->range=0;
			this->velocity=0;
			this->maxHeight=0;
			this->maxRange=0;
		};
		twoD(float range, float velocity, float maxHeight, float maxRange)
		{
			this->range=range;
			this->velocity=velocity;
			this->maxHeight=maxHeight;	
			this->maxRange=maxRange;
		};
		twoD(twoD&clone)
		{
			this->range=clone.range;
			this->velocity=clone.velocity;
			this->maxHeight=clone.maxHeight;
			this->maxRange=clone.maxRange;
		};
		
	    void setVelocity(float velocity)
		{
			this->velocity=velocity;
		};
		float getVelocity()
		{
			return this->velocity;
		};
		
		void display()
		{
			cout<<"Gravity:"<<this->g<<endl;
			cout<<"Velocity:"<<this->velocity<<endl;
			cout<<"Range:"<<this->range<<endl;
			cout<<"Maximum Height:"<<this->maxHeight<<endl;
			cout<<"Maximum Range:"<<this->maxRange<<endl;
		};
		
		float Range() //calculate RANGE
		{
			cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			cout<<"Enter angle"<<endl;
			cin>>angle;
		    range=(velocity*velocity)/g*sin((2*angle)*PI/180);
			return range;
		};
		
		float MaximumHeight() //calculate MAXIMUM HEIGHT
		{
			cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			cout<<"Enter angle"<<endl;
			cin>>angle;
		    maxHeight=(velocity*velocity*sin(angle)*sin(angle))/2*g;
			return maxHeight;
	    };
	    
	    float MaximumRange() //calculate MAXIMUM RANGE AT 45 DEGREE ANGLE 
	    {
	    	cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
		    maxRange=(velocity*velocity)/g;
			return maxRange;
		};
		
		float ProjectileTrajectory()
        {
            cout<<"Enter horizontal distance: ";
            cin>>distance;
            cout<<"Enter initial velocity: ";
            cin>>velocity;
            trajectory=(distance*(tan(angle))-((g*distance*distance)/(2*velocity*velocity*(cos(angle))*(cos(angle))) ) );		
            return trajectory;
        }
        float TimeOfFlight()
        {
            cout<<"Enter initial velocity: ";
            cin>>velocity;
            flightTime=((2*velocity*sin(angle))/g);
            return flightTime;
        }
						
	private:
		float angle;	
	    float range; 
		float maxHeight;  
		float maxRange;	
		float trajectory;
		float flightTime;
};
