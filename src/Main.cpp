//============================================================================
// Name        : Assignment3.cpp
// Author      : Sean Hardin
// Date        : 10/31/17
// Copyright   : Your copyright notice
// Description : Assignment 3 for cs300, includes main for barbershop
//============================================================================

#include <iostream>
using namespace std;
#include "BarberShop.h"

int main() {

	BarberShop shop;
	Customer customer1("MARK","KILGORE");
	Customer customer2("RICK","GRIMM");
	shop.addCustomer(customer1);
	shop.addCustomer(customer2);
	Customer nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	Customer customer3("JILL","WOLFF");
	shop.addCustomer(customer3);
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;
	nextCustomer = shop.nextCustomer();
	cout<<nextCustomer.getName()<<" is served next"<<endl;

	return 0;
}
