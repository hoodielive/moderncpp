#include <iostream>

enum class Race 
{
	Dinan,
	Teklan,
	Moiran,
	Camite,
	Julian,
	Aidan
};

int main()
{
	Race race = Race::Dinan;

	switch(race) {
		case Race::Dinan: {
												printf("You work hard.");
											} break;
		case Race::Teklan: {
												 printf("You are very strong!");
											 } break;
		case Race::Ivyn: {
											 printf("You are a good leader.");
										 } break;
		case Race::Julian: {
												 printf("Anything you want.");
											 } break;
		default: {
							 printf("Error.");
						 } break;
}
}
