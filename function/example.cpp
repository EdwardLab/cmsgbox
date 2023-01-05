#include<iostream>
#include "msgbox.cpp"
using namespace std;
int main()
{
	for(int i=0;i<=10;i++)
	{
		msgbox("Hi", 0, "Welcome");
		msgbox("Windows has encountered a problem and is destroying it", 48, "Microsoft Windows");
		msgbox("System Error", 16, "Microsoft Windows");
	}

}
