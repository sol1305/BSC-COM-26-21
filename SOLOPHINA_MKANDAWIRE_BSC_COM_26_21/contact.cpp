#include <iostream>
#include <string>
using namespace std;
class Contact {
public:
    string firstName;
    string lastName;
    string phoneNumber;
};

class PhoneBook {
private:
    Contact* contacts;
    int numContacts;
    int size;

public:
    
    PhoneBook() : contacts(new Contact[5]), numContacts(0), size(5) {}

    
    ~PhoneBook() {
        delete[] contacts;
    }

    
    void addContact() {
        string firstName, lastName, phoneNumber;
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter phone number: ";
        cin >> phoneNumber;

        
        bool exists = false;
        for (int i = 0; i < numContacts; ++i) {
            if (contacts[i].phoneNumber == phoneNumber) {
                exists = true;
                break;
            }
        }

        if (exists) {
            cout << "Contact with this phone number already exists." <<endl;
        } else {
            if (numContacts < size) {
                contacts[numContacts].firstName = firstName;
                contacts[numContacts].lastName = lastName;
                contacts[numContacts].phoneNumber = phoneNumber;
                numContacts++;
                cout << "Contact added successfully." << endl;
            } else {
            cout << "Phone book is full,Cannot add more contacts." <<endl;
            }
        }
    }

    
    void showAllContacts() {
        if (numContacts == 0) {
        cout << "Phone book is empty." <<endl;
        } else {
            cout << "All contacts:" << endl;
            for (int i = 0; i < numContacts; ++i) {
                cout << "Name: " << contacts[i].firstName << " " << contacts[i].lastName
                          << ", Phone: " << contacts[i].phoneNumber <<endl;
            }
        }
    }


    void run() {
        char choice;
        do {
            cout << "Choose an option:" <<endl;
            cout << "1. Add Contact" <<endl;
            cout << "2. Show All Contacts" <<endl;
            cout << "3. Exit" <<endl;
            cin >> choice;

            switch (choice) {
                case '1':
                    addContact();
                    break;
                case '2':
                    showAllContacts();
                    break;
                case '3':
            cout << "Exiting..." <<endl;
                    break;
                default:
            cout << "Invalid choice. Please try again." <<endl;
            }
        } while (choice != '3');
    }
};

int main() {
    PhoneBook phoneBook;
    phoneBook.run();
    return 0;
}
