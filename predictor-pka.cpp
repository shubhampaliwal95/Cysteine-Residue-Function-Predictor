/*Author : Shubham Paliwal
2015B1A70823H*/
#include "bits/stdc++.h"
using namespace std;

double x,y;
void predict95DISU()
{	
	if((x>=14.0&&x<14.5)&&(y>=-0.100000001&&y<0.400000006))
		cout<<"YES	";
	else if((x>=13.5&&x<14)&&(y>=-0.150000006&&y<0.300000012))
		cout<<"YES		";
	else if((x>=13.0&&x<13.5)&&(y>=-0.200000003&&y<0.550000012))
		cout<<"YES	";
	else if((x>=12.5&&x<13)&&(y>=-0.250000000&&y<0.400000006))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.150000006 &&y<0.449999988))
		cout<<"YES	";
	else if((x>=11.5&&x<12)&&(y>=-0.150000006 &&y<0.449999988))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=-0.100000001 &&y<0.449999988 ))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=-0.100000001&&y<0.550000012 ))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=-0.05000007&&y<0.600000024))
		cout<<"YES	";
	else if((x>=9.5&&x<10)&&(y>=-0.05000007&&y<0.649999976))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y>=0&&y<0.949999988 ))
		cout<<"YES	";
	else if((x>=8.5&&x<9)&&(y>=-0.05000007&&y<0.649999976))
		cout<<"YES	";
	else if((x>=8&&x<8.5)&&(y>=0&&y<0.349999994))
		cout<<"YES	";
	else if((x>=7.5&&x<8)&&(y>=0.100000001&&y<0.349999994))
		cout<<"YES	";
	else if((x>=7&&x<7.5)&&(y==0.250000000))
		cout<<"YES	";
	else if((x>=6.5&&x<7)&&(y==0.250000000))
		cout<<"YES	";
	else if((x>=6&&x<6.5)&&(y>=0.100000001&&y<0.300000012))
		cout<<"YES	";
	else if((x>=5.5&&x<6.0)&&(y>=0.150000006&&y<0.300000012))
		cout<<"YES	";
	else if((x>=3.5&&x<4.0)&&(y>=0&&y< 0.400000006))
		cout<<"YES	";
	else if((x>=2&&x<2.5)&&(y>=-0.05000007&&y<0.250000000 ))
		cout<<"YES	";

	else
		cout<<"NO	";
	cout<<"	";


}
void predict67DISU()
{	
	if((x>=12.5&&x<13)&&(y>=-0.150000006&&y<0.200000003))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.100000001 &&y<0.250000000))
		cout<<"YES	"; 
	else if((x>=11.5&&x<12.0)&&(y>=0&&y<0.200000003))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=0.05000007&&y<0.349999994))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=0&&y<0.400000006))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=0.200000003&&y<0.300000012))
		cout<<"YES	";
	else if((x>=9.5&&x<10)&&(y>=0.250000000&&y<0.349999994))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y==0.349999994))
		cout<<"YES	";
	else
		cout<<"NO	";
	cout<<"	";


}
void predict95MB()
{
	
	if((x>=13.0&&x<13.5)&&(y>=-0.150000006&&y<0.349999994))
		cout<<"YES	";
	else if((x>=12.5&&x<13)&&(y>=-0.200000003&&y<0.400000006 ))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.150000006 &&y<0.449999988))
		cout<<"YES	";
	else if((x>=11.5&&x<12)&&(y>=-0.150000006 &&y<0.550000012))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=-0.100000001 &&y<0.600000024))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=-0.100000001&&y< 0.550000012))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=-0.050000007&&y<0.600000024))
		cout<<"YES	";
	else if((x>=9.5&&x<10)&&(y>=-0.150000006&&y<0.899999976))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y>=0&&y<0.949999988))
		cout<<"YES	";
	else if((x>=8.5&&x<9)&&(y>=-0.05000007&&y<0.800000012))
		cout<<"YES	";
	else if((x>=8&&x<8.5)&&(y>=-0.05000007&&y<0.750000000))
		cout<<"YES	";
	else if((x>=7.5&&x<8)&&(y>=-0.05000007&&y<0.800000012))
		cout<<"YES	";
	else if((x>=7&&x<7.5)&&(y>=-0.100000001&&y<0.699999988 ))
		cout<<"YES	";
	else if((x>=6.5&&x<7)&&(y>=0&&y<0.349999994))
		cout<<"YES	";
	else if((x>=6&&x<6.5)&&(y>=0&&y<0.300000012))
		cout<<"YES	";
	else if((x>=5.5&&x<6.0)&&(y>= -0.050000007&&y<0.250000000))
		cout<<"YES	";
	else if((x>=5.0&&x<5.5)&&(y>=0.050000007&&y<0.300000012))
		cout<<"YES	";
	else if((x>=4.5&&x<5.0)&&(y>=0.050000007&&y<0.400000006))
		cout<<"YES	";
	else if((x>=3.5&&x<4.0)&&(y>=-0.150000006&&y<0.400000006))
		cout<<"YES	";
	else if((x>=3.0&&x<3.5)&&(y>=0.150000006&&y< 0.250000000))
		cout<<"YES	";
	else if((x>=2.5&&x<3.0)&&(y>=0.150000006&&y<0.400000006))
		cout<<"YES	";
	else if((x>=1.5&&x<2.0)&&(y==0))
		cout<<"YES	";
	else if((x>=1&&x<1.5)&&(y==0.100000001))
		cout<<"YES	";
	else
		cout<<"NO	";
	cout<<"	";

}
void predict67MB()
{
	if((x>=13.0&&x<13.5)&&(y==0.100000001))
		cout<<"YES	";
	else if((x>=12.5&&x<13)&&(y>=-.050000007&&y<0.250000000))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-.050000007&&y<0.200000003))
		cout<<"YES	"; 
	else if((x>=11.5&&x<12.0)&&(y>=0&&y<0.200000003))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=0.05000007&&y<0.300000012))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=0&&y<0.300000012))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=0.050000007&&y<0.300000012))
		cout<<"YES	";
	else if((x>=9.5&&x<10)&&(y>=0.100000001&&y< 0.300000012))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y>=0.150000006&&y<0.600000024 ))
		cout<<"YES	";
	else if((x>=8.5&&x<9.0)&&(y==0.150000006))
		cout<<"YES	";
	else if((x>=5&&x<5.5)&&(y==0.150000006))
		cout<<"YES	";
	else if((x>=3.5&&x<4.0)&&(y>=-0.100000001&&y<0.250000000))
		cout<<"YES	";
	else
		cout<<"NO	";
	cout<<"	";

}
void predict95thioether()
{	
	if((x>=14.0&&x<14.5)&&(y>=-0.050000007&&y<0.400000006 ))
		cout<<"YES	";
	else if((x>=13.5&&x<14.0)&&(y>=-0.150000006&&y<0.349999994))
		cout<<"YES	";
	else if((x>=13.0&&x<13.5)&&(y>=-0.150000006&&y<0.349999994))
		cout<<"YES	";
	else if((x>=12.5&&x<13)&&(y>=-0.200000003&&y<0.400000006))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.100000001 &&y<0.400000006))
		cout<<"YES	";
	else if((x>=11.5&&x<12)&&(y>=-0.100000001 &&y<0.550000012))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=-0.150000006 &&y<0.550000012))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=0.050000007&&y<0.600000024))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=0&&y<0.600000024))
		cout<<"YES	";
	else if((x>=9.5&&x<10)&&(y>=0.100000001 &&y<0.649999976 ))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y>=0&&y<0.800000012))
		cout<<"YES	";
	else if((x>=8.5&&x<9)&&(y>=0.100000001&&y<0.850000024))
		cout<<"YES	";
	else if((x>=8&&x<8.5)&&(y>= 0.400000006&&y<0.50000000))
		cout<<"YES	";
	else if((x>=7.5&&x<8)&&(y==0.200000003))
		cout<<"YES	";
	//else if((x>=7&&x<7.5)&&(y>=-0.100000001&&y<0.699999988 ))
	//	cout<<"YES	";
	//else if((x>=6.5&&x<7)&&(y>=0&&y<0.349999994))
	//	cout<<"YES	";
	else if((x>=6&&x<6.5)&&(y==0.2500000))
		cout<<"YES	";
	else if((x>=3.5&&x<4.0)&&(y>=-0.150000006&&y<0.349999994))
		cout<<"YES	";
	else if((x>=2.5&&x<3.0)&&(y>=-0.050000007&&y<0.250000000))
		cout<<"YES	";
	else
		cout<<"NO	";
	cout<<"	";

}
void predict67thioether()
{
	if((x>=12.5&&x<13)&&(y>=-0.150000006&&y<0.200000003))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.050000007&&y<0.200000003))
		cout<<"YES	"; 
	else if((x>=11.5&&x<12.0)&&(y>=0&&y<0.250000000))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=0.050000007 &&y<0.250000000 ))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=0.100000001&&y<0.250000000))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=0.250000000&&y<0.400000006))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y==0.))
		cout<<"YES	";
	else
		cout<<"NO	";
	cout<<"	";

}
void predict95Sulphenylation()
{
	if((x>=14.0&&x<14.5)&&(y==0.699999988))
		cout<<"YES	";
	else if((x>=13.5&&x<14)&&(y>=-0.150000006&&y<0.349999994))
		cout<<"YES	";
	else if((x>=13.0&&x<13.5)&&(y>=-0.150000006&&y<0.349999994))
		cout<<"YES	";
	else if((x>=12.5&&x<13)&&(y>=-0.200000003&&y<0.400000006 ))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.150000006 &&y<0.449999988))
		cout<<"YES	";
	else if((x>=11.5&&x<12)&&(y>=-0.150000006 &&y<0.550000012))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=-0.150000006 &&y<0.449999988 ))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=-0.05000007&&y<0.600000024))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=0&&y<0.600000024))
		cout<<"YES	";
	else if((x>=9.5&&x<10)&&(y>=-0.05000007&&y<0.649999976))
		cout<<"YES	";
	else if((x>=9&&x<9.5)&&(y>=0&&y<0.800000012))
		cout<<"YES	";
	else if((x>=8.5&&x<9)&&(y>=-0.05000007&&y<0.649999976))
		cout<<"YES	";
	else if((x>=8&&x<8.5)&&(y>=0&&y<0.850000024))
		cout<<"YES	";
	else if((x>=7.5&&x<8)&&(y==0.200000003))
		cout<<"YES	";
	//else if((x>=7&&x<7.5)&&(y==0.250000000))
	//	cout<<"YES	";
	//else if((x>=6.5&&x<7)&&(y==0.250000000))
	//	cout<<"YES	";
	else if((x>=6&&x<6.5)&&(y==0.250000000))
		cout<<"YES	";
	else if((x>=5.5&&x<6.0)&&(y==0.150000006))
		cout<<"YES	";
	else if((x>=3.5&&x<4.0)&&(y>=0.100000001 &&y<0.349999994))
		cout<<"YES	";
	else if((x>=2&&x<2.5)&&(y>=-0.05000007&&y<0.250000000 ))
		cout<<"YES	";

	else
		cout<<"NO	";
	cout<<endl;
	
}
void predict67Sulphenylation()
{
	if((x>=12.5&&x<13)&&(y>= -0.100000001&&y<0.200000003))
		cout<<"YES	";
	else if((x>=12&&x<12.5)&&(y>=-0.100000001 &&y<0.150000006 ))
		cout<<"YES	"; 
	else if((x>=11.5&&x<12.0)&&(y>=0&&y<0.250000000))
		cout<<"YES	";
	else if((x>=11&&x<11.5)&&(y>=0&&y<0.250000000 ))
		cout<<"YES	";
	else if((x>=10.5&&x<11)&&(y>=0.100000001&&y<0.250000000))
		cout<<"YES	";
	else if((x>=10&&x<10.5)&&(y>=0.250000000&&y<0.400000006))
		cout<<"YES	";
	//else if((x>=9.5&&x<10)&&(y>=0.250000000&&y<0.349999994))
	//	cout<<"YES	";
	//else if((x>=9&&x<9.5)&&(y==0.349999994))
	//	cout<<"YES	";
	else
		cout<<"NO	";
	cout<<endl;

}
int main()
{	int n;
	cout<<"Enter the cutoff you want to use"<<endl;
	cout<<"Press 1 for 95%"<<endl;
	cout<<"Press 2 for 67%"<<endl;
	int option;
	cin>>option;
	freopen("Input","r",stdin);
	cin>>n;
	freopen("Results","w",stdout);
	
	cout<<"pdbid"<<"	"<<"chain"<<"	"<<"resid"<<"	"<<"DISU"<<"	"<<"MB"<<"	"<<"Thiother"<<"	"<<"Sulphenylation"<<endl;
	if(option==1)
	{	while(n--)
		{	{	string pdbid,chain,resid;
				cin>>pdbid>>chain>>resid;
				cout<<pdbid<<"	"<<chain<<"		"<<resid<<"		";
				
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