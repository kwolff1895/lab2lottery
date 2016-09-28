/*
 * lab2lottery.hpp
 *
 *  Created on: Sep 23, 2016
 *      Author: Kimberly
 */

#ifndef LAB2LOTTERY_HPP_
#define LAB2LOTTERY_HPP_

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;

struct Customer{ //create struct "Customer"
	int customerID;
	int numTickets;
	int *lotteryNums[numTickets][3]; //a pointer to a 2-dimensional array, with the number of tickets purchased being the first dimension and 3 being the second (for the 3 random lottery numbers).


};

struct Store{ //create struct "Store"
	int storeID;
	int numCust;
	int *CustomerList[numCust];
	int numSold;
	int numWinners[3];

};

struct Owner{ //create struct "Owner"
	int numStores;
	int *Stores[numStores];
	int totalSold;
	int totalWinners;
};

Owner *makeOwner();
Store makeStore();
Customer makeCustomer();
void getWinners (int winners[]);
void findWinners(Owner *owner, int *ls);
int checkwin(int *nums, int *winners);


#endif /* LAB2LOTTERY_HPP_ */
