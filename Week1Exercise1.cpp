//#include <iostream>
//#include <string>
//#include <vector>
//#include <numeric>
//#include <algorithm>
///*
//1. ask name and age of a user
//2. ask them temperature in C and convert into F
//	b.convert km to miles
//	c. convert Pound to kg
//	d. convert Dollar to Euro
//3. create a Vector with 4 number
//	a.compare the average of all 4 floats and print it
//	-- how to compute average
//	-- can use std::... to do this, will need to include another library
//
//4. Ask for input 5 int and store in a Vector
//	a. print sum of all int (std:: accu...)
//	b. find the largest and smallest and largest num
//	c. ask for a number, search if it is in the vector (std:: )
//*/
//float TemperatureConverter(float temp)
//{
//	float fTemp = temp * 1.8 + 32;
//	return fTemp;
//}
//float CalculateVectorAvearge(std::vector<float> myVector)
//{
//	float sum = std::accumulate(myVector.begin(), myVector.end(),0.0f);
//	return sum / myVector.size();
//}
//
//int main()
//{
//	//variables 
//	const float RATIO_KM_TO_MILES = 0.62f;
//	const float RATIO_POUND_TO_KG = 0.45f;
//	const float RATIO_DOLLOR_TO_EURO = 0.88f;
//
//	float tempInput;
//	float distanceInput;
//	float weightInput;
//	float moneyInput;
//
//	std::string nameInput;
//	std::string ageInput;
//
//	std::vector<float> inputVector;
//	float inputNumber;
//	float vectorSum;
//	float vectorSmallest;
//	float vectorLargest; 
//
//	//exercise part 1
//	std::cout << "Please write down you name and age below" << std::endl << "Your Name is?" <<std::endl;
//	std::getline(std::cin, nameInput);
//	std::cout << "Welcome! " << nameInput << "!" << std::endl << "And your age?" << std::endl;;
//	std::cin >> ageInput;
//	std::cout << "You are " << ageInput << " years old."<< std::endl;
//
//	//exercise part 2
//	std::cout << "Now input a temperature in C and I'll help you convert to F" << std::endl;
//	std::cin >> tempInput;
//	std::cout << "You temperature is: " << TemperatureConverter(tempInput) << " F degrees" << std::endl;
//	std::cout << "Now input a distance in km and I'll help you convert to miles" << std::endl;
//	std::cin >> distanceInput;
//	std::cout << "Your distance is: " << distanceInput * RATIO_KM_TO_MILES << " miles" << std::endl;
//	std::cout << "Now input a weight in pound and I'll help you convert to kg" << std::endl;
//	std::cin >> weightInput;
//	std::cout << "Your weight is: " << weightInput * RATIO_POUND_TO_KG << " kg" << std::endl;
//	std::cout << "Now input a dollar amount and I'll help you convert to euro" << std::endl;
//	std::cin >> moneyInput;
//	std::cout << "Your money is: " << moneyInput * RATIO_DOLLOR_TO_EURO << " euro" << std::endl;
//
//	//exercise part 3
//	std::cout << "Now I'll ask you to input 4 numbers and I'll calculate the average for you" << std::endl << "Please input the first number:" << std::endl;
//	std::cin >> inputNumber;
//	inputVector.push_back(inputNumber);
//	std::cout << "Now input the second number: " << std::endl;
//	std::cin.ignore();
//	std::cin >> inputNumber;
//	inputVector.push_back(inputNumber);
//	std::cout << "Now input the third number: " << std::endl;
//	std::cin.ignore();
//	std::cin >> inputNumber;
//	inputVector.push_back(inputNumber);
//	std::cout << "Now input the fourth number: " << std::endl;
//	std::cin.ignore();
//	std::cin >> inputNumber;
//	inputVector.push_back(inputNumber);
//	std::cout << "Your average is: " << CalculateVectorAvearge(inputVector) << std::endl;
//
//	//exercise part 4 (combined with exercise 3)
//	std::cout << "Now input one more number, and I'll calculate the sum, and find the largest and smallest number" << std::endl;
//	std::cin.ignore();
//	std::cin >> inputNumber;
//	inputVector.push_back(inputNumber);
//	vectorSum = std::accumulate(inputVector.begin(), inputVector.end(), 0.0f);
//	vectorLargest = *std::max_element(inputVector.begin(),inputVector.end());
//	vectorSmallest = *std::min_element(inputVector.begin(), inputVector.end());
//	std::cout << "Your sum is: " << vectorSum << std::endl << "Your largest number is: " << vectorLargest << std::endl << "and your smallest number is: " << vectorSmallest << std::endl;
//	std::cout << "Now input a number and I'll tell you if it's in the groups of number you just entered" << std::endl;
//	std::cin.ignore();
//	std::cin >> inputNumber;
//	auto it = std::find(inputVector.begin(), inputVector.end(), inputNumber);
//
//	if (it != inputVector.end())
//	{
//		std::cout << "Yes your number is in the number group" << std::endl;
//	}
//	else {
//		std::cout << "No I can't find this number in the number group" << std::endl;
//	}
//
//	return 0;
//}
//
