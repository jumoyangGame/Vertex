#include "Phone.h"
#include <iostream>
#include <string>
#include <vector>



/*1.Split Phone class into a .cpp and .h file
	- add few more objects
2. Add new features to the phone
	- charge battery ChargeBattery(int charge)
	-increase battery life by given amount by keep it under 100
3. Simulate basic phone functionality
	-Make a function called MakeCall() that reduce the battery life by 5% each time called
	-if battery life below 5%, print message "Low battery, please recharge"
4. create a new class for an enemy object

5. create getter and setter for serialNumber

6. create an array of phone object and write a loop to print out info for each phone

*/

int main()
{
	Phone myPhone1("Iphone", 12112);
	myPhone1.ChargeBattery(10.0);
	myPhone1.SetSerialNumber(10011);
	myPhone1.MakeCall();
	myPhone1.PrintPhoneInfo();

	std::vector<Phone> phoneList = { Phone("IPhone1",111),Phone("Samsung",10010),Phone("Hammer",10001100) };

	for (int i = 0; i < phoneList.size();i++)
	{
		phoneList[i].PrintPhoneInfo();
	}

	return 0;
}