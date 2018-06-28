#include<iostream>
#include<string>

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
	
		void display()
		{
			cout<<"Time:"<<this->time<<endl;
			cout<<"Velocity:"<<this->velocity<<endl;
			cout<<"Distance:"<<this->distance<<endl;
			cout<<"Acceleration:"<<this->acceleration<<endl;
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
		
		cout<<"Enter distance"<<endl;
		cin>>distance;
		cout<<"Enter time"<<endl;
		cin>>time;
			float velocity = distance/time;
			return velocity;
		
		}
		float calculateAcceleration(){//to calculate acceleration
			float velocity;
			int time;
			
			cout<<"Enter velocity"<<endl;
			cin>>velocity;
			cout<<"Enter Time"<<endl;
			cin>>time;
			
			float acceleration = velocity/time;
			return acceleration;
		}
		float calculateTime(){//to calculate time
		float distance;
		float velocity;
		
		cout<<"Enter distance"<<endl;
		cin>>distance;
		cout<<"Enter velocity"<<endl;
		cin>>velocity;
			float time = distance/velocity;
			return time;
	
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
	
		private:
        int time;
    	float velocity;
    	float distance;
    	float acceleration;
};
