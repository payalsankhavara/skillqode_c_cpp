#include<stdio.h>
#include<conio.h>
int main()
{
	 
	float qty,rate,amt,dis,bill,gst,netbill;
	
	printf("Enter Qty:");
	scanf("%f",&qty);

	printf("enter rate:");
	scanf("%f",&rate);
	
	amt=qty*rate;
	printf("\namt=%.2f",amt);

	dis=amt*0.05;
	printf("\ndis=%.2f",dis);

	bill=amt-dis;
	printf("\nbill=%.2f",bill);

	gst=bill*0.18;
	printf("\ngst=%.2f",gst);
	
	netbill=bill+gst;
	printf("\nnetbill=%.2f",netbill);

	printf("\nqty\trate\tamt\t\tdis\t\tbill\t\tgst\t\tnetbill");
	printf("\n%.2f\t%.2f\t%.2f\t%.2f\t\t%.2f\t%.2f\t\t%.2f\t\t",qty,rate,amt,dis,bill,gst,netbill);
	return 0;

}
