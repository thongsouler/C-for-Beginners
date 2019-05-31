#ifndef BOT_H
#define BOT_H
#include<iostream>
#include"character.h"
using namespace std;

class Bot : public Character 
{
	public:
		Bot(string n="Bot",int l=0,double b=100,int x=0,int y=0)
		{
			setName(n);
			setLevel(l);
			setBlood(b);
			setPosX(x);	
			setPosY(y);	

		}
		void printInfo()
		{
			Character :: printInfo();
		}
		void hit1 (Character* p)
		{
			p->setBlood(p->getBlood()-10);
		}
		void hitSuper(Character* p)
		{
			p->setBlood(p->getBlood()-20);
		}
		
};
#endif
