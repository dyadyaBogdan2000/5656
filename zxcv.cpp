// zxcv.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "zxcv.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
 
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"Russian");
	Kvadrat k(2);
	Prizma p(4,2);
	int menu;
    do
    {
        system("cls");
        cout<<"1. �������� ��������"<<endl;
		cout<<"2. ��������� ��������"<<endl;
        cout<<"3. ������� ��������"<<endl;
		cout<<"__________________________________"<<endl;
        cout<<"4. ��������� ������"<<endl;
		cout<<"5. ������� ������"<<endl;
		cout<<"6. ����� ������"<<endl;
		cout<<"7. ����������� ������� ��������"<<endl;
		cout<<"8.��������� ���� ������� "<<endl;
        cout<<"�������� ���� ";
        cin>>menu;
        switch (menu) 
        {
case 1:
			{
		  cout<<"perimetr:"<<k.getPerimeter();
	      getch();
		  break;
			}
case 2:
			{
		  cout<<"diagonal:"<<k.getDiagonal();
		  getch();
		  break;
		}
case 3:
			{
		  cout<<"ploshad:"<<k.getArea();
		  getch();
		  break;
		}
case 4:
			{
		  cout<<"diagonal:"<<p.getdiagonal();
	      getch();
		  break;
			}
case 5:
			{
		cout<<"ploshad:"<<p.getPlozhad();
	    getch();
        break;
		}
case 6:
			{
		  cout<<"obem:"<<p.getf_obem();
		  getch();
		  break;
		}
case 7:
	{ 
	int n; 
	cout<<"������� ���-�� ���������:";
	cin>>n;
	int *a = new int [ n ]; 
	int i;
	cout << " ������� ������� ������� ��������:" << endl;
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    for ( int i = 0; i < n; i++ ) cout << a[i]*a[i] << " ";
	int max = a[0];
	 for (int i = 0; i < n; ++i) {
        if (a[i]*a[i] > max) {
            max = a[i]*a[i];
        }
    }
	  cout <<"������� ������������� ��������:"<<max << endl;
	getch();
    return 0;
	}
case 8:
	{
k.setd();  //�������� ����� �������� ����������
getch();
     }
		}
  }while (menu);
}
  
