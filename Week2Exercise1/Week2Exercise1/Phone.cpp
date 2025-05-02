#include "Phone.h"
#include <iostream>
#include <string>

Phone::Phone(std::string Name, int serialNumber) :phoneName(Name),serialNumber(serialNumber),batteryLife(80.0),internalTemp(30.0) {}
	
//Getters
std::string Phone:: PhoneName() 
{
	return phoneName;
}

int Phone:: SerialNumber()
{
	return serialNumber;
}

float Phone:: BatteryLife() 
{
	return batteryLife;
}

float Phone:: InternalTemp()
{
	return internalTemp;
}

//Setters
void Phone:: SetSerialNumber(int newSerialNumber)
{
	this->serialNumber = newSerialNumber;
}

//Functions
void Phone::ChargeBattery(float chargeAmount) 
{
	batteryLife += chargeAmount;
	
	if (batteryLife + chargeAmount <= 100)
	{
		std::cout << "Your current battery life is: " << batteryLife << "%" << std::endl;
	}
	else if (batteryLife + chargeAmount >= 100)
	{
		batteryLife = 100;
		std::cout << "Your phone is fully charged" << std::endl;
	}
	
}

void Phone::MakeCall()
{
	batteryLife -= 5;
	if (batteryLife - 5 < 0)
	{
		batteryLife = 0;
		std::cout << "Low battery, please recharge!" << std::endl;
	}
}

void Phone::PrintPhoneInfo()
{
	std::cout << "Phone Name: " << phoneName << std::endl;
	std::cout << "Phone Serial Number: " << serialNumber << std::endl;
	std::cout << "Phone Battery Life: " << batteryLife << std::endl;
	std::cout << "Phone Internal Temperature: " << internalTemp << std::endl;
}
