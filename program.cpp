#include <iostream>
using namespace std;


class student {
	private:
		int scores[100];
		int size = 5;

	public:
		void insert() {
			for (int i = 0; i < size; i++) {
				cout << "Enter score number " << i + 1 << ": ";
				cin >> scores[i];
			}
		}

		void display() {
			for (int i = 0; i < size; i++) {
				cout << "\n\nNo. " << i + 1 << ": " << scores[i];
			}
		}
		
		void bubble_sort() {
			int n = 5, temp;
			
			for(int out = 0; out < 5; out++){
				n--;
				for(int in = 0; in < n; in++){
					if(scores[in] > scores[in + 1]){
						temp = scores[in];
						scores[in] = scores[in + 1];
						scores[in + 1] = temp;
					}
				}	
			}
		}
		
		void Insertion_Sort()
		{
			int in, out;
			
			for (out = 1; out < 5; out++)
			{
				int temp = scores[out];
				in = out;
				while (in > 0 && scores[in - 1] > temp)
				{
					scores[in] = scores[in - 1];
					--in;
				}
				scores[in] = temp;
				
			}
			cout << "The insert sort is done !";
		}
		
		void selection_Sort()
		{
			int size = 5;
			int temp;
            int least;
            
			for (int step = 0; step < size -1; step++)
			{
				int least = step;
				
				for (int i = step + 1; i < size; i++)
				{
                    
					if (scores[i] < scores[least])
                    {
					least = i;
                    }

                    if (least =! step)
                    {
                    temp = scores[least];
					scores[least] = scores[step];
					scores[step] = temp;
                    }

				}
                
			}
			
		}
			
		
		int search() {
			int user_input, n;

			cout << "\nWhat number do you wnat to search in the array? ";
			cin >> user_input;

			/*	for (int i = 0; i < 5; i++){
					n = 1;
				}
				if (n == 1){
					cout << "\nyour number, " << user_input << " is in the array. ";
				} else {
					cout << "\nyour number, " << user_input << " is not the array";
				} */

			for (int i = 0; i < 5; i++) {
				if (user_input == scores[i]) {
					cout << "\nyour number, " << user_input << " is in the array. ";
					return 0;
				}
			}
			cout << "\nyour number, " << user_input << " is not in the array. ";
			return 0;
		}

		void custom_delete() {
			int user_input;
			int i = 0;

			cout << "\nWhat number do you wnat to delete in the array? ";
			cin >> user_input;

			for (i = 0; i < 5; i++) {
				if (user_input == scores[i])
					break;
			}
			if (i == 5) {
				cout << "\nyour number, " << user_input << " is not in the array. ";
			}
			else {
				for (int j = i; j < 5; j++) {
					scores[j] = scores[j + 1];

				}
				cout << "\nNnumber deleted";
				size = size - 1;
			}
		}

		void my_update() {
			int user_input, number_change;
			int i = 0;

			cout << "\nWhat number do you wnat to change in the array? ";
			cin >> user_input;


			for (i = 0; i < 5; i++) {
				if (user_input == scores[i]) {
					break;
				}
			}

			if (i != 5) {
				cout << "\nWhat number do you want to change " << user_input << " to? ";
				cin >> number_change;

				scores[i] = number_change;
			}
			else if (i == 5) {
				cout << "\nyour number, " << user_input << " is not in the array. ";
			}

		}

		void bubble_ordered_array() { // this is a bubble sort
			int i, j, n = 5;
			int temp;

			for (i = 0; i < n; i++)
			{
				for (j = i + 1; j < n; j++)
				{
					if (scores[i] > scores[j])
					{
						temp = scores[i];
						scores[i] = scores[j];
						scores[j] = temp;
					}
				}
			}

			//print sorted array elements
			cout << "\nSorted (Ascending Order) Array elements:" << endl;
			for (i = 0; i < n; i++) {
				cout << "\nNo. " << i + 1 << ": " << scores[i];
			}
			cout << endl;
		}

		void ordered_insert() {
			int user_in;
			int i, j, k;

			for (i = 0; i < 5; i++) {
				cout << "\nEnter score number : ";
				cin >> user_in;
			}
				for (j = 0; j < 5; j++) { // finding position
					if (scores[j] > user_in)
						break;
				
				for (k = size; k > j; k--) { // moving position
					scores[k] = scores[k - 1];
				}
				scores[j] = user_in;
				}
			
		}
		
// big O notation
// binary search is faster than linear search
		int binary_search() {
			int key, mid, upper_ind = 4, lower_ind = 0;

			cout << "\nEnter a number to be searched: ";
			cin >> key;

			while (true) {
				mid = (lower_ind + upper_ind) / 2;

				if (scores[mid] == key) {
					cout << "\nfound";
					return 0;
				}
				else if (lower_ind > upper_ind) {
					cout << "not found";
					return 0;
				}
				else {
					if (scores[mid] < key) {
						lower_ind = mid + 1;
					}
					else {
						upper_ind = mid - 1;
					}
				}
			}
		}
};

// 2D array
class student_2d_array {
private:
	int input[4][2];
	int row_len = 4, col_len = 2;


public:
	void array_insert() {
		int i, j;

		cout << "inserting into a 2D Array:\n";
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 2; j++) {
				cout << "Position [" << i << "][" << j << "] = ";
				cin >> input[i][j];
			}
		}
		cout << "Done...\n";
	}

	void array_display() {
		cout << "Printing a 2D Array:\n";
		for (int i = 0; i < row_len; i++) {
			for (int j = 0; j < col_len; j++) {
				cout << "\t" << input[i][j];
			}
			cout << endl;
		}
		cout << "------------------------------\n";
	}

	int array_search() {
		int user_input;

		cout << "Searching a 2D Array:\n";
		cout << "\nWhat number do you wnat to search in the array? ";
		cin >> user_input;

		for (int i = 0; i < row_len; i++) {
			for (int j = 0; j < col_len; j++) {
				if (user_input == input[i][j]) {
					cout << "\nYour number, " << user_input << " is found in position [" << i << "][" << j << "].";
					return 0;
				}
			}
		}
		cout << "\nYour number, " << user_input << " is not in the array. ";
		cout << "\nDone...\n";
		cout << "------------------------------\n";
		return 0;
	}

	int array_delete_row() {
		int user_input;
		int i, j;

		cout << "Deleting an entry in a 2D Array:\n";
		cout << "\nWhat number do you wnat to delete in the array? ";
		cin >> user_input;

		for (i = 0; i < row_len; i++) {
			for (j = 0; j < col_len; j++) {
				if (user_input == input[i][j]) {
					cout << "\nthe row containing " << user_input << " has been deleted.\n\n";

					for (int k = 0; k < col_len; k++) {
						input[i][k] = input[i + 1][k];
					}
					
					row_len = row_len - 1;
					return 0;
				}
			}
		}
		cout << "\nYour number, " << user_input << " is not in the array.\n";
		cout << "\nDone...\n\n";
		
	}

	int array_update() {
		int user_input, number_change;
		int i, j;

		cout << "Updating an entry in a 2D Array:\n";
		cout << "\nWhat number do you wnat to edit in the array? ";
		cin >> user_input;

		for (i = 0; i < row_len; i++) {
			for (j = 0; j < col_len; j++) {
				if (user_input == input[i][j]) {
					cout << "\nYour number, " << user_input << " is found in position [" << i << "][" << j << "].\n";

					cout << "\nWhat number do you want to change " << user_input << " to? ";
					cin >> number_change;

					input[i][j] = number_change;
					cout << "\nnumber changed\n\n";

					return 0;
				}
				
			}
		}
		cout << "\nyour number, " << user_input << " is not in the array. \n";
	}
};

int main() {

	student s1;
	
	int option;

	do{
		cout << endl << endl;

		cout << "Data Structures Array algorithms " << endl;
		cout << "=======================================" << endl;

		cout << "1. Insert " << endl;
		cout << "2. Display " << endl;
		cout << "3. Sort by bubble sort" << endl;
		cout << "4. Sort by insertion" << endl;
		cout << "5. Sort by selection" << endl;
		cout << "6. Search" << endl;
		cout << "7. Delete" << endl;
		cout << "8. Update" << endl;
		cout << "9. Ordered method" << endl;
		cout << "10. Ordered Insert" << endl;
		cout << "11. Binary search" << endl;
		cout << "12. Clear screen" << endl;

		cout << "=======================================" << endl;
		
		cout << "Please enter what operation you want to perform? " << endl;
		cin >> option;

		switch (option)
		{
			case 1:
			s1.insert();
			break;

			case 2:
			s1.display();
			break;

			case 3:
			s1.bubble_sort();
			break;

			case 4:
			s1.Insertion_Sort();
			break;

			case 5:
			s1.selection_Sort();
			break;

			case 6:
			s1.search();
			break;

			case 7:
			s1.custom_delete();
			break;

			case 8:
			s1.my_update();
			break;

			case 9:
			s1.bubble_ordered_array();
			break;

			case 10:
			s1.ordered_insert();
			break;

			case 11:
			s1.binary_search();
			break;

			case 12:
			system("cls");
			break;

			default:
			cout << "Please enter a valid option! " << endl;
			break;

		}

	}while (option != 0);

	return 0;
}