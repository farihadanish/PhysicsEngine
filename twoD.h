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
			this->v=0;
			this->maxHeight=0;
			this->maxRange=0;
		};
		twoD(float range, float v, float maxH, float maxR)
		{
			this->range=range;
			this->v=v;
			this->maxHeight=maxH;	
			this->maxRange=maxR;
		};
		twoD(twoD&clone)
		{
			this->range=clone.range;
			this->v=clone.v;
			this->maxHeight=clone.maxHeight;
			this->maxRange=clone.maxRange;
		};
		
	    void setv(float v)
		{
			this->v=v;
		};
		float getv()
		{
			return this->v;
		};
		
		void display()
		{
			cout<<"Gravity:"<<this->g<<endl;
			cout<<"Velocity:"<<this->v<<endl;
			cout<<"Range:"<<this->range<<endl;
			cout<<"Maximum Height:"<<this->maxHeight<<endl;
			cout<<"Maximum Range:"<<this->maxRange<<endl;
		};
		
		float Range() //calculate RANGE
		{
			
			cout<<"Enter initial velocity"<<endl;
			cin>>ini_v;
			cout<<"Enter angle"<<endl;
			cin>>angle;
			float range=(v*v)/g*sin((2*angle)*PI/180);
			return range;
		};
		float MaximumHeight() //calculate MAXIMUM HEIGHT
		{
			
			cout<<"Enter initial velocity"<<endl;
			cin>>ini_v;
			cout<<"Enter angle"<<endl;
			cin>>angle;
			float maxheight=(ini_v*ini_v*sin(angle)*sin(angle))/2*g;
			return maxheight;
	    }
	    float MaximumRange() //calculate MAXIMUM RANGE AT 45 DEGREE ANGLE 
	    {
	    	
	    	cout<<"Enter initial velocity"<<endl;
			cin>>ini_v;
			float maxrange=(ini_v*ini_v)/g;
			return maxrange;
		}
		
		float projectile_trajectory()
{
	
cout<<"enter horizontal distance : " ;
cin>>x;
cout<<"enter initial velocity : " ;
cin>>v;

trajectory= (x*(tan(angle)) -  ((g*x*x)   / (2*v*v *(cos(angle)) * (cos(angle)) )     )    );		
return trajectory;


}


float time_of_flight()
{
cout<<"enter initial velocity : ";
cin>>v;
flight_time=( ( 2*v*sin(angle) )  /  g);
return flight_time;
}

					
	private:
		float ini_v;
		float angle;	
	    float range; 
		float maxHeight;  
		float maxRange;	
		float trajectory;
		float t;
		float x;
		float v;
		float flight_time;
};
