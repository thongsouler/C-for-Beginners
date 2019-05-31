#ifndef CHARACTER_H
#define CHARACTER_H
#include<iostream>

using namespace std;
class Character
{
	protected:
		string name;
		int level;
		double blood;
		int posX,posY;
	public:
		Character(string n="Character",int l=0,double b=100,int x=0,int y=0)
		{
			setName(n);
			setLevel(l);
			setBlood(b);
			setPosX(x);	
			setPosY(y);				
		}
		~Character()
		{

		}
		void setName(string n)
		{
			name=n;
		}
		string getName()
		{
			return name;
		}
		void setLevel(int l)
		{
			level=l;
		}
		int getLevel()
		{
			return level;
		}
		void setBlood(double b)
		{
			blood=b;
		}
		double getBlood()
		{
			return blood;
		}
		void setPosX(int x)
		{
			posX=x;
		}
		int getPosX()
		{
			return posX;
		}
		void setPosY(int y)
		{
			posY=y;
		}
		int getPosY()
		{
			return posY;
		}		
		//Qua tai toan tu xuat
		friend ostream& operator <<(ostream& os, Character x)
		{
			os<<x.name<<endl;
			os<<x.level<<endl;
			os<<x.blood<<endl;
			os<<x.posX<<endl;
			os<<x.posY<<endl;
			return os;
		}
		friend istream& operator >>(istream& is, Character x)
		{
			is>>x.name;
			is>>x.level;
			is>>x.blood;
			return is;
		}
		virtual void printInfo() //--Da hinh o day nek---//
		{
			cout<<"Name: "<<this->name<<endl;
			cout<<"Level: "<<this->level<<endl;
			cout<<"Blood: "<<this->blood<<endl;
		}
		virtual void hit1 (Character* p)
		{
			p->setBlood(p->getBlood()-0.5);
		}
		virtual void hitSuper(Character* p)
		{
			p->setBlood(p->getBlood()-5);
		}
		
};
#endif
