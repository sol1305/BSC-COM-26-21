#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string firstName;
    string lastName;
    string phoneNumber;

public:
    
    Contact() : firstName(""), lastName(""), phoneNumber("") {}
    Contact(const string& first, const string& last, const string& phone)
        : firstName(first), lastName(last), phoneNumber(phone) {}

    
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getPhoneNumber() const { return phoneNumber; }

    
    bool operator==(const Contact& other) const {
        return (firstName == other.firstName && lastName == other.lastName && phoneNumber == other.phoneNumber);
    }
};

int main() {
    Contact contact1; 
    Contact contact2("mkandawire", "solophina", "0886756433");
    Contact contact3("solophina", "mkandawire", "0881334233");


    cout << "Contact 1: " << contact1.getFirstName() << " " << contact1.getLastName() << " - "
              << contact1.getPhoneNumber() << endl;
    cout << "Contact 2: " << contact2.getFirstName() << " " << contact2.getLastName() << " - "
              << contact2.getPhoneNumber() <<endl;
};