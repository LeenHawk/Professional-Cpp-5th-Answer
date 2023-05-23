import std;
import airline_ticket;

using namespace std;

int main()
{
	AirlineTicket myTicket;  // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost{ myTicket.calculatePriceInDollars() };
	cout << format("This ticket will cost ${}", cost) << endl;
	cout << format("The Number of Frequent Flyer is ${}", myTicket.getFrequentFlyerNumber().value_or(-1)) << endl;
	myTicket.setFrequentFlyerNumber(1);
	cout << format("The Number of Frequent Flyer is ${}", myTicket.getFrequentFlyerNumber().value_or(-1)) << endl;
} 
