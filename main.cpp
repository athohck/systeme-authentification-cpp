#include <iostream>
#include <string>


class account{
public:

std::string id, password;

account(){
    //Declaration variable vide
    id = "";                
    password = "";
}

void createaccount(){

    //demande a l'utilisateur de cree un identifiant et un mot de passe
    std::cout << " Cree un identifiant : ";
    std::cin >> id;
    std::cout << "\n";
    std::cout << " Cree un mot de passe : ";
    std::cin >> password;

    std::cout << " compte cree avec succee " << std::endl;

}

void checkaccount(){
    std::string checkId, checkPassword;
//Demande a l'utilisateur de rentrer sont identifiant et son mot de passe puis verifie si c'est exact
    std::cout << " Rentre ton identifiant : ";
    std::cin >> checkId;
    std::cout << "\n";
    std::cout << " Entre ton mot de passe : ";
    std::cin >> checkPassword;

    //If afin de verifier si les entrée saisi sont identique 
    if (checkId == id && checkPassword == password)
    {
        std::cout << " Ton identifiant et mot de passe sont correcte ";
    }
    else{
        std::cout << " Ton identifiant ou mot de passe sont incorrecte ";
    }
    
}






};



int main(){

    account accountUser;
    accountUser.createaccount();
    accountUser.checkaccount();






    return 0;
}