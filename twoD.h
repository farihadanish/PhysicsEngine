#pragma once 
#include<iostream>
#include<string>
#define PI 3.14159265
#include<math.h> 
using namespace std;

class twoD
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
		twoD(float range, float velocity, float maxH, float maxR)
		{
			this->range=range;
			this->velocity=velocity;
			this->maxHeight=maxH;	
			this->maxRange=maxR;
		};
		twoD(twoD&clone)
		{
			this->range=clone.range;
			this->velocity=clone.velocity;
			this->maxHeight=clone.maxHeight;
			this->maxRange=clone.maxRange;
		};
		
	    void setvelocity(float velocity)
		{
			this->velocity=velocity;
		};
		float getvelocity()
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
			float velocity;
			float angle;
			cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			cout<<"Enter angle"<<endl;
			cin>>angle;
			float range=(velocity*velocity)/g*sin((2*angle)*PI/180);
			return range;
		};
		float MaximumHeight() //calculate MAXIMUM HEIGHT
		{
			float velocity;
			float angle;
			cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			cout<<"Enter angle"<<endl;
			cin>>angle;
			float maxheight=(velocity*velocity*sin(angle)*sin(angle))/2*g;
			return maxheight;
	    };
	    float MaximumRange() //calculate MAXIMUM RANGE AT 45 DEGREE ANGLE 
	    {
	    	float velocity;
	    	cout<<"Enter initial velocity"<<endl;
			cin>>velocity;
			float maxrange=(velocity*velocity)/g;
			return maxrange;
		};
					
	private:
		float velocity;	
	    float range; 
		float maxHeight;  
		float maxRange;	
};
