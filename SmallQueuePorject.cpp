#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main() {
	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);



	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "Pay Bills Queue Info: \n";

	PayBillsQueue.PrintInfo();
	

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();

	cout << endl;

	PayBillsQueue.PrintAllTickets();
	cout << endl;


	PayBillsQueue.ServeNextClient();
	PayBillsQueue.PrintInfo();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();


	cout << "Subs Queue Info: \n";

	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintTicketsLineRTL();
	SubscriptionsQueue.PrintTicketsLineLTR();

	cout << endl;

	SubscriptionsQueue.PrintAllTickets();
	cout << endl;

	SubscriptionsQueue.ServeNextClient();
	SubscriptionsQueue.PrintInfo();

	return 0;
}