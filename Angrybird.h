#include<iostream>
#include<string.h>
#include"CharacterBasic.h"
using namespace std;


class Angrybird: public CharacterBasic{
	public:
		Angrybird()
		{
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
			cout<<"Color:"<<this->color<<endl;
			cout<<"Size:"<<this->size<<endl;
		}
	
		private:
			string color;
			int size;
};
