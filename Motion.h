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
		float calculateDistance(){//to calculate distance
		float velocity;
		int time;
		
		cout<<"Enter velocity"<<endl;
		cin>>velocity;
		cout<<"Enter time"<<endl;
		cin>>time;
		    float distance = velocity*time;
		    return distance;

		}
	
	
	public:
		float distance;
		float velocity;
		float time;
		
		
};
