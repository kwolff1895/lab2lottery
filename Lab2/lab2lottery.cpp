/*
 * lab2lottery.cpp
 *
 *  Created on: Sep 23, 2016
 *      Author: Kimberly
 */
#include "lab2lottery.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

Owner *makeOwner(){//make owner object
	Owner *Owner = new Owner;
	srand(time(NULL));
	Owner->numStores = rand() % 10 + 1; //generate random number for number of stores
	Owner->Stores[Owner->numStores];
	Owner->totalSold = 0;
	for (int i; i<=Owner->numStores; i++){ //create store object for each store
		Owner->Stores[i] = makeStore();
		Owner->totalSold += Owner->Stores[Owner->totalSold];
	}

	return Owner;

}

Store makeStore(){//make store object
	Store Store;
	srand(time(NULL));
	Store.storeID = rand() % 100 + 1; //create random store ID
	Store.numCust = rand() % 10 + 1; //create random number of customers
	Store.numSold=0;
	Store.CustomerList = new int[Store.numCust];//create customer list
	for(int i; i<=Store.numCust;i++){//create customer object for each customer
		Store.CustomerList[i] = makeCustomer;
		Store.numSold+=Store.CustomerList[Store.numSold];
	}

	return Store;
}

Customer makeCustomer(){//make customer object
	Customer Customer;

	Customer.customerID = rand() % 1000 + 1;//create random customer ID
	Customer.numTickets = rand() % 20 + 1;//create random number of tickets
	int ticketNumber[3];//create ticket numbers list
	int **lotteryNums;
	lotteryNums = new int *[Customer.numTickets][ticketNumber]; //create lottery numbers array

	for (int i; i<=Customer.numTickets; i++){ //for each ticket, create 3 random unique numbers for ticket numbers
		ticketNumber[0] = rand() % 9;
		int Number2 = rand() % 9;
		if (Number2 != ticketNumber[0]){
			Number2 = ticketNumber[1];
		}
		else{
			Number2 = rand % 9;
		}
		int Number3 = rand() % 9;
		if (Number3 != ticketNumber[0]){
			if (Number3 != ticketNumber[1]){
				Number3 = ticketNumber[2];
			}
		}
		else{
			Number3 = rand % 9;
		}
}
	return Customer;
}
void getWinners(int winners[]){ //– takes a list of 3 0’s (zeros) and modifies it to contain 3 unique numbers between 0 and 9
	for (int i; i<=3; i++){
		winners[0] = rand() % 9;
		int Number2 = rand() % 9;
				if (Number2 != winners[0]){
					Number2 = winners[1];
				}
				else{
					Number2 = rand % 9;
				}
				int Number3 = rand() % 9;
				if (Number3 != winners[0]){
					if (Number3 != winners[1]){
						Number3 = winners[2];
					}
				}
				else{
					Number3 = rand % 9;
				}

	}


}


int checkWin(int *nums,int *winners){//– takes two lists of 3 nums and returns the number of matching numbers
	int matching = 0;
	for (int i; i<3; i++){
		for (int j; j<3; j++){
			if (nums[i] == winners[j]){
				matching++;
			}
		}
	}

	return matching;
}

void findWinners(Owner *Owner, int winningNumbers[3] ){
	Customer Customer;
	cout<<"Total Number of Winning Tickets Sold: "<<Owner->totalWinners;
	cout<<"Winning Numbers: "<<winningNumbers[3];

	for (int i; i<Owner->numStores; i++){
		cout<<"Store:"<<Owner->Stores<<"/t"<<"Customer: "<<Customer.customerID<<"/t"<<"Tickets: "<<Customer.numTickets<<"/t"<<"Matching:"<<checkWin(*Customer.lotteryNums, getWinners(*winners));
		cout<<"Total for Store: "<<Owner->totalWinners;
	}
}

