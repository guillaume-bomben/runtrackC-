#include <iostream>
#include "Contact.hpp"

int main() {
    Contact contact1("Alice", 123456789);
    Contact contact2("Bob", 987654321);

    std::cout << "Contacts initiaux : " << std::endl;
    contact1.afficherInfos();
    contact2.afficherInfos();

    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;

    copieContact1.setNumero(111111111);
    copieContact2.setNumero(222222222);

    std::cout << "\nCopies des contacts avec numéros modifiés : " << std::endl;
    copieContact1.afficherInfos();
    copieContact2.afficherInfos();

    std::cout << "\nContacts originaux : " << std::endl;
    contact1.afficherInfos();
    contact2.afficherInfos();

    return 0;
}