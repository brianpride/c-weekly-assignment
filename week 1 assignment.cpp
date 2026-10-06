// sales reciept system
// name; Brian pride
// rwg no : ct101/g/26670/25

#include <iostream>
using namespace std;

int main (){
	string customer_name;
	string model;
	int quantity;
	float price,total_sales;
	
	cout << "ENTER NAME : "  << endl;
	cin >> customer_name ;
	cout << "ENTER PHONE MODEL:"<< endl;
	cin >> model ;
	cout << " ENTER QUANTITY PURCHASED : " <<endl;
	cin >> quantity;
	cout << " ENTER PRICE :" << endl;
	cin >> price;
	
	total_sales=quantity*price;
	cout << "/n";
	cout << "Total sales :" << total_sales << endl;
	cout << "================" << endl;
	cout << "SALES RECIEPT " <<endl;
	cout << "=================" << endl;
	cout << " CUSTOMER NAME : " << customer_name << endl;
	cout << " PHONE MODEL : " << model <<endl;
	cout << " PHONE PRICE : " << price << endl ;
	cout << "==================" << endl;
	cout <<" TOTAL SALES : " << total_sales << endl;
	cout << " ==================" << endl;
	
}