#pragma once
#include <iostream>
#include <string>

class Phone
{
public:
	//Constructor
	Phone(std::string Name, int serialNumber);

	//Getters
	std::string PhoneName();

	int SerialNumber();

	float BatteryLife();

	float InternalTemp();

	//Setters
	void SetSerialNumber(int newSerialNumber);

	//Functions
	void ChargeBattery(float chargeAmount);

	void MakeCall();

	void PrintPhoneInfo();


private:
	std::string phoneName;
	int serialNumber;
	float batteryLife;
	float internalTemp;

};