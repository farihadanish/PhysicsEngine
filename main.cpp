#include <iostream>
#include"Minion.h"
#include"twoD.h"
int main()
{
	Minion minion1;
	minion1.walk();
	
	twoD v;
	//v.setvelocity(7);
	//v.display();
	cout<<v.MaximumRange();
	cout<<v.MaximumHeight();
	
	return 0;
}
