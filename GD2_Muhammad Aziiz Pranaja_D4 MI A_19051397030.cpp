#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main(void) 
{
	char str[100];
	int l;
	int i;
	
	cout<<"masukkan kalimat : ";
	cin>>str;
	
	l=strlen(str);
	cout<<"kata terbalik : ";
	
	for (i=l; i>=1; i--)
	{
		char stack= str[i-1];
		cout<<stack;
	}
	getch();
}
