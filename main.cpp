#include<iostream>
using namespace std;

int main() {
	//login credentials
	int username = 0, pass = 0, i = 0;

	while (i == 0) {
		cout << "Enter your Employee ID: ";
		cin >> username;
		cout << "Enter your password: ";
		cin >> pass;
		if (username == 323 && pass == 7384) {
			i++;
		}//end of 1st if.
		else if (username == 211 && pass == 8754) {
			i++;
		}//end of 2nd if.
		else
			cout << "Invalid ID or Password. Please Enter again." << endl;
	}//end of while loop.
	cout << "-----------------------------------------------------------\n";
	cout << "---------------Welcome To The Branso's Hotel---------------\n";
	cout << "-----------------------------------------------------------\n";
	cout << "---------------------Good Morning Sir!---------------------\n";
	cout << "-----------------------------------------------------------\n";

	//declaring rooms and floors.
	bool floor_g[10]{ 1,1,0,1,0,0,0,1,1,0 };
	bool floor_1[10]{ 0,0,1,0,0,1,1,1,0,1 };
	bool floor_2[10]{ 1,1,1,0,1,0,0,1,0,0 };

	//selection of floor and room by user.
	int choice = 0, j = 0;
	int room = 0;

	while (j == 0) {
		cout << "Please select the floor in which you want to book the room.\n1. Ground Floor \n2. First Floor \n3. Second Floor " << endl;
		cout << "Selected floor: ";
		cin >> choice;
		cout << "-----------------------------------------------------------\n";

		switch (choice) {
		case 1:
			j++;
			char y_n;
			//Available rooms on ground floor.
			while (true) {
				cout << "Available rooms on ground floor are: \n";
				for (int k = 0; k < 10; k++) {
					if (floor_g[k] == 0) {
						cout << k + 1 << "  ";
					}//end of if.
				}//end of for.
				cout << endl;
				//Booked rooms on ground floor.
				cout << "Booked rooms on ground floor are: \n";
				for (int k = 0; k < 10; k++) {
					if (floor_g[k] == 1) {
						cout << k + 1 << "  ";
					}//end of if.
				}//end of for.
				cout << endl;
				cout << "-----------------------------------------------------------\n";
				//selection of room.
				cout << "Please select the room you want to book: \n";
				cout << "Selected room: ";
				cin >> room;
				if (room > 10) {
					cout << "Please select a valid room. Selected room is not available. \n";
					cout << "-----------------------------------------------------------\n";
				}//end of if.
				else {
					if (floor_g[room - 1] == 0) {
						cout << "Your room has been booked succesfully.\n";
						cout << "-----------------------------------------------------------\n";
						floor_g[room - 1] = 1;
						cout << "Do you want to continue your booking? (y/n): ";
						cin >> y_n;
						int sw1 = 0;
						while (sw1 == 0) {
							switch (y_n) {
							case 'y':
								sw1++;
								break;
							case 'n':
								sw1++;
								cout << "Thank you for booking your room in our hotel.\n";
								cout << "-----------------------------------------------------------\n";
								return 0;
								break;
							default:
								cout << "Invalid input. Please select again.\n";
								break;
							}//end of switch.
						}//end of while.
					}//end of if.
					else if (floor_g[room - 1] == 1) {
						cout << "This room is already booked.\nPlease select another room.\n";
						cout << "-----------------------------------------------------------\n";
					}//end  of else-if.
				}//end of else.
			}//end of while.
			break;
		case 2:
			j++;
			//Available rooms on first floor.
			y_n = 0;
			while (true) {
				cout << "Available rooms on first floor are: \n";
				for (int k = 0; k < 10; k++) {
					if (floor_1[k] == 0) {
						cout << k + 1 << "  ";
					}//end of if.
				}//end of for.
				cout << endl;
				//Booked rooms on first floor.
				cout << "Booked rooms on first floor are: \n";
				for (int k = 0; k < 10; k++) {
					if (floor_1[k] == 1) {
						cout << k + 1 << "  ";
					}//end of if.
				}//end of for.
				cout << endl;
				cout << "-----------------------------------------------------------\n";
				//selection of room.
				cout << "Please select the room you want to book: \n";
				cout << "Selected room: ";
				cin >> room;
				if (room > 10) {
					cout << "Please select a valid room. Selected room is not available. \n";
					cout << "-----------------------------------------------------------\n";
				}//end of if.
				else {
					if (floor_1[room - 1] == 0) {
						cout << "Your room has been booked succesfully.\n";
						cout << "-----------------------------------------------------------\n";
						floor_1[room - 1] = 1;
						cout << "Do you want to continue your booking? (y/n): ";
						cin >> y_n;
						int sw1 = 0;
						while (sw1 == 0) {
							switch (y_n) {
							case 'y':
								sw1++;
								break;
							case 'n':
								sw1++;
								cout << "Thank you for booking your room in our hotel.\n";
								cout << "-----------------------------------------------------------\n";
								return 0;
								break;
							default:
								cout << "Invalid input. Please select again.\n";
								break;
							}//end of switch.
						}//end of while.
					}//end of if.
					else if (floor_1[room - 1] == 1) {
						cout << "This room is already booked.\nPlease select another room.\n";
						cout << "-----------------------------------------------------------\n";
					}//end  of else-if.
				}//end of else.
			}//end of while.
			break;
		case 3:
			j++;
			//Available rooms on second floor.
			y_n = 0;
			while (true) {
				cout << "Available rooms on second floor are: \n";
				for (int k = 0; k < 10; k++) {
					if (floor_2[k] == 0) {
						cout << k + 1 << "  ";
					}//end of if.
				}//end of for.
				cout << endl;
				//Booked rooms on second floor.
				cout << "Booked rooms on second floor are: \n";
				for (int k = 0; k < 10; k++) {
					if (floor_2[k] == 1) {
						cout << k + 1 << "  ";
					}//end of if.
				}//end of for.
				cout << endl;
				cout << "-----------------------------------------------------------\n";
				//selection of room.
				cout << "Please select the room you want to book: \n";
				cout << "Selected room: ";
				cin >> room;
				if (room > 10) {
					cout << "Please select a valid room. Selected room is not available. \n";
					cout << "-----------------------------------------------------------\n";
				}//end of if.
				else {
					if (floor_2[room - 1] == 0) {
						cout << "Your room has been booked succesfully.\n";
						cout << "-----------------------------------------------------------\n";
						floor_2[room - 1] = 1;
						cout << "Do you want to continue your booking? (y/n): ";
						cin >> y_n;
						int sw1 = 0;
						while (sw1 == 0) {
							switch (y_n) {
							case 'y':
								sw1++;
								break;
							case 'n':
								sw1++;
								cout << "Thank you for booking your room in our hotel.\n";
								cout << "-----------------------------------------------------------\n";
								return 0;
								break;
							default:
								cout << "Invalid input. Please select again.\n";
								break;
							}//end of switch.
						}//end of while.
					}//end of if.
					else if (floor_2[room - 1] == 1) {
						cout << "This room is already booked.\nPlease select another room.\n";
						cout << "-----------------------------------------------------------\n";
					}//end  of else-if.
				}//end of else.
			}//end of while.
			break;
		default:
			cout << "Please select a valid floor. " << endl;
			break;
		}//end of switch.
	}//end of while loop.
	return 0;
}//end of main.