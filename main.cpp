#include <iostream>
#include"Minion.h"
#include"twoD.h"
#include "Angrybird.h"
int main()
{
	Minion minion1;
	minion1.walk();
	
	twoD v;
	//v.setvelocity(7);
	//v.display();
	cout<<v.MaximumRange();
	
	Angrybird Angrybird;
	Angrybird.jump();
	
	
	return 0;
}

