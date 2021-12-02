#include<iostream>
#include<string.h>
#include<fstream>
#include<windows.h>
#include<cmath>
using namespace std;
int q,i,nd,cl;
char ns[25];
int int_to_string(string year)
{
	char y[15];int ey;
	int i,j;j=strlen(year.c_str())-1;
	for(i=0;i<strlen(year.c_str());i++,j--)
	{
		ey=(year[i]-'0')*pow(10,j)+ey;
	}
	return ey;
}
class personal_info
{
	char name[25],gen;string dob;
	int age;
    float height,weight,chest;
    public:
    	void get_data();
    	void put_data();
    	void analyse();
};
void color(int color)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void encode(char ec[25],char de[25])
{
	int i;char che,em;
	for(i=0;ec[i]!='\0';i++)
	{
		ifstream ecm("encoding.txt");
		while(ecm>>che>>em)
		{
			if(che==ec[i])
			{
			de[i]=em;break;}
		}
	}
	de[i]='\0';
}
void set()
{
	char n[25],n1[25],c[25],sc[25],dec[25],dei[25],pin[25],pinc[25],usn[25];system("cls");int a=0;
	cout<<"\n\n\t\t\t\t\tSolider please enter your name:";
	cin>>n;
	ifstream che("selected_mem.txt");
	while(che>>n1)
	{
		if(!strcmp(n1,n))
		{
			a=1;break;
		}
	}
	if(a==1)
	{
		system("cls");
		cout<<"\n\n\t\t\t\tHello!"<<n<<" please enter code of your base camp";
		cin>>c;encode(c,dec);
		cout<<"\n\n\t\t\t\tEnter your id number";
		cin>>sc;encode(sc,dei);
		system("cls");
		cout<<"\n\n\t\t\t\tEncryted code of your base camp is"<<dec;int i;
		cout<<"\n\n\t\t\t\tEncryted code of your id number is"<<dei;
		cout<<"\n\n\t\t\t\t\tEnter username:";
		cin>>usn;
		do{
		cout<<"\n\n\t\t\t\t\tEnter pin(only small letters,numbers and special chharacters):";
		cin>>pin;system("cls");
	    cout<<"\n\n\t\t\t\t\tRe-enter pin for conformation";
	    cin>>pinc;
	    if(!strcmp(pin,pinc))
	    {
	    	system("cls");
	    	cout<<"\n\n\t\t\t\t\t\t\tSUCCESSFULLY pin had set";
			cout<<"\n\n\t\t\t\t\tpress 1-to go back";
			i=0;encode(pin,pinc);
	    	ofstream dump("base_camp.txt",ios::app);
	    	dump<<dec<<" "<<dei<<" "<<pinc;dump<<endl;
//	    	cout<<"Test 1 :"<<dec<<dei<<pinc<<dump;
			dump.close();
			ofstream us("accessing.txt",ios::app);
			us<<endl<<usn<<" "<<pin;cin>>cl;
			return;
		}
		else
		{
			system("cls");
			cout<<"\n\n\t\t\t\t\tOOPS :( pin not matched";
			i=1;
		}}while(i);
	}
	
}
void access()
{
	char us1[25],pin1[25],us2[25],pin2[25],encode1[25],encode2[25],ecs[25],ha,m[10][1000],bc[25],snc[25];int a=0,c=2;
	ifstream acc("accessing.txt");
	do
	{
	system("cls");
	cout<<"\n\n\n\n\t\t\tYou will have only two attempts";
	cout<<"\n\n\n\n\t\t\tUSER NAME:";cin>>us2;c--;cout<<"\n\n\n\t\t\tNOTE:If you forgot pin enter pin as 000";
	cout<<"\n\n\n\n\t\t\t\tPIN:";cin>>pin2;
	if(!strcmp(pin2,"000"))
	{ char bc1[25],snc1[25];
		system("cls");
		cout<<"\n\n\t\t\t\t\tEnter the code of your base camp:";
		cin>>bc;
		cout<<"\n\n\t\t\t\t\tEnter your encripted code:";
		cin>>snc;ifstream bce("base_camp.txt");
		while(bce>>bc1>>snc1>>ecs)
		{
			if(!strcmp(bc1,bc)&&!strcmp(snc,snc1))
			{system("cls");
			cout<<"\n\n\t\t\tEncryted pin of solider is:"<<ecs;cout<<"\n\n\t\t\tpress 1-to goback";
			cin>>cl;return;
			}
		}
	}
	while(acc>>us1>>pin1)
	{
		if(!strcmp(us1,us2)&&!strcmp(pin1,pin2)){
			a=1;ofstream his("access_history.txt",ios::app);his<<us2;his<<"\n";break;}
	}}while(a-1&&c>0);
	   if(a==1)
	   {
	   	system("cls");
	   	cout<<"\n\n\n\n\t\t\t\t\tAccess Granted";c=2;a=0;
	   	cout<<"\n\n\t\t\t\t\t\tDo you want to download the document press y/n";
	   	cin>>ha;
	   	if(ha=='y'){
		do{system("cls");cout<<"\n\n\n\n\t\t\tYou will have only two attempts to type camp code";   
		cout<<"\n\n\t\t\t\t\tEnter the camp code";c--;
	   	cout<<" to download the document";
	   	cin>>encode1;
	   	ifstream enc("base_camp.txt");
	   	while(enc>>encode2>>pin2>>us2)
	   	{ 
	   		if(!strcmp(encode1,encode2))
	   		{
	   		a=1;break;}
		   }}while(a-1&&c>0);
		   	cout<<"\n\t\t\t\t\tdocument is downloaded";
		   	cout<<"\n\n\t\t\t\t\t@##(&(&)!*&#&**(@(*#!)(*)@$$^^&@%<?>{(&&)}(%^%$#@!&&***^$@@\n\t\t\t\t\t!&&***^$@@!@#%^&*((^%@@#))";
		   	cout<<"<>?:@@$%^&*()&%$#@%_+=-:?><!@#$%^\n\t\t\t\t\t";
		   	cout<<"<>?:@@$%^&*()&%$*%$@#@%_+=-:?><!@#$%^&*&*(%^%$#@!&&***^$@@!\n\t\t\t\t\t&***^$@@(@&*&*(%^%$#@!&!(*#!)(*)@$$^";
		    }cout<<"\n\n\t\t\t\t\tDo you whant to send any message to head quaters(y/n):";
		   	cout<<"\n\t\tpress y/n:";
		   	cin>>ha;
		   	if(ha=='n')
		   	{
		   		system("cls");
		   		cout<<"\n\n\t\t\t\t\tOk decode the document and complete the work";
		   		cout<<"\n\n\t\t\t\t\t\t\tJAI HIND";
		   		cout<<"\n\n\t\t\t\tPress 1 to go back";
		   		cin>>cl;return;
			   }
			   else
			   {
			   int i=0,j=0,k=0,z1=0;char ck,oa,m1[10][1000];
			   cout<<"\n\t\t\t\tEnter the message that is needed to encode and send to head camp";
			   cout<<"\n\t\t\t\tNOTE:1.you have to end message with 'end' in new line:  ";
			   cout<<"\n\t\t\t\tNOTE:2.while texting the message you should not provide spaces:  ";
			   cout<<"\n\n\t\t\t\tMessage:";
			   	do
			   	{
			   		cin>>m[i];i++;cout<<"\t\t\t\t\t";
				   }while(strcmp(m[i-1],"end"));i=i-2;
				for(j=0;j<=i;j++)
				{
				for(k=0;k<=strlen(m[j])-1;k++)
				{	ifstream mess("encoding.txt");
				while(mess>>ck>>oa)
				{
				if(ck==m[j][k])
				m1[j][k]=oa;
			}
		}
			   }
			   system("cls");cout<<"\n\n\n\t\t\t\tEncoded message is:";
		   for(j=0;j<=i;j++){
			   cout<<m1[j];cout<<"\n\t\t\t\t\t";}
			   cout<<"\n\n\t\t\t\t\t\tYour message had reached to head camp";
			   cout<<"\n\n\t\t\t\t\t\t\t\tJAI HIND";
			   cout<<"\n\n\t\t\t\tPress 1 to go back";cin>>cl;return;
		   }
		   }
}
void history()
{
	string s;system("cls");cout<<"\n\n\t\t\t\t\tAccess History:\n";
	ifstream ahis("access_history.txt");
	while(ahis>>s){
	cout<<"\t\t\t\t\t"<<s;cout<<"\n";}cout<<"\n\n\t\t\t\t\tpress 1-to go back";cin>>cl;return;
}
void personal_info::analyse()
{
	int i=1;
	while(i<=4){system("cls");
	color(2);Sleep(500);
	cout<<"\n\n\n\n\n\t\t\t\t\tPlease wait Analysing your data.........";i++;Sleep(900);
}
    color(7);system("cls");
	float bmi;char ha;
	bmi=weight/(height*height);
	if((bmi<=31.3&&bmi>=18)&&chest>=77)
	{
	system("cls");
   	cout<<"\n\n\n\n\n\t\t\t\t\tCONGRATULATIONS :)";
   	cout<<"\n\n\t\t\t\tYour are selected in physical test";
   	cout<<"\n\n\t\t\t\tYou will get a letter to your home address about where you are posted.After posting";
   	cout<<" please set the pin.";
   	ofstream sel("selected_mem.txt",ios::app);
//   	cout<<"Test:"<<name<<sel<<endl;
   	sel<<name;sel<<"\n";
   	sel.close();
	cout<<"\n\n\t\t\t\t\tpress 1- to go back"; 
	cin>>cl;return;
	}
	else
	{
		cout<<"\n\n\n\n\nSorry:( You are not fit for Indian army";
		cout<<"\n\n\nYour BMI is:"<<bmi<<" it does not fit in the range of 18-31.3";
		cout<<"\n\n\n\nyou can apply for indian army for more "<<30-age<<" years";
		cout<<"\n\n\n\nTry to maintain Fitness";cin>>ha;
	}
}
class family_bg
{
	char m_n[20],f_n[20],foc[25],moc[25],p_address[3][20];
	int n_siblings,f_age,m_age;
	public:
		void f_background();
		void df_background();
};
class qualifications
{
	float ssc_m,i_gpa,degree;
	char a_q[5][25];
	public:
		void get_quali();
		void put_quali();
};
class diet
{
	char d[7][10];
	public:
		void update_diet();
		void d_diet();
};
void personal_info::get_data()
{
	cout<<"Enter name of the solider:";
	cin>>name;strcpy(ns,name);
	cout<<"\n\t      Gender(M/F):";
	cin>>gen;
	cout<<"\n\t      dob(d/m/y):";
	cin>>dob;int m,x1,x2;
	m=strlen(dob.c_str());
	x1=int_to_string(dob.substr(m-4));
	string pyear=__DATE__;
	m=strlen(pyear.c_str());
	x2=int_to_string(pyear.substr(m-4));
	do{
	cout<<"\n\t\t     age:";
	cin>>age;
	if(age-(x2-x1))
	{
		color(14);
		cout<<"\n\t\tYOUR AGE IS NOT MATCHING WITH YOUR DATE OF BIRTH PLEASE ENTER AGAIN";
		color(7);
	}
	}while(age-(x2-x1));
	cout<<"\nPhysical Fitness:";
	cout<<"\nWeight(in kg):";
	cin>>weight;
	cout<<"\nHeight(in m):";
	cin>>height;
	cout<<"\nChest(in cm):";
	cin>>chest;
}
void personal_info::put_data()
{
	system("cls");
	cout<<"Personal Detail of the solider is:";
	cout<<"Name :"<<name;
	cout<<"\ngen:"<<gen;
	cout<<"\nDate of Birth:"<<dob;
	cout<<"\nPhysical Fitness:";
	cout<<"\nheight(in ft):"<<height;
	cout<<"\nWeight(in kg):"<<weight;
	cout<<"\nChest(in cm):"<<chest;
}
void qualifications::get_quali()
{
	cout<<"Enter S.S.C marks(G.P.A) of "<<ns<<":";
	cin>>ssc_m;
	cout<<"\nEnter Inter marks(G.P.A) "<<ns<<":";
	cin>>i_gpa;
	cout<<"\nEnter Degree C.G.P.A "<<ns<<":";
	cin>>degree;
	cout<<"\nHow many additional qualifications of "<<ns;
	cin>>q;
	cout<<"\n"<<ns<<"Please write your all qualifications";
	for(i=0;i<q;i++)
	cin>>a_q[i];
}
void qualifications::put_quali()
{
	cout<<"Qualifications of "<<ns;
	cout<<"10th Marks:"<<ssc_m;
	cout<<"\nInter marks:"<<i_gpa;
	cout<<"\nDegree C.G.P.A:"<<degree;
	cout<<"\n Additional Qualifications of the solider:";
	for(i=0;i<q;i++)
	{
	cout<<a_q[i];cout<<"\n";
}}
void diet::update_diet()
{
	int i;
	cout<<"Enter diet of the "<<ns;
	cout<<"\nNo.of items in diet:";
	cin>>nd;
	for(i=0;i<nd;i++)
	cin>>d[i];
}
void diet::d_diet()
{
	int i;
	cout<<"Diet of the "<<ns;
	cout<<"\n";
	for(i=0;i<nd;i++)
	{
	cout<<d[i];cout<<"\n";
}}
void family_bg::f_background()
{
	int j;
	cout<<"Family Back ground of the solider:";
	cout<<"\nEnter Father name:";
	cin>>f_n;
	cout<<"\nEnter father Age:";
	cin>>f_age;
	cout<<"\nEnter occupation of the Father:";
	cin>>foc;
	cout<<"\nEnter Mother Name:";
	cin>>m_n;
	cout<<"\nEnter Mother Age";
	cin>>m_age;
	cout<<"\nEnter Mother occupation:";
	cin>>moc;
	cout<<"\nNumber of Siblings For solider:";
	cin>>n_siblings;
	cout<<"\nEnter permanent address:";
	for(j=0;j<3;j++)
	cin>>p_address[j];
}
void family_bg::df_background()
{
	int j;
	cout<<"Family Background of the solider:";
	cout<<"\nFather details:";
	cout<<"\n\tFather name:"<<f_n;
	cout<<"\n\t Father age:"<<f_age;
	cout<<"\n  Father occupation:"<<foc;
	cout<<"=========================================================================================";
	cout<<"\nMother Details:";
	cout<<"\n\tMother name:"<<m_n;
	cout<<"\n\t Mother age:"<<m_age;
	cout<<"\n  Mother occupation:"<<moc;
	cout<<"\n\nPermanent Address of the solider:";
	cout<<"\n\t\t\t";
	for(j=0;j<3;j++)
	{
	cout<<p_address[j];cout<<"\n";
}}
main()
{
	int ch,c;char du;
	class personal_info pi;
	class qualifications qi;
	class family_bg fb;
	class diet sd;do{system("cls");
	color(10);
	cout<<"\t\t\t\t\t\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";color(7);
	cout<<"\n\t\t\t Enter:";color(12);
	cout<<"\n\t\t\t\t1.For Registration\n\t\t\t\t2.To set pin and to fill personal details";
	cout<<"\n\t\t\t\t3.To access into website(if you are old solider)";
	cout<<"\n\t\t\t\t4.To see the access history\n\t\t\t\t5.To exist\n\n\t\t\t";color(7);cout<<"Enter the choice";
	cin>>c;
	
	switch(c){
	case 1:system("cls");pi.get_data();pi.analyse();break;
//	case 1:	do{system("cls");color(10);
//	        cout<<"\t\t\t\t\t\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";color(7);cout<<"\n\t\t\tEnter:";
//	        color(12);
//	        cout<<"\n\t\t\t\t1.To enter Solider details\n\t\t\t\t2.To enter solider";
//	        cout<<"qualifications\n\t\t\t\t3.To enter Family background";
//	        cout<<"\n\t\t\t\t4.To enter diet\n\t\t\t\t5.To exit the registration block\n\n\t\t\t";color(7);cout<<"Enter The choice";
//            cin>>ch;
//	        switch(ch)
//        	 {
//	          case 1:system("cls");pi.get_data();pi.analyse();break;
//	          case 2:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
//	                 qi.get_quali();break;
//              case 3:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";fb.f_background();break;
//              case 4:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
//                     sd.update_diet();break;
//              case 5:system("cls");cout<<"\n\t\t\tThanks For Registration\n\t\t\t-Govt of India";cl=1;cin>>du;break;
//			}}while(cl-1);break;
    case 2:set();system("cls");break;
	case 3:access();system("cls");break;
    case 4:history();system("cls");break;
    case 5:system("cls");cout<<"\n\t\t\t\tThanks for visiting";cin>>du;
}
}
while(cl);
}
