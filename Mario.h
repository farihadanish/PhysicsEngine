#include<iostream>
#include<string>
#include"CharacterBasic.h"
#include"Motion.h"
using namespace std;
 
class Mario : public CharacterBasic
{
	public:
    	Mario()
    	{
	    	this->color=" ";
	    	this->material=" ";
	    };
    	Mario(string color,string material)
	    {
	    	this->color=color;
		    this->material=material;
	    };
	    Mario(Mario&clone)
     	{
		    this->color=clone.color;
		    this->material=clone.material;
	    };
	
	    void setName(string name)
	    {
		    this->name=name;
       	};
	    void setColor(string color)
	    {
		    this->color=color;
	    };
	    void setMaterial(string material)
	    {
		   this->material=material;
	    };
	    string getName()
	    {
		    return this->name;
	    };
	    string getColor()
	    {
		    return this->color;
	    };
	    string getMaterial()
	    {
		    return this->material;
	    };
	
	    void display()
	    {
		    cout<<"Name: "<<this->name<<endl;
		    cout<<"Color: "<<this->color<<endl;
		    cout<<"Material: "<<this->material<<endl;
	    };
	
	    void drive()
	    {
	    	cout<<"Drive started"<<endl;
		    oneD calcAcceleration; //object of oneD class
		    cout<<"Mario is driving a car at "<<calcAcceleration.calculateAcceleration()<<" m/s^2"<<endl;
    	};	
		
		void swim()
		{
			cout<<"Swimming"<<endl;
			Motion calcForce; //object of motion class
			cout<<"Mario is swimming with force "<<calcForce.calculateForce()<<" N"<<endl;
		};
		
	private:
		string color;
		string material; //gold, silver, copper
}; 
