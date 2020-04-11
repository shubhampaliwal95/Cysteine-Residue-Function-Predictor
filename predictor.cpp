/*Author : Shubham Paliwal
2015B1A70823H*/
#include "bits/stdc++.h"
using namespace std;

double x,y;
void predict95DISU()
{	
	if((x==1.0)&&(y>=-.25&&y<0.45))
		cout<<"YES		";
	else if((x>=0.95&&x<1)&&(y>=-.2&&y<0.50))
		cout<<"YES		";
	else if((x>=0.90&&x<0.95)&&(y>=-0.1&&y<0.45))
		cout<<"YES		";
	else if((x>=0.85&&x<0.90)&&(y>=0.0&&y<0.45))
		cout<<"YES		";
	else if((x>=0.80&&x<0.85)&&(y>=0.15&&y<0.40))
		cout<<"YES		";
	else if((x>=0.75&&x<0.80)&&(y>=0.15&&y<0.50))
		cout<<"YES		";
	else if((x>=0.70&&x<0.75)&&(y>=0.2&&y<0.45))
		cout<<"YES		";
	else if((x>=0.65&&x<0.70)&&(y>=0.35&&y<0.50))
		cout<<"YES		";
	else if((x>=0.60&&x<0.65)&&(y>=0.35&&y<0.50))
		cout<<"YES		";
	else
		cout<<"NO		";


}
void predict67DISU()
{	
	if((x==1.0)&&(y>=-0.1&&y<0.20))
		cout<<"YES		";
	else if((x>=0.95&&x<1)&&(y>=-.1&&y<0.35))
		cout<<"YES		"; 
	else if((x>=0.85&&x<0.90)&&(y>=0.15&&y<0.25))
		cout<<"YES		";
	else
		cout<<"NO		";


}
void predict95MB()
{
	
	if((x==1.0)&&(y>=-.25&&y<0.35))
		cout<<"YES		";
	else if((x>=0.95&&x<1)&&(y>=-.2&&y<0.50))
		cout<<"YES		";
	else if((x>=0.90&&x<0.95)&&(y>=-0.1&&y<0.4))
		cout<<"YES		";
	else if((x>=0.85&&x<0.90)&&(y>=-0.05&&y<0.45))
		cout<<"YES		";
	else if((x>=0.80&&x<0.85)&&(y>=0.1&&y<0.45))
		cout<<"YES		";
	else if((x>=0.75&&x<0.80)&&(y>=0.1&&y<0.50))
		cout<<"YES		";
	else if((x>=0.70&&x<0.75)&&(y>=0.2&&y<0.5))
		cout<<"YES		";
	else if((x>=0.65&&x<0.70)&&(y>=0.25&&y<0.50))
		cout<<"YES		";
	else if((x>=0.60&&x<0.65)&&(y>=0.30&&y<0.50))
		cout<<"YES		";
	else if((x>=0.55&&x<0.60)&&(y>=0.30&&y<0.55))
		cout<<"YES		";
	else
		cout<<"NO		";

}
void predict67MB()
{
	
	if((x==1.0)&&(y>=-0.1&&y<0.25))
		cout<<"YES		";
	else if((x>=0.95&&x<1)&&(y>=-.1&&y<0.30))
		cout<<"YES		";
	else if((x>=0.90&&x<0.95)&&(y>=0.05&&y<0.25))
		cout<<"YES		";
	else if((x>=0.85&&x<0.90)&&(y>=0.15&&y<0.20))
		cout<<"YES		";
	else
		cout<<"NO		";

}
void predict95thioether()
{
		if((x==1.0)&&(y>=-.3&&y<0.40))
		cout<<"YES			";
	else if((x>=0.95&&x<1)&&(y>=-.2&&y<0.50))
		cout<<"YES			";
	else if((x>=0.90&&x<0.95)&&(y>=-0.05&&y<0.45))
		cout<<"YES			";
	else if((x>=0.85&&x<0.90)&&(y>=0.05&&y<0.4))
		cout<<"YES			";
	else if((x>=0.80&&x<0.85)&&(y>=0.1&&y<0.45))
		cout<<"YES			";
	else if((x>=0.75&&x<0.80)&&(y>=0.15&&y<0.5))
		cout<<"YES			";
	else if((x>=0.70&&x<0.75)&&(y>=0.25&&y<0.55))
		cout<<"YES			";
	else if((x>=0.65&&x<0.70)&&(y>=0.30&&y<0.55))
		cout<<"YES			";
	else if((x>=0.60&&x<0.65)&&(y>=0.40&&y<0.55))
		cout<<"YES			";
	else if((x>=0.55&&x<0.60)&&(y>=0.45&&y<0.55))
		cout<<"YES			";
	else
		cout<<"NO			";
}
void predict67thioether()
{
	if((x==1.0)&&(y>=-0.15&&y<0.25))
		cout<<"YES		";
	else if((x>=0.95&&x<1)&&(y>=-.1&&y<0.35))
		cout<<"YES		";
	else if((x>=0.90&&x<0.95)&&(y>=0.1&&y<0.2))
		cout<<"YES		";
	else
		cout<<"NO		";
}
void predict95Sulphenylation()
{
	if((x==1.0)&&(y>=-.25&&y<0.40))
		cout<<"YES"<<endl;
	else if((x>=0.95&&x<1)&&(y>=-.2&&y<0.50))
		cout<<"YES"<<endl;
	else if((x>=0.90&&x<0.95)&&(y>=-0.05&&y<0.45))
		cout<<"YES"<<endl;
	else if((x>=0.85&&x<0.90)&&(y>=0.05&&y<0.40))
		cout<<"YES"<<endl;
	else if((x>=0.80&&x<0.85)&&(y>=0.1&&y<0.45))
		cout<<"YES"<<endl;
	else if((x>=0.75&&x<0.80)&&(y>=0.15&&y<0.40))
		cout<<"YES"<<endl;
	else if((x>=0.70&&x<0.75)&&(y>=0.2&&y<0.55))
		cout<<"YES"<<endl;
	else if((x>=0.65&&x<0.70)&&(y>=0.3&&y<0.55))
		cout<<"YES"<<endl;
	else if((x>=0.60&&x<0.65)&&(y>=0.40&&y<0.50))
		cout<<"YES"<<endl;
	else if((x>=0.55&&x<0.60)&&(y>=0.45&&y<0.55))
		cout<<"YES"<<endl;
	else if((x>=0.45&&x<0.60)&&(y>=0.45&&y<=0.60))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
}
void predict67Sulphenylation()
{
	if((x==1.0)&&(y>=-0.1&&y<0.20))
		cout<<"YES"<<endl;
	else if((x>=0.95&&x<1)&&(y>=-.1&&y<0.35))
		cout<<"YES"<<endl;
	else if((x>=0.90&&x<0.95)&&(y>=0.10&&y<0.15))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}
int main()
{	int n;
	cout<<"Enter the cutoff you want to use"<<endl;
	cout<<"Press 1 for 95%"<<endl;
	cout<<"Press 2 for 67%"<<endl;
	int option;
	cin>>option;
	freopen("Input.txt","r",stdin);
	cin>>n;
	freopen("Results","w",stdout);
	
	cout<<"pdbid"<<"	"<<"chain"<<"	"<<"resid"<<"		"<<"DISU"<<"	 "<<"MB"<<"		"<<"Thiother"<<"	"<<"Sulphenylation"<<endl;
	if(option==1)
	{	while(n--)
		{	{	string pdbid,chain,resid;
				cin>>pdbid>>chain>>resid;
				cout<<pdbid<<"	"<<chain<<"		"<<resid<<"			";
				
				cin>>x>>y;
				predict95DISU();
				predict95MB();
				predict95thioether();
				predict95Sulphenylation();
			
			}
		}
	}
	else if(option==2)
	{
		while(n--)
		{	{	string pdbid,chain,resid;
				cin>>pdbid>>chain>>resid;
				cout<<pdbid<<"	"<<chain<<"	"<<resid<<"	";
				
				cin>>x>>y;
				predict67DISU();
				predict67MB();
				predict67thioether();
				predict67Sulphenylation();
			
			}
		}
	}
	else
	{
		cout<<"Wrong option selected"<<endl;
	}
	//cout<<"Open Results file for output"<<endl;
	return 0;

	
}
