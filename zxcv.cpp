// zxcv.cpp: определ€ет точку входа дл€ консольного приложени€.
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
        cout<<"1. периметр квадрата"<<endl;
		cout<<"2. диагональ квадрата"<<endl;
        cout<<"3. площадь квадрата"<<endl;
		cout<<"__________________________________"<<endl;
        cout<<"4. диагональ призмы"<<endl;
		cout<<"5. площадь призмы"<<endl;
		cout<<"6. обЏем призмы"<<endl;
		cout<<"7. макимальна€ площадь квадрата"<<endl;
		cout<<"8.нј—“ќяўјя ћј — ѕЋќўјƒ№ "<<endl;
        cout<<"¬ыберите меню ";
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
	cout<<"¬ведите кол-во квадратов:";
	cin>>n;
	int *a = new int [ n ]; 
	int i;
	cout << " ¬ведите сторону каждого квадрата:" << endl;
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    for ( int i = 0; i < n; i++ ) cout << a[i]*a[i] << " ";
	int max = a[0];
	 for (int i = 0; i < n; ++i) {
        if (a[i]*a[i] > max) {
            max = a[i]*a[i];
        }
    }
	  cout <<"ѕлощадь максимального квадрата:"<<max << endl;
	getch();
    return 0;
	}
case 8:
	{
k.setd();  //присвоим новые значени€ переменным
getch();
     }
		}
  }while (menu);
}
  
