/*
In this code, we will use Selection Sort for order and use Lineer Search for find the searching element.

Developer: Barış Someroğlu
Date: 23.01.2024 / 11:00 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp, ara;
	bool found = false;

	// get size for array
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << endl;

	// get value for array
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter A[" << i << "]: ";
		cin >> A[i];
	}

	cout << endl;

	// write entered array
	cout << "Entered Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}


	// use selection sort
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (A[j] < A[i])
			{
				swap(A[i], A[j]);
				
				// temp = A[i];
				// A[i] = A[j];
				// A[j] = temp;
			}
		}
	}


	cout << endl;

	// Sorted array is
	cout << "Sorted Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	// ask user searching element
	cout << "Please Enter Searching Element: ";
	cin >> ara;


	// use lineer search
	for (int i = 0; i < n; i++)
	{
		if (ara == A[i])
		{
			cout << "The Elemnt is in A[" << i << "]" << endl;
			found = true;
		}
	}

	// if searching element isn't in array
	if (found == false)
	{
		cout << "There is no searching element in the array!" << endl;
	}

	return 0;
}