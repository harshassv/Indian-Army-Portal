#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	char m[10][100],m1[50][100],ck,oa,c1,o1;int i=0,j,k;
	cout<<"\n\n\t\t\t\t\t\tEnter the encoded message with typing end in new line";
	cout<<"\n\n\t\t\t\tMessage:";
			   	do
			   	{
			   		cin>>m[i];i++;cout<<"\t\t\t\t\t";
				   }while(strcmp(m[i-1],"end"));i=i-2;
				cout<<"test123"<<"   "<<"i="<<i;
				for(j=0;j<=i;j++){
					cout<<"\n";
					cout<<m[j];cout<<"\n\t\t\t\t\t";
					}
				for(j=0;j<=i;j++)
				{
//					cout<<"leng of thew rnd vfdhjes:"<<strlen(m[j])-1<<endl;
				for(k=0;k<=strlen(m[j])-1;k++)
				{	ifstream mess("encoding.txt");
				while(!mess.eof())
				while(mess>>ck>>oa)
				{
//				cout<<"hi"<<endl;
//				mess>>oa;
//				cout<<oa<<endl;
//				cout<<"OA"<<oa<<endl;
				if(oa==m[j][k])
				{
//					cout<<"test n"<<ck;
					m1[j][k]=ck;
				}
			}
		}
}
cout<<"\n\t\t\t\t\t";
for(j=0;j<=i;j++)
{
	cout<<m1[i];cout<<"\n\t\t\t\t\t";
}
}
