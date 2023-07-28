#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	bool running {true};
	vector <int> vec {};
	while (running == true)
	{
		
		char option {};
		cout << "\nP - Print numbers \nA - Add a number \nM - Display mean of the numbers"
			 << "\nS - Display the smallest number \nL - Display the largest number \nC - Clear list \nQ - Quit" << endl;
		cout << "\nEnter your choice: ";
		cin >> option;
		if (option == 'p' || option == 'P')
		{	
			// checking if vector is not empty
			if (vec.size() != 0)
			{
				cout << "\n[";
				for (auto v: vec)
				{
					cout << " " << v << " ";
				}
				cout << "]" << endl;
			}
			// if vector is empty
			else
				cout << "\n[ ] - the list is empty.\n" << endl;
		}
		else if (option == 'a' || option == 'A')
		{	
			// adding number to the array
			int add {};
			cout << "\nEnter a number you want to add: ";
			cin >> add;
			vec.push_back(add);
			cout << add << " added" << endl;
		}
		else if (option == 'm' || option == 'M')
		{	
			// checking if vector is not empty
			if (vec.size() != 0){
				double allnums {};
				for (int v: vec)
					allnums += v;
				double mean {};
				mean += allnums / vec.size();
				cout << "\nMean of all numbers is: " << mean << endl;
			}
			// if vector is empty
			else
				cout << "\nUnable to calculate - not enough data.\n" << endl;
		}
		else if (option == 's' || option == 'S')
		{
			// checking if vector is empty
			if (vec.size() != 0)
			{
				cout << "\nSmallest number: " << *min_element(vec.begin(), vec.end()) << endl;
			}
			// if vector is empty
			else
				cout << "\nUnable to calculate - not enough data.\n" << endl;
		}
		else if (option == 'l' || option == 'L')
		{
			// checking if vector is empty
			if (vec.size() != 0)
			{
				cout << "\nLargest number: " << *max_element(vec.begin(), vec.end()) << endl;
			}
			// if vector is empty
			else
				cout << "\nUnable to calculate - not enough data.\n" << endl;
		}
		else if (option == 'c' || option == 'C')
		{
			// checking if vector is empty
			if (vec.size() != 0)
			{
				vec.clear();
				cout << "\nList is cleared!" << endl;
			}
			// if vector is empty
			else
				cout << "\n[ ] - the list is empty.\n" << endl;
		}
		else if (option == 'q' || option == 'Q')
		{
			cout << "Goodbye" << endl;
			running = false;
		}
		// if user enters wrong letter or value
		else
		{
			cout << "Unknown selection - please try again." << endl;
		}
	}

	cout << endl;
	return 0;
}
