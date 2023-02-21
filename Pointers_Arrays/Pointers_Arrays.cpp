// Pointers_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int numbers[20]; //declare array and size

	//create random #s for each number in the array
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		numbers[i] = rand() % 10 + 1;
		cout << "Numbers[i]\t" << numbers[i] << endl;
	}

	int* itemPtr = 0;//declared pointer and initialized to 0
	int itemToBeFound = 4;
	bool found = false;  //flag 

	//for loop to see if numbers array contains the  itemToBeFound which is #4
	//if the # in numbers[i]is equal to itemToBeFound the sent found flag to true
	//and assign a reference of the numbers[i] array element to the itemsPtr pointer. 
	for (int i = 0; i < 20 && found == false; i++)
	{
		if (numbers[i] == itemToBeFound)
		{
			found = true;
			itemPtr = &numbers[i];
		}
	}
	if (found)
	{
		cout << "The number was found in the pointer addres of " << itemPtr << endl;
		cout << "The itemPTR addres " << itemPtr << " contains the value of: " << *itemPtr << endl;
	}
	else
		cout << " Number was not Found" << endl;
		cout << "\n\n" << endl;


	//**************USING STRUCTURES********************

	struct myStruct
	{
		int number;
		int random;
	};

	myStruct mystruct[20];//declare structure of data type myStruct

	//for loop to go over structure to create randoom numbers
	for (int i = 0; i < 20; i++)
	{
		mystruct[i].number = i;
		mystruct[i].random = rand() % 10 + 1;
		cout << "myStruct[i].number\t" << mystruct[i].number << endl;
		cout << "myStruct[i].random\t" << mystruct[i].random << endl;
	}

	found = false;

	myStruct* strucPtr = 0; // create pointer structPtr of tyoe myStruct. Initialized to 0
	cout << "\n\n" << endl;
	for (int i = 0; i < 20 && found == false; i++)
	{
		cout << "myStruct[i].number\t" << mystruct[i].number << endl;
		cout << "myStruct[i].random\t" << mystruct[i].random << endl;
		if (mystruct[i].random == itemToBeFound)
		{

			found = true;
			strucPtr = &mystruct[i];
		}
	}
	cout << "\n\n" << endl;
	if (found)
	{

		cout << "Struct pointer addres is pointint to  # " << strucPtr->number << endl;
		cout << "Struct pointer value is  # " << strucPtr->random << endl;
	}

	else
		cout << "The number was not found" << endl;


	return 0;

}

