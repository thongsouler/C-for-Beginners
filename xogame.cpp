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
			cout<<matrix[i][j]<<"    ";
		}
		cout<<endl;
		cout<<endl;
	}
}

void Input() //Dung de cho nguoi choi nhap vao vi tri choi
{
	
	if (hinh=='x') 
	{
		cout<<"Den luot nguoi choi x"<<endl;

	}
	if (hinh=='o') 
	{
		cout<<"Den luot nguoi choi o"<<endl;
	}	
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
	if (hinh=='x') 
	{		
		hinh='o';
	}
	else 
	{
		hinh='x';
	}
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


	//nguoi choi o thang
	if(matrix[0][0]=='o' && matrix[0][1]=='o' && matrix[0][2]=='o') 
	{
		return 'o';
	}
	else if(matrix[0][0]=='o' && matrix[1][0]=='o' && matrix[2][0]=='o') 
	{
		return 'o';
	}
	else if(matrix[0][0]=='o' && matrix[1][1]=='o' && matrix[2][2]=='o') 
	{
		return 'o';
	}
	else if(matrix[0][1]=='o' && matrix[1][1]=='o' && matrix[2][1]=='o') 
	{
		return 'o';
	}	
	else if(matrix[0][2]=='o' && matrix[1][2]=='o' && matrix[2][2]=='o') 
	{
		return 'o';
	}
	else if(matrix[0][2]=='o' && matrix[1][1]=='o' && matrix[2][0]=='o') 
	{
		return 'o';
	}
	else if(matrix[1][0]=='o' && matrix[1][1]=='o' && matrix[1][2]=='o') 
	{
		return '0';
	}
	else if(matrix[2][0]=='o' && matrix[2][1]=='o' && matrix[2][2]=='o') 
	{
		return 'o';
	}



	return '*';
}
int main()
{
	
	cout<<"====CHAO MUNG BAN DEN VOI GAME X-O==="<<endl;
	cout<<"Nguoi choi thu nhat danh x, nguoi choi thu 2 danh o "<<endl;
	cout<<"==================================================="<<endl;

	
	for (int i=0;i<9;i++)
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
		
		if (i==8) cout<<"2 Nguoi Hoa nhau"<<endl;
	}
	

	Draw();	

return 0;
}
