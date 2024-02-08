#include"Accout.h"

// we gonna set the methods

void conti :: get_balance(double balance){
    bal = balance;
}

double conti :: retur_balance (){
    return bal;
} 

void conti :: get_name (std::string n){
    name = n;
    name = " lemin ";
}

std::string conti :: print_name(){
    
    return name;
}