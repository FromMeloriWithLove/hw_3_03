//1. Пакетик чая - кружка, человек - шляпа, тетрадь - ручка

#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
    MobilePhone* zte = new MobilePhone {"ZTE", "Blade 20 Smart", 109};
    Person* pers = new Person {"Oleg", 25, zte};
    pers->Print();
    delete zte;
    delete pers;
}