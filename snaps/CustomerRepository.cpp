#include <iostream>

class CustomerRepository
{
	private:
		unsigned int numberOfMangledEntries;
};

class ReserveCarCaseController
{
	public:
		CustomerRepository indentifyCustomer(const UniqueIdentifier& customerId);
		CustomerRepository getListOfAvailableCars(const Station& atStation, const RentalPeriod& desiredRentalPeriod) const;
		CustomerRepository reserveCar(const UniqueIdentifier& carId, const RentalPeriod& rentalPeriod) const;
};

int main()
{

}
