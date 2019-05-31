#include <iostream>
#include <stdlib.h>
#include"boss.h"
#include"bot.h"
#include "player.h"
#include "game.h"
#include <fstream>
using namespace std;


/*
Đang cơ bản, chưa hoàn thiện.
*/

int main()
{
	
	//-------------------------------------------------//
	/*
	Boss IronMan;
	IronMan.setName("IronMan");
	IronMan.setLevel(10);
	IronMan.setPosX(100);
	IronMan.setPosY(100);
	ofstream foBoss("Boss.dat");
	foBoss<<IronMan<<endl;
	foBoss.close();

	Boss Man;
	ifstream fiCharacter("Boss.dat");
	fiBoss>>Man;
	fiBoss.close();
	Man.printInfo();
	//-------------------------------------------------//
	

	
	Boss Thor;
	Player Thanos;
	Thanos.seeInside(&Thor);
	
	Boss x;
	Player Thor("Thor");
	Thor.printInfo();

	//-------------------------------------------------//

	Character *p;
	p=&Thor;
	p->hit1(&x);
	x.printInfo();
	p->hit2(&x);
	x.printInfo();

	*/
	//cout<<"\t\tEM XIN LỖI VÌ CHƯA HOÀN THIỆN.\n";
	cout<<"\n\t\t  B A T T L E     M A T H      G  A M E\n";
	cout<<"\tM E N U\n";
	cout<<"1.Luat choi va huong dan cach\n2.Choi.\n\n\n";
	cout<<"Nhap vao lua chon: ";
	int choice;
	cin>>choice;
	switch (choice)
	{

		//-----------Huong dan va luat choi-----------//

		case 1:
		system("clear");
		cout<<".\n";
		cout<<"Bạn(P) phải tiêu diệt hết tất cả các quái vật($) có trong map bằng các bài toán nhỏ.\n";
		cout<<"----------------------------\n";
		cout<<"Su dung cac nut w a s d de di chuyen.\n";
		break;

		//-------------Choi Game---------------//

		case 2:
		Player player;

		drawMap(player);

		while (1)
		{
			cout<<"Di chuyen\n";
			char move;
			cin>>move;
			if(move=='w') 
			{
				player.moveup();
				
			}
			if(move=='a') 
			{
				player.moveLeft();

			}
			if(move=='s')
			{
				player.moveDown();
			}
			if(move=='d')
			{
				player.moveRight();
			}
			system("clear");
			drawMap(player);
			if (meetbot>=0)
			{
				Bot x;
				if(meetbot==0)
				{					
					x.setName("LiLiu");
					x.setLevel(4);
					x.setBlood(80);
				} 
				if(meetbot==1)
				{					
					x.setName("Captain-Ar");
					x.setLevel(1);
					x.setBlood(50);
				} 
				if(meetbot==2)
				{					
					x.setName("Hulker");
					x.setLevel(2);
					x.setBlood(60);
				} 
				if(meetbot==3)
				{					
					x.setName("Fe-Man");
					x.setLevel(3);
					x.setBlood(70);
				} 
				
				cout<<"Wait.......\n";
				sleep(2);
				system("clear");
				cout<<"Gap Bot.Thong Tin cua Bot "<<x.getName()<<endl;
				player.seeInside(&x);
				warBot(player,x);
			}
			
			if (player.getLife()<0)
			{
				cout<<"Ban da thua.\n";
				break;
			}

			//if (player.getPosX()==2) break;
		}
		
		player.printInfo();
		break;

		
	}
	return 0;

}

