#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int ch,i,op1,op2,op3,op4,ans,rn,answer,c=0,sem,sem1,rn1,c1;
	string a,b,q,n,br,br1,n1;
	ofstream f;
	cout<<"Enter 1 for teacher and 2 for studend";
	cin>>ch;
	if(ch==1)
	{
		cout<<"Enter teachers id";
		cin>>a>>b;
		if(a=="Seed"&&b=="It")
		{
			cout<<"Press 1 for question\n2 for fail students\n3 for pass students";
			cin>>ch;
			if(ch==1)
			{
				f.open("Project1.txt");
				for(i=1;i<=10;i++)
				{
					cout<<"Enter question no. "<<i<<"Option 1,Option 2,Option 3,Option 4 and answer";
					cin>>q>>op1>>op2>>op3>>op4>>ans;
					f<<q<<"\t"<<op1<<"\t"<<op2<<"\t"<<op3<<"\t"<<op4<<"\t"<<ans<<"\n";
				}
				f.close();
			}
			else if(ch==2)
			{
				ifstream fi;
				fi.open("project1result.txt");
				cout<<"Fail student:--"<<"\n";
				while(1)
				{
					fi>>n>>rn>>br>>sem>>c;
					if(fi.eof())
					{
						break;
						
					}
					if(c<4)
					{
						cout<<n<<rn;
					}
				}
				fi.close();
				
			}
			else if(ch==3)
			{
				ifstream fi;
				fi.open("project1result.txt");
				cout<<"Pass student:--"<<"\n";
				while(1)
				{
					fi>>n>>rn>>br>>sem>>c;
					if(fi.eof())
					{
						break;
						
					}
					if(c>4)
					{
						cout<<n<<rn;
					}
				}
				fi.close();
			}
			else
			{
				cout<<"Invalid no.";
			}
			
		}
		else
		{
			cout<<"Invalid teachers id";
		}
	}
	else
	{
		cout<<"Enter student name,roll no.,branch,semester";
		cin>>n>>rn>>br>>sem;
		ifstream f;
		f.open("Project1result.txt");
		while(1)
		{
			f>>n1>>rn1>>br1>>sem1>>c1;
			if(rn1==rn)
			{
				cout<<"Score:"<<c1;
	            return 0;
				
			}
			if(f.eof())
			{
				break;
			}
			
		}
		f.close();
	
		ifstream fi;
		fi.open("Project1.txt");
		
		for(i=1;i<=10;i++)
		{
			
			fi>>q>>op1>>op2>>op3>>op4>>ans;
			cout<<i<<"."<<q<<"\n";
			cout<<"1)"<<op1<<"\n";
			cout<<"2)"<<op2<<"\n";
			cout<<"3)"<<op3<<"\n";
			cout<<"4)"<<op4<<"\n";
			cout<<"Enter correct option";
			cin>>answer;
			if(ans==answer)
			{
				c=c+1;
				cout<<"Correct answer"<<"\n";
			}
			else
			{
				cout<<"Wrong answer"<<"\n";
				cout<<"Answer is:"<<ans<<"\n";
			}
			
		}
		
		cout<<"Total score:"<<c;
		
		fi.close();
		ofstream fo;
		fo.open("Project1result.txt",ios::app);
		fo<<n<<"\t"<<rn<<"\t"<<br<<"\t"<<sem<<"\t"<<c<<"\n";
		fo.close();
	}
}
