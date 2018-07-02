#include "Minion.h"
#include "Angrybird.h"
#include "Mario.h"
#include<iostream>
using namespace std;

class Engine
{
	public:
		Engine()
		{
	

		}
		
		void start()
		{
			int choice;
			char continueProgram;
			cout<<"\t\t\t WELCOME TO PHYSICS ENGINE"<<endl;
			do{
				cout<<"Select your character:"<<endl;
				cout<<" 1. Minion \n 2. Angrybird \n 3. Mario"<<endl;
				cin>>choice;
				if(choice==1)
				{
					cout<<"Your Minion has been created."<<endl;
					cout<<"Select the action: \n 1. Walk \n 2. Run \n 3. Jump \n 4. Laugh"<<endl;
					int action;
					cin>>action;
					Minion minion1;
					switch(action)
					{
						case 1:
							minion1.walk();
							break;
						case 2:
							minion1.run();
							break;
						case 3:
							minion1.jump();
							break;
						case 4:
							minion1.laugh();
							break;
						}	
				}
				else if(choice==2)
				{
					cout<<"Your Angrybird has been created."<<endl;
					cout<<"Select the action: \n 1. Walk \n 2. Run \n 3. Jump \n 4. Launch \n 5. Laugh"<<endl;
					int action;
					cin>>action;
					Angrybird angrybird1;
					switch(action)
					{
						case 1:
							angrybird1.walk();
							break;
						case 2:
							angrybird1.run();
							break;
						case 3:
							angrybird1.jump();
							break;
						case 4:
							angrybird1.launch();
							break;
						case 5:
							angrybird1.laugh();
							break;	
					}	
				} 
				else if(choice==3)
				{
					cout<<"Your Mario has been created."<<endl;
					cout<<"Select the action: \n 1. Walk \n 2. Run \n 3. Jump \n 4. Drive \n 5. Swim \n 6. Laugh"<<endl;
					int action;
					cin>>action;
					Mario mario1;
					switch(action)
					{
						case 1:
							mario1.walk();
							break;
						case 2:
						 	mario1.run();
							break;
						case 3:
							mario1.jump();
							break;
						case 4:
							mario1.drive();
							break;
						case 5:
							mario1.swim();
							break;
						case 6:
						    mario1.laugh();
						    break;
					}
				}
				else
				{
					cout<<"Wrong choice"<<endl;	
				}
				cout<<"Do you want to start again?"<<endl;
				cout<<"Enter Y to continue"<<endl;
				cin>>continueProgram;
			
			}//do body
			while(continueProgram == 'y' || choice == 'Y');
		
			
	    }
		
	
};
     
