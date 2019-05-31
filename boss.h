#ifndef BOSS_H
#define BOSS_H
#include<iostream>
#include"character.h"
using namespace std;

class Boss : public Character 
{
	private:
	 	int attackRate;
	public:
		Boss(string n="Boss",int l=0,double b=100,int x=0,int y=0,int a=0)
		{
			setName(n);
			setLevel(l);
			setBlood(b);
			setPosX(x);	
			setPosY(y);	
			setAttackRate(a);

		}
		
		~Boss(){}
		void setAttackRate(int a)
		{
			attackRate=a;
		}
		int getAttackRate()
		{
			return attackRate;
		}
		void printInfo()
			{
				Character:: printInfo();
				cout<<"Attack Rate: "<<this->attackRate<<endl;
			}
		//Qua tai toan tu xuat
		
		friend ostream& operator <<(ostream& os, Boss x)
		{
			os<<x.name<<endl;
			os<<x.level<<endl;
			os<<x.blood<<endl;
			//os<<x.posX<<endl;
			//os<<x.posY<<endl;
			os<<x.attackRate<<endl;
			return os;
		}
		friend istream& operator >>(istream& is, Boss x)
		{
			is>>x.name;
			is>>x.level;
			is>>x.blood;
			is>>x.attackRate;
			return is;
		}
		void hit1 (Character* p)
		{
			p->setBlood(p->getBlood()-20);
		}
		void hitSuper(Character* p)
		{
			p->setBlood(p->getBlood()-20);

		}
		
				
};
#endif
