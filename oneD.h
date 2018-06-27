#include<iostream>
#include<string.h>

using namespace std;

class oneD
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
		void settime(float time)
		{
			this->time=time;
		}
		void setvelocity(float velocity)
		{
			this->velocity=velocity;
		}
		void setdistance(float distance)
		{
			this->distance=distance;
		}
		void setacceleration(float acceleration)
		{
			this->acceleration=acceleration;
		}
		float gettime()
		{
			return this->time;
		}
		float getvelocity()
		{
			return this->velocity;
		}
		float getdistance()
		{
			return this->distance;
		}
		float getacceleration()
		{
			return this->acceleration;
		}
		void display()
		{
			cout<<"enter time:"<<this->time<<endl;
			cout<<"enter velocity:"<<this->velocity<<endl;
			cout<<"enter distance:"<<this->distance<<endl;
			cout<<"enter acceleration:"<<this->acceleration<<endl;
		}
//		ostream&operator<<(ostream&o,oneD&M)//insertion overload
//		{
//			return o<<"time:"<<M.gettime()<<endl<<"velocity:"<<M.getvelocity()<<endl<<"distance:"<<M.getdistance()<<endl<<"acceleration:"<<M.getacceleration()<<endl;
//		}
//		oneD &operator=(const oneD&M)//assignment overload
//		{
//			cout<<"assignment operator called";
//			this->time=M.time;
//			this->velocity=M.velocity;
//			this->distance=M.distance;
//			this->acceleration=M.acceleration;
//			return *this;
//		}
		float calculateVelocity(){//to calculate velocity
		float distance;
		int time;
		
		cout<<"Enter distance";
		cin>>distance;
		cout<<"Enter time";
		cin>>time;
			float velocity = distance/time;
			return velocity;
		}
		float calculateAcceleration(){//to calculate acceleration
			float velocity;
			int time;
			
			cout<<"Enter velocity";
			cin>>velocity;
			cout<<"Enter Time";
			cin>>time;
			
			float acceleration = velocity/time;
			return acceleration;
		}
		float calculateTime(){//to calculate time
		float distance;
		float velocity;
		
		cout<<"Enter distance";
		cin>>distance;
		cout<<"Enter velocity";
		cin>>velocity;
			float time = distance/velocity;
			return time;
		}
		float calculateDistance(){//to calculate distance
		float velocity;
		int time;
		
		cout<<"Enter velocity";
		cin>>velocity;
		cout<<"Enter time";
		cin>>time;
		    float distance = velocity*time;
		    return distance;
		}
		
		
		
		
		private:
        int time;
    	float velocity;
    	float distance;
    	float acceleration;
    	
		
};
