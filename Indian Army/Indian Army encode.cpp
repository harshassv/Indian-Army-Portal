#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void encode(char ec[25],char de[25])
{	//cout<<ec;
	int i;char che,em,c;
	for(i=0;ec[i]==32||ec[i]!='\0';i++)
	{
		ifstream ecm("encoding.txt");
		while(ecm>>che>>em)
		{
			if(ec[i]==32)
			de[i]='x';
			if(che==ec[i])
			{
			de[i]=em;break;
		}
		}
	}
	de[i]='\0';
}
main()
{
	char ec[25],de[25];
	string lol="";
	cout<<"Enter message to get encoded";
	gets(ec);cout<<"\n"<<ec<<endl;
	encode(ec,de);
	cout<<"\n encoded message is :";
	cout<<de;
}
