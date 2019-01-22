#include <iostream>
using namespace std;


#include <string>



void Input(int a[],int n )//Nhap gia tri phan tu cua mang
{
	
	for (int i=0;i<n;i++)
	{
		cout<<"MOi ban nhap a["<<i<<"]"<<endl;		
		cin>>a[i];
	}	
}
int findMax(int a[],int n)//Tim max cua mang
{
	int max=a[0];
	for (int i=1;i<n;i++)
	{
		if (a[i]>max) max=a[i];
	}
	return max;
}
void thaydoi(int a[],int n,int index, int so) //thay doi phan tu cua mang
{
	a[index]=so;

}
void xuatRa(int a[],int n) //Xuat mang
{
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
// Bai tap ve nha 
/*int convertStringToInt(string str)
{
	int dodai=str.length();
	int num1 = 0;
 	//12345=4*10^0
	for(int i = dodai - 1; i >= 0; --i)
	{
	       
	 }
	    
	return xxx;
}
*/
int main()
{
	int a[1000];
	int n;
	cout<<"Moi ban nhap so phan tu cua mang ";
	cin>>n;
	Input(a,n);
	cout<<"Gia tri lon nhat cua mang la: "<<findMax(a,n)<<endl;
	int index,so;
	cout<<"Nhap vi tri a[] can thay doi ";
	cin>>index;
	cout<<"Nhap so thay doi ";
	cin>>so;
	thaydoi(a,n,index,so);
	xuatRa(a,n);
	cout<<endl;
	cout<<"Chuyen doi String sang Int"<<endl;
	
	

	return 0;
}
