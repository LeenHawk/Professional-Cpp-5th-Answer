export module airline_ticket;

import <string>;

export class AirlineTicket
{
public:
	//AirlineTicket();
	//~AirlineTicket();

	const double& calculatePriceInDollars();
	
	const std::string& getPassengerName() const;
	void setPassengerName(const std::string& name);

	const int& getNumberOfMiles() const;
	void setNumberOfMiles(const int& miles);
	
	const bool& getHasEliteSuperRewardsStatus() const;
	void setHasEliteSuperRewardsStatus(const bool& status);

private:
	//std::string m_passengerName;
	//int m_numberOfMiles;
	//bool m_hasEliteSuperRewardsStatus;
	std::string m_passengerName{ "Unknown Passenger" };
	int m_numberOfMiles{ 0 };
	bool m_hasEliteSuperRewardsStatus{ false };
};
