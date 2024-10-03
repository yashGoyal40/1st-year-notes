#include <limits>
#include <iostream>
#include <string>

using namespace std;

class MedicalCollege {
public:
    string name;
    int establishmentYear;
    int totalSeats;
    int mbbsSeats;

    MedicalCollege() : name(""), establishmentYear(0), totalSeats(0), mbbsSeats(0) {}

    void displayDetails() const {
        cout << name << " ";
        cout << establishmentYear << " ";
        cout << totalSeats << " ";
        cout << totalSeats << " ";
        cout << endl;
    }

    bool admitStudents(int numStudents) {
        if (numStudents <= mbbsSeats) {
            mbbsSeats -= numStudents;
            cout << numStudents << " students admitted to " << name << endl;
            totalSeats = totalSeats - numStudents;
            cout << "Available Seats: " << totalSeats<< endl;
            return true;
        } else {
            cout << "Not enough seats available in " << name << endl;
            cout << "Cannot admit " << numStudents << " students." << endl;
            return false;
        }
    }
};

void displayAllColleges(const MedicalCollege& college1, const MedicalCollege& college2, const MedicalCollege& college3) {
    cout << "Medical College Details:" << endl;
    college1.displayDetails();
    college2.displayDetails();
    college3.displayDetails();
}

int main() {
    MedicalCollege college1, college2, college3;

  
    getline(cin, college1.name);
    cin >> college1.establishmentYear >> college1.totalSeats >> college1.mbbsSeats;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer

   
    getline(cin, college2.name);
    cin >> college2.establishmentYear >> college2.totalSeats >> college2.mbbsSeats;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer

 
    getline(cin, college3.name);
    cin >> college3.establishmentYear >> college3.totalSeats >> college3.mbbsSeats;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the input buffer

    int choice;
    do {
 
        if (!(cin >> choice)) {
            cout << "Invalid choice" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                displayAllColleges(college1, college2, college3);
                break;
            case 2: {
                int numStudents;
                if (!(cin >> numStudents)) {
                    cout << "Invalid input" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                college1.admitStudents(numStudents);
                break;
            }
            case 3:
                break;
            default:
                cout << "Invalid choice\nExiting the program" << endl;
        }

    } while (choice != 3 && !cin.fail());

    return 0;
}
    template <typename T>
    void func(){
	   return;
    }



