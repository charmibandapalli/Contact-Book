#include <iostream>
#include <map>
using namespace std;

map<string, string> contacts;

void addContact(string name, string number) {
    contacts[name] = number;
}

void showContacts() {
    for (auto &c : contacts)
        cout << c.first << ": " << c.second << endl;
}

int main() {
    addContact("Alice", "1234567890");
    addContact("Bob", "9876543210");
    showContacts();
}
