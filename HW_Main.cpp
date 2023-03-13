#include <iostream>
#include <string>

using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


// Variable - START
//	define variables that are global between the two Variable markers
void sortArray(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}
// Variable - END

// Function/Method Declaration - START
//	define function/method declaration signatures between the two markers
void sortStringArray(string arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

// Function/Method Declaration - END

int main() {
	int size;
	cout << "Enter the size of your array: ";
	cin >> size;

	int intArr[size] = {};
	string strArr[size] = {};


	for (int i = 0; i < size; i++) {
		string input;
		cin >> input;
	

	int start = input.find_first_not_of(" ");
	int end = input.find_last_not_of(" ");
	input = input.substr(start, end - start + 1);

		if (isdigit(input[0])) {
			intArr[i] = stoi(input);
		}
		else {
			strArr[i] = input;
		}
	}
	// Function/Method Definition - START
	//	define function/method declaration signatures between the two markers
	if (isdigit(strArr[0][0])) {
		sortArray(intArr, size);
		cout << " sorted array:  ";
		for (int i = 0; i < size; i++) {
			cout << intArr[i] << " ";
		}
	}
	else {
		sortStringArray(strArr, size);
		cout << " sorted array:  ";
		for (int j = 0; j < size; j++) {
			cout << strArr[j] << " ";
		}
	}
	// Function/Method Definition - END
	return 0;
}

