/* Da dinh Func seeInside(Character* p)
{
	p->printInfor();
}
*/
#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"
#include "boss.h"
#include "bot.h"

class Player : public Character 
{
	private:
	 	int life,superHit;
	public:
		Player(string n="Player",int l=0,double b=100,int x=3,int y=0,int li=1,int s=4)
		{
			setName(n);
			setLevel(l);
			setBlood(b);
			setPosX(x);	
			setPosY(y);	
			setLife(li);	
			setSuperHit(s);		
		}
		~Player()
		{

		}
		void setLife(int li)
		{
			life=li;
		}
		int setSuperHit(int s)
		{
			superHit=s;
		}
		int getSuperHit()
		{
			return superHit;
		}
		int getLife()
		{
			return life;
		}
		void printInfo()
			{
				Character:: printInfo();
				cout<<"Life:  "<<this->life<<endl;
			}
		void seeInside(Character* p)
		{
			p->printInfo();
		}
		void hit1 (Character* p)
		{
			p->setBlood(p->getBlood()-20);
		}
		void hitSuper(Character* p)
		{
			p->setBlood(p->getBlood()-30);
		}
		void moveup()
		{
			posX--;
		}
		void moveDown()
		{
			posX++;
		}
		void moveLeft()
		{
			posY--;
		}
		void moveRight()
		{
			posY++;
		}
};		
		


#endif

