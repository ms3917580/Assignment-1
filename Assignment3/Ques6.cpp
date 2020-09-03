#include<iostream>
#include<math.h>
using namespace std;
class Invoice
{
	public:
   	Invoice( string ,string ,int ,int );
		void setPartNumber(string);
		string getPartNumber();
		void setPartDescription(string);
		string getPartDescription();
		void setQuantity(int);
		int getQuantity();
		void setPricePerItem(int);
		int getPricePerItem();
		int getInvoiceAmount();
	private:
	string partNumber;
	string partDescription;
	int quantity;
	int pricePerItem;	
};
    Invoice::Invoice(string number,string description,int count,int price)
    {
    	setPartNumber(number);
    	setPartDescription(description);
    	setQuantity(quantity);
    	setPricePerItem(price);
	}
		void Invoice::setPartNumber(string number){
			 partNumber=number;
		}
	string Invoice::getPartNumber(){
			return partNumber;
		}
		void Invoice::setPartDescription(string description)
		{
			partDescription=description;	
		}
		string Invoice::getPartDescription()
		{
			return partDescription;
		}
		void Invoice::setQuantity(int count)
		{
		 if(count>0)
		 quantity=count;
		 if(count<=0)
		 {
		 	quantity=0;
		 	cout<<"\nQuantity can not be negative.Quantity set to 0.\n";
		 }
		}
		int Invoice::getQuantity(){
			return quantity;
		}
		void Invoice::setPricePerItem(int price){
		if(price>0)
		pricePerItem=price;
		if(price<=0)
		{
			pricePerItem=0;
			cout<<"\nPrice can not be negative.Price set to 0.\n";	
		}
		}
		int Invoice::getPricePerItem()
		{
			return pricePerItem;
		}
		int Invoice::getInvoiceAmount()
		{
			return getQuantity()*getPricePerItem();
		}
int main()
{
	Invoice invoice("25415","laptop",100,-5);
	cout<<"Part number: "<<invoice.getPartNumber()<<endl;
	cout<<"Part description: "<<invoice.getPartDescription()<<endl;
	cout<<"Quantity: "<<invoice.getQuantity()<<endl;
	cout<<"Part per item: "<<invoice.getPricePerItem()<<endl;
	cout<<"Invoice amount"<<invoice.getInvoiceAmount()<<endl;
}
