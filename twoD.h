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
			float range=(velocity*velocity)/g*sin((2*angle)*PI/180);
			return range;
		};
		float MaximumHeight() //calculate MAXIMUM HEIGHT
		{
			
			cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			cout<<"Enter angle"<<endl;
			cin>>angle;
			float maxheight=(velocity*velocity*sin(angle)*sin(angle))/2*g;
			return maxheight;
	    }
	    float MaximumRange() //calculate MAXIMUM RANGE AT 45 DEGREE ANGLE 
	    {
	    	
	    	cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			float maxrange=(velocity*velocity)/g;
			return maxrange;
		}
		
		float ProjectileTrajectory()
        {
	 
        cout<<"enter horizontal distance:";
        cin>>distance;
        cout<<"enter initial velocity:";
        cin>>velocity;

        float trajectory=(distance*(tan(angle))-((g*distance*distance)/(2*velocity*velocity*(cos(angle))*(cos(angle))) ) );		
        return trajectory;


        }


        float TimeOfFlight()
        {
        cout<<"enter initial velocity:";
        cin>>velocity;
        flightTime=((2*velocity*sin(angle))/g);
        return flightTime;
        }

					
	private:
		float angle;	
	    float range; 
		float maxHeight;  
		float maxRange;	
		float Trajectory;
		float flightTime;
   };
