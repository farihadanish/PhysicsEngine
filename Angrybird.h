#include<iostream>
#include<string.h>
#include"CharacterBasic.h"
using namespace std;


class Angrybird: public CharacterBasic{
	public:
		Angrybird()
		{
			this->color=0;
			this->size=0;
		}
		Angrybird(string color,int size)
		{
			this->color=color;
			this->size=size;
		}
		Angrybird(Angrybird&clone)
		{
			this->color=clone.color;
			this->size=clone.size;
		}
		void display()
		{
			cout<<"enter color:"<<this->color<<endl;
			cout<<"enter size:"<<this->size<<endl;
		}
		
		
		private:
			string color;
			int size;
			
			
		};
