#include<iostream>
#include"prod.h"
#include"sum.h"
#include"dif.h"
using namespace std;

int main()
{
	cout<<"Hello git"<<endl;
	int a, b;
	cout<<"Enter two numbers->";
	cin>>a>>b;
	int res = Sum(a,b);
	cout<<"Res = "<< res<<endl;
	res = Dif(a,b);
	cout<<"Res = "<< res<<endl;
}