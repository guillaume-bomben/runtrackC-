#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chien monChien;
    Chat monChat;

    std::cout << "Comportement du chien :" << std::endl;
    monChien.crier();
    monChien.manger();

    std::cout << "\nComportement du chat :" << std::endl;
    monChat.crier();
    monChat.manger();

    return 0;
}
