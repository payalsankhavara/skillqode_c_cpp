#include<iostream>
using namespace std;
class bill
{
	string product;
	float rate,qty,amt,dis,bill,gst,netbill;
    public:   
	void setval()
    {
	cout<<"enter product:";
	cin>>product;
	cout<<"Enter rate :";
	cin>>rate;
	cout<<"Enter qty :";
	cin>>qty;
    }
    void rateval()
    {
	product;
	amt=qty*rate;
	

	dis=amt*0.5;
	

	bill=amt-dis;
	
	gst=bill*0.18;
	

	netbill=bill+gst;
	
	cout<<"\nprouct\trate\tqty\tamt\tdis\tbill\tgst\tnetbill";
	cout<<"\n"<<product<<"\t"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<bill<<"\t"<<gst<<"\t"<<netbill;
    }
    
	
};	
int main()
{
    bill obj1;
    obj1.setval();
    obj1.rateval();
}