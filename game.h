#ifndef GAME_H
#define GAME_H
#include "character.h"
#include "boss.h"
#include "bot.h"
#include "player.h"
#include<iomanip>
#include <string>
#include <unistd.h>
#include <ctime>
char board[4][5];
int meetbot=-1;
unsigned int count=0;
int warBot(Player p,Bot x);
void drawMap(Player player);
void printImage(Player p,Bot x);
void mathGame(Player p,Bot x,int i);
void drawMap(Player player)
{
    int x=player.getPosX();
    int y=player.getPosY();
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            board[i][j]='-';
            if(i==x&&j==y)
            {
                board[i][j]='O';
            }
            if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)||(i==3&&j==3))
            {
                board[i][j]='$';
            }      
            if(i==0&&j==4)
            {
                board[i][j]='F';
            }  
        }
    }
    if((x==0&&y==0)||(x==1&&y==1)||(x==2&&y==2)||(x==3&&y==3))
    {
        board[x][y]='?';
        meetbot=x;
    }
   
    cout<<"|Player Name | Level | Life | Blood |\n";
    cout<<" "<<player.getName()<<setw(17-(player.getName()).length())<<player.getLevel()<<setw(8)<<player.getLife()<<setw(8)<<player.getBlood()<<endl;   
    cout<<endl<<endl;
    cout<<"\n\t\t  B A T T L E     M A T H      G  A M E\n"; 
    cout<<"\t\t_________________________________________\n";
    cout<<"\t\t|       |       |       |       |        |\n";
    cout<<"\t\t|   "<<board[0][0]<<"   |   "<<board[0][1]<<"   |   "<<board[0][2]<<"   |   "<<board[0][3]<<"   |    "<<board[0][4]<<"   |\n";
    cout<<"\t\t|_______|_______|_______|_______|________|\n";
    cout<<"\t\t|       |       |       |       |        |\n";
    cout<<"\t\t|   "<<board[1][0]<<"   |   "<<board[1][1]<<"   |   "<<board[1][2]<<"   |   "<<board[1][3]<<"   |    "<<board[1][4]<<"   |\n";
    cout<<"\t\t|_______|_______|_______|_______|________|\n";
    cout<<"\t\t|       |       |       |       |        |\n";
    cout<<"\t\t|   "<<board[2][0]<<"   |   "<<board[2][1]<<"   |   "<<board[2][2]<<"   |   "<<board[2][3]<<"   |    "<<board[2][4]<<"   |\n";
    cout<<"\t\t|_______|_______|_______|_______|________|\n";
    cout<<"\t\t|       |       |       |       |        |\n";
    cout<<"\t\t|   "<<board[3][0]<<"   |   "<<board[3][1]<<"   |   "<<board[3][2]<<"   |   "<<board[3][3]<<"   |    "<<board[3][4]<<"   |\n";
    cout<<"\t\t|_______|_______|_______|_______|________|\n";

       
}
void printImage(Player p,Bot x)
{
    cout<<"    ^     |Your Life:"<<p.getLife()<<endl;
    cout<<"   x0x    |Your Blood:"<<p.getBlood()<<endl;
    cout<<"    x    "<<endl;
    cout<<"____x____"<<endl;
    cout<<"   xxx   "<<endl;
    cout<<"   xxx   "<<endl;
    cout<<"   x x   "<<endl;
    cout<<"   ^ ^   "<<endl;
    cout<<"\n\n";
    cout<<"   000    |Bot Blood:"<<x.getBlood()<<endl;
    cout<<"    0    "<<endl;
    cout<<"____0____"<<endl;
    cout<<"   000   "<<endl;
    cout<<"   000   "<<endl;
    cout<<"   0 0   "<<endl;

}
void mathGame(Player p,Bot x,int i)
{
    int result;
    srand(time(NULL));
    int a,b,c,d;
    switch (i)
    {
    case 1:
        cout<<"Level 1\n";
        while (1)
        {
            
            if(x.getBlood()<0||p.getBlood()<0)
            {
                break;
            }
            a=rand()%7;
            b=rand()%20;
            c=(a+b)%10;
            d=a+b-3;
            cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"= ?"<<endl;
            cout<<"? =";
            cin>>result;
            if (result==a+b+c+d)
            {
                cout<<"Correct!Chọn chiêu thức: 1.Normal 2.Super (1/2)"<<endl;
                cout<<"Số chiêu Super: "<<p.getSuperHit()<<endl;
                int c;
                cin>>c;
                if(c==1)
                {
                    cout<<"Bot -20 blood\n";
                    p.hit1(&x);
                } 
                if(c==2)
                {   cout<<"Bot -30 blood\n";
                    p.hitSuper(&x);
                    p.setSuperHit(p.getSuperHit()-1);
                } 
                sleep(1);
                system("clear");
                printImage(p,x);
            }
            else 
            {
                cout<<"Wrong. Your Blood -10\n";
                x.hit1(&p);
                sleep(1);
                system("clear");
                printImage(p,x);
            }

        }
        break;
    case 2:
        cout<<"Level 2\n";
        while (1)
        {
            
            if(x.getBlood()<0||p.getBlood()<0)
            {
                break;
            }
            a=rand()%7;
            b=rand()%10;
            c=(a+b)%10;
            d=a+b-3;
            cout<<a<<"x"<<b<<"+"<<c<<"+"<<d<<"= ?"<<endl;
            cout<<"? =";
            cin>>result;
            if (result==a*b+c+d)
            {
                
                cout<<"Correct!Chọn chiêu thức: 1.Normal 2.Super (1/2)"<<endl;
                cout<<"Số chiêu Super: "<<p.getSuperHit()<<endl;
                int c;
                cin>>c;
                if(c==1)
                {
                    cout<<"Bot -20 blood\n";
                    p.hit1(&x);
                } 
                if(c==2)
                {   cout<<"Bot -30 blood\n";
                    p.hitSuper(&x);
                    p.setSuperHit(p.getSuperHit()-1);
                } 
                sleep(1);
                system("clear");
                printImage(p,x);
            }
            else 
            {
                cout<<"Wrong. Your Blood -10\n";
                x.hit1(&p);
                sleep(1);
                system("clear");
                printImage(p,x);
            }

        }
        
        break;
    case 3:
        cout<<"Level 3\n";
        while (1)
        {
            
            if(x.getBlood()<0||p.getBlood()<0)
            {
                break;
            }
            a=rand()%7;
            b=rand()%8;
            c=(a+b)%9;
            d=a+b+5;
            cout<<a<<"x"<<b<<"+"<<c<<"-"<<d<<"= ?"<<endl;
            cout<<"2*? =";
            cin>>result;
            if (result==2*(a*b+c+d))
            {
                cout<<"Correct!Chọn chiêu thức: 1.Normal 2.Super (1/2)"<<endl;
                cout<<"Số chiêu Super: "<<p.getSuperHit()<<endl;
                int c;
                cin>>c;
                if(c==1)
                {
                    cout<<"Bot -20 blood\n";
                    p.hit1(&x);
                } 
                if(c==2)
                {   cout<<"Bot -30 blood\n";
                    p.hitSuper(&x);
                    p.setSuperHit(p.getSuperHit()-1);
                } 
                sleep(1);
                system("clear");
                printImage(p,x);
            }
            else 
            {
                cout<<"Wrong. Your Blood -10\n";
                x.hit1(&p);
                sleep(1);
                system("clear");
                printImage(p,x);
            }

        }  
        break;
        case 0:
        cout<<"Level 4\n";
        while (1)
        {
            
            if(x.getBlood()<0||p.getBlood()<0)
            {
                break;
            }
            a=rand()%7;
            b=rand()%8;
            c=(a+b)%9;
            d=a+b+5;
            cout<<a<<"x"<<b<<"+"<<c<<"-"<<d<<"= ?"<<endl;
            cout<<"3*? =";
            cin>>result;
            if (result==2*(a*b+c+d))
            {
                cout<<"Correct!Chọn chiêu thức: 1.Normal 2.Super (1/2)"<<endl;
                cout<<"Số chiêu Super: "<<p.getSuperHit()<<endl;
                int c;
                cin>>c;
                if(c==1)
                {
                    cout<<"Bot -20 blood\n";
                    p.hit1(&x);
                } 
                if(c==2)
                {   cout<<"Bot -30 blood\n";
                    p.hitSuper(&x);
                    p.setSuperHit(p.getSuperHit()-1);
                } 
                sleep(1);
                system("clear");
                printImage(p,x);
            }
            else 
            {
                cout<<"Wrong. Your Blood -10\n";
                x.hit1(&p);
                sleep(1);
                system("clear");
                printImage(p,x);
            }

        }  
        break;
    default:
        break;
    }
    if(x.getBlood()<=0)
    {
        cout<<"Congra... You Win Bot "<<x.getName()<<endl;
        count++;
    }
    else 
    {
        cout<<"You loss. Your Life -1.\n";
        p.setLife(p.getLife()-1);
    }
    sleep(2);
    system("clear");
    return;
}

int warBot(Player p,Bot x)
{
    cout<<"\nHahaaa.... Ta la "<<x.getName()<<" day, muon cuoi cong chua phai buoc qua xac cua ta !!\n";
    cout<<"Nguoi co muon chien voi ta khong (y.../n) ?\n";
    char t;
    cin>>t;
    if(t=='n')
    {
        meetbot=-1;
        return 0;
    }
    cout<<"OK. Chien nao @@"<<endl;
    sleep(1);
    system("clear");
    //Bat dau MathGame
    printImage(p,x);
    int i=meetbot;
    mathGame(p,x,i);
    cout<<"Tro ve Map....\n";
    sleep(1);
    system("clear");
    if(p.getLife()<0) return 0;
    if(count>=4)
    {
        cout<<"Chúc mừng bạn.Bạn đã phá đảo trò chơi @@.\n";
    }
    
    return 0;
}

#endif