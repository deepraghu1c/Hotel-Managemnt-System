// hotel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Room.h"
#include "Customer.h"
using namespace std;

void login();
void admin_menu();
void user_menu();
int main()
{
	login();
	_getch();
	return 0;
}
void login()
{
	string id;
	string pass;
	cout<<"HOTEL MANAGEMENT SYSTEM\nPlease Log-In to Continue.\nUser Name : ";
	cin>>id;
	cout<<"Password : ";
	cin>>pass;
	if(id=="2")
	{
		if(pass=="2")
		{
			cout<<"Welcome Admin";
			user_menu();
		}
	}
	else
	{
		cout<<"Invalid Log-In\n";
		login();
	}
}
void admin_menu()
{
	int in;
	cout<<"\n1. Manage Customers\n2. Manage Rooms\nEnter Your Choice : ";
	cin>>in;
	if(in==1)
	{
		cout<<"1. Register Customer\n2. Add Information of Customers\n3. Search Information of Customers\n4. Edit  Information of Customers\n5. Delete Record of any Customer\nEnter Your Choice : ";
		cin>>in;
		if(in==1)
		{
			cout<<"Enter Customer's Name : ";
			cout<<"Enter Customer's Address : ";
			cout<<"Enter Customer's ID Proof : ";
			cout<<"Enter Customer's Occupation : ";
			cout<<"Enter Customer's Age";
			cout<<"Enter Customer's Check In-Date";
			cout<<"Enter Customer's Check Out-Date";
		}
		else if(in==2)
		{

		}
		else if(in==3)
		{

		}
		else if(in==4)
		{

		}
		else if(in==5)
		{

		}
	}
}
void user_menu()
{
	const int M=80;
	char line[M];
	string rn;
	int in;
	cout<<"\n1. View Room Details \n2. Reserve Room\nEnter Your Choice : ";
	cin>>in;
	if(in==1)
	{
		bool b=false;
		string orn, rtype, rav;
		cout<<"Enter the room no. : ";
		cin>>rn;
		ifstream fi;
		fi.open("room.txt");
		int cnt=0;
		while(fi)
		{
		fi.getline(line,M,'\t');
		string x=(string)line;
		//int a = x.find('\t');
		try
		{
			if(x==rn && cnt==0)
			{
				b=true;
				orn=rn;
				cnt++;
			}
			if(cnt==1)
			{
				rtype=x;
				cnt++;
			}
			if(cnt==2)
			{
				rav=x;
				cnt=16;
			}
		}
		catch(exception ex)
		{
		}
		}
		if(cnt==16)
		{
			cout<<"Room No. : "<<orn<<" Room Type : "<<rtype<<" Avalability : "<<rav;
		}
		else;
			cout<<"fsfs";
		_getch();
	}
	else if(in==2)
	{
		bool b = false;
		cout<<"Enter the room no. : ";
		cin>>rn;
		ifstream fi;
		fi.open("room.txt");
		while(fi)
		{
		fi.getline(line,M,'\t');
		string x=(string)line;
		//int a = x.find('\t');
		try
		{
			if(x==rn)
			{
				b=true;
			}
			if(x=="n")
			{
				b=false;
			}
			else if(x=="y")
			{
				if(b==true)
				{
					ofstream of;
					of.open("room.txt");
					//of.write(,3);
				cout<<"booked";
				}
			}
		}
		catch(exception ex)
		{

		}
		}
	}
}
