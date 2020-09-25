// ALL THE INFORMATION MENTIONED BELOW OR CRETERIA USED TO DESCRIBE A SMART CITY IS ALL BASED ON INTERNET SEARCH //
#include<iostream>
#include<conio.h>
using namespace std;
class smartcity
{
    public :
    	float i,p,c,l; 
		int e,r,h,bank,rev,ele,air;
		char name[15];
		
		void input()
		{
		cout<<"enter the name of the state in which your city is : ";
		cin>>name;
		
		cout<<"enter the name of the city to know wether it comes under the criteria of smart city or not : ";
		cin>>name;
		
	
		cout<<"\n enter the average annual income per head in "<<name<<" : ";
		cin>>e;
		cout<<"\n enter the percentage of internet users in "<<name<<" : ";
		cin>>i;
		cout<<"\n enter the literacy-rate of in "<<name<<" : ";
		cin>>l;
		cout<<"\n enter the crime-index of  "<<name<<" : ";
		cin>>c;
		cout<<"\n enter the pollution-index in pm(particulate matter) of"<<name<<" : ";
		cin>>p;
		cout<<"\n average Number of hours electricity provided per day in"<<name<<" : ";
		cin>>ele;
		cout<<"\n enter the number of hospitals(govt.+private) in "<<name<<" : ";
		cin>>h;
		cout<<"\n enter the total number of banks in "<<name<< " : ";
		cin>>bank;	
		
		cout<<"\n total collection of internally generated revenue(in Rs)(e.g.taxes,fees,charges) from "<<name<<" : ";
		cin>>rev;
		cout<<"\n number of airports in "<<name<<" : ";
		cin>>air;
		}
		void output()
		{

			if(l>=70.0 && c<=30.0 && p<=100 && e>=400000 && i>=75.0 && air>=1 && rev>=10000000 && bank>=10 && h>=10 && ele>=20 )
			{
				cout<<" yess..ur city passed all the criteria for smart city \n";
			}
			else
			{
				cout<<"\n..no ur city can\'t be smart city";
				cout<<"\n do you want to know the reason. \n 0. NO. \n 1. YES.";
				cin>>r;
				if(r==0)
				{

					cout<<"  better luck next time.";
				}
				else
				{
					if(l<70)
					{
						cout<<"\nthis city\'s lateracy is "<<l<<" ..but it must be greater than 70%";
					}
					if(e<400000)
					{
						cout<<"\nthis city\'s annual income per head is "<<e<<" ..but it must be greater than 400000(INR)";

					}
					if(c>30)
					{
						cout<<"\nthis city\'s crime index is "<<c<<" ..but it must be smaller than 30%";

					}
					if(i<75)
					{
						cout<<"\nthis city\'s percentage of internet users is "<<i<<" ..but it must be greater than 75%";
					}

					if(p<70)
					{
						cout<<"\n this city\'s pollution index is "<<l<<"(in PM) ..but it must be greater than 100pm";
				
					}
					if(air==0)
					{
					  cout<<"\n this city doesn't have any airport. City must have atleast 1 Airport " ;                           	
					}
					if(rev<10000000)
					{
						cout<<"\n this city's revenue is less, it must be greater than 10 crore ";
					}
					if(h<10)
					{
						cout<<"\n the number of hospitals in city is less. it must atleast be 10";
					}
					if(ele<20)
					{
						cout<<"\n electricity providing average hours are less. it must greater than 20 hrs.";
					}
						if(bank<10)
					{
						cout<<"\n the number of banks in city is less. it must atleast be 10";
					}
				}
			
			}
		
		}
};

int main()
 
{
	smartcity a;
	a.input();
	a.output();
	return 0;
}
