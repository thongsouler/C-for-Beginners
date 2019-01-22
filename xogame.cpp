#include<iostream>
using namespace std;
//game x-o
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char hinh = 'x';
void Draw()// ve ma tran
{
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}



}

void Input()
{
	cout<<"Nhap vi tri ban muon choi ";
	int a;
	cin>>a;
	if (a==1)
	{
		matrix[0][0]=hinh;
	}
	else if (a==2)
	{
		matrix[0][1]=hinh;
	}
	else if (a==3)
	{
		matrix[0][2]=hinh;
	}
	else if (a==4)
	{
		matrix[1][0]=hinh;
	}

	else if (a==5)
	{
		matrix[1][1]=hinh;
	}

	else if (a==6)
	{
		matrix[1][2]=hinh;
	}

	else if (a==7)
	{
		matrix[2][0]=hinh;
	}
	else if (a==8)
	{
		matrix[2][1]=hinh;
	}
	else if (a==9)
	{
		matrix[2][2]=hinh;
	}
}

void doiLuot()
{
	if (hinh=='x') hinh='o';
	else hinh='x';


}

char check()
{
	
	//nguoi choi X thang
	if(matrix[0][0]=='x' && matrix[0][1]=='x' && matrix[0][2]=='x') 
	{
		return 'x';
	}
	else if(matrix[0][0]=='x' && matrix[1][0]=='x' && matrix[2][0]=='x') 
	{
		return 'x';
	}
	else if(matrix[0][0]=='x' && matrix[1][1]=='x' && matrix[2][2]=='x') 
	{
		return 'x';
	}
	else if(matrix[0][1]=='x' && matrix[1][1]=='x' && matrix[2][1]=='x') 
	{
		return 'x';
	}	
	else if(matrix[0][2]=='x' && matrix[1][2]=='x' && matrix[2][2]=='x') 
	{
		return 'x';
	}
	else if(matrix[0][2]=='x' && matrix[1][1]=='x' && matrix[2][0]=='x') 
	{
		return 'x';
	}
	else if(matrix[1][0]=='x' && matrix[1][1]=='x' && matrix[1][2]=='x') 
	{
		return 'x';
	}
	else if(matrix[2][0]=='x' && matrix[2][1]=='x' && matrix[2][2]=='x') 
	{
		return 'x';
	}






	return '*';
}
int main()
{
	
	cout<<"====CHAO MUONG BAN DEN VOI GAME X-O==="<<endl;
	cout<<"Nguoi choi thu nhat danh x, nguoi choi thu 2 danh o "<<endl;

	
	while(true)
	{
		Draw();	
		Input();
		
		
		if (check()=='x')
		{
			cout<<"Nguoi choi thu nhat thang !"<<endl;
			break;
		}
		else if (check()=='o')
		{
			cout<<"Nguoi choi thu hai thang !"<<endl;
			break;
		}

		doiLuot();
		
	}
	

	Draw();	

return 0;
}
