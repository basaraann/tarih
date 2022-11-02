#include<iostream>

using namespace std;

int main()
{
		int tarihGun1,tarihGun2,tarihAy1,tarihAy2,tarihYil1,tarihYil2;
		int farkYil,farkAy,farkGun;
		cout<<"birinci tarihi giriniz"<<endl;
		cin>>tarihGun1>>tarihAy1>>tarihYil1;
		cout<<"ikinci tarihi giriniz"<<endl;
		cin>>tarihGun2>>tarihAy2>>tarihYil2;
		
		if(tarihYil2>=tarihYil1 && tarihAy2>=tarihAy1 && tarihGun2>=tarihGun1)
		{
			farkYil=tarihYil2-tarihYil1;
			farkAy=tarihAy2-tarihAy1;
			farkGun=tarihGun2-tarihGun1;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1>=tarihYil2 && tarihAy1>=tarihAy2 && tarihGun1>=tarihGun2)
		{
			farkYil=tarihYil1-tarihYil2;
			farkAy=tarihAy1-tarihAy2;
			farkGun=tarihGun1-tarihGun2;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1>=tarihYil2 && tarihAy1<tarihAy2 && tarihGun1>=tarihGun2)
		{
			farkYil=tarihYil1-tarihYil2-1;
			farkAy=tarihAy1-tarihAy2+12;
			farkGun=tarihGun1-tarihGun2;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1>=tarihYil2 && tarihAy1<=tarihAy2 && tarihGun1>=tarihGun2)
		{
			farkYil=tarihYil1-tarihYil2-1;
			farkAy=tarihAy1-tarihAy2+12;
			farkGun=tarihGun1-tarihGun2;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1>=tarihYil2 && tarihAy1<=tarihAy2 && tarihGun1<=tarihGun2)
		{
			farkYil=tarihYil1-tarihYil2-1;
			farkAy=tarihAy1-tarihAy2+12-1;
			farkGun=tarihGun1-tarihGun2+30;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil2>=tarihYil1 && tarihAy2>=tarihAy1 && tarihGun2>=tarihGun1)
		{
			farkYil=tarihYil2-tarihYil1;
			farkAy=tarihAy2-tarihAy1;
			farkGun=tarihGun2-tarihGun1;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1>=tarihYil2 && tarihAy1>=tarihAy2 && tarihGun2>=tarihGun1)
		{
			farkYil=tarihYil1-tarihYil2;
			farkAy=tarihAy1-tarihAy2-1;
			farkGun=tarihGun1-tarihGun2+30;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1<=tarihYil2 && tarihAy1>=tarihAy2 && tarihGun1>=tarihGun2)
		{
			farkYil=tarihYil2-tarihYil1-1;
			farkAy=tarihAy2-tarihAy1+12-1;
			farkGun=tarihGun2-tarihGun1+30;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1<=tarihYil2 && tarihAy1>=tarihAy2 && tarihGun1<=tarihGun2)
		{
			farkYil=tarihYil2-tarihYil1-1;
			farkAy=tarihAy2-tarihAy1+12;
			farkGun=tarihGun2-tarihGun1;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		else if(tarihYil1<=tarihYil2 && tarihAy1<=tarihAy2 && tarihGun1>=tarihGun2)
		{
			farkYil=tarihYil2-tarihYil1;
			farkAy=tarihAy2-tarihAy1-1;
			farkGun=tarihGun2-tarihGun1+30;
			cout<<farkGun<<" gun "<<farkAy<<" ay "<<farkYil<<" yil "<<endl;
		}
		
		
		
}
