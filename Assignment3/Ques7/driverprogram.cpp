#include<iostream>
#include"Ques7.h"

using namespace std;
int main()
{
	Invoice invoice("25415","laptop",100,-5);
	cout<<"Part number: "<<invoice.getPartNumber()<<endl;
	cout<<"Part description: "<<invoice.getPartDescription()<<endl;
	cout<<"Quantity: "<<invoice.getQuantity()<<endl;
	cout<<"Part per item: "<<invoice.getPricePerItem()<<endl;
	cout<<"Invoice amount"<<invoice.getInvoiceAmount()<<endl;
}
