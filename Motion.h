#include<iostream>
#include<string.h>
#pragma once

using namespace std;

class Motion
{
	public:
	Motion()
	{
		
	}
	float calculateDistance()//to calculate distance
	{
		cout<<"Enter velocity: "<<endl;
		cin>>velocity;
		cout<<"Enter time: "<<endl;
		cin>>time;
	    distance = velocity*time;
        return distance;
	}
	float calculateForce() //to calculate force applied 
	{
		cout<<"Enter mass: "<<endl;
		cin>>mass;
		cout<<"Enter acceleration: "<<endl;
		cin>>acceleration;
		force = mass*acceleration;
		return force; 
	}
	
	public:
		float distance;
		float velocity;
		float time;	
		float mass;
		float acceleration;	
		float force;
};
