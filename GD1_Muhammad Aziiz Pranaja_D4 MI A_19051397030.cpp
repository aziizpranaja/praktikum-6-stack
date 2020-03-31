#include <iostream>

using namespace std;

struct stack 
{
	int data[10];
	int top;
};

stack tumpuk;

void push(int input)
{
	tumpuk.top++;
	tumpuk.data[tumpuk.top] = input;
}

int pop()
{
	return tumpuk.data[tumpuk.top];
}

void setAwal()
{
	tumpuk.top = -1;
}

bool isEmpty()
{
	if(tumpuk.top == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool isFull()
{
	if(tumpuk.top == 9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void print()
{
	int i;
	cout<<"data : "<<endl;
	for(i = 0; i <= tumpuk.top; i++)
	{
		cout<<tumpuk.data[i]<<"  ";
	}
	cout<<endl;
}


int main()
{
	int pilih, input;
	setAwal();
	do
	{
		cout<<"1. push data"<<endl;
		cout<<"2. pop data"<<endl;
		cout<<"3. print data"<<endl;
		cout<<"4. clear data"<<endl;
		cout<<"5. exit"<<endl;
		cout<<"pilih menu : ";
		cin>>pilih;
		switch(pilih)
		{
			case 1:
				{
					if(isFull() == 1)
					{
						cout<<"tumpukan penuh"<<endl;
					}
					else
					{
						cout<<"data yang di push : ";
						cin>>input;
						push(input);
					}
					break;
				}
			case 2:
				{
					if(isEmpty() == 1)
					{
						cout<<"tumpukan kosong";
					}	
					else
					{
						cout<<"data yang di pop : "<<pop()<<endl;
					}
					break;
				}
			case 3:
				{
					if(isEmpty() == 1)
					{
						cout<<"tumpukan kosong"<<endl;
					}	
					else
					{
						print();
					}
					break;
				}
			case 4:
				{
					setAwal();
					break;
				}
		}
	}while(pilih >= 1 && pilih <= 4);
}

