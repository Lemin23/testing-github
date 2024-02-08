#include<iostream>
#include"Accout.h"
#include<string>

int main() {
    conti lemin;
    lemin.get_balance(1000.0);
    lemin.get_name("lemin");
    conti bechri;

    std::cout<<lemin.retur_balance();
    std::cout<<lemin.print_name();

    return 0 ;
}