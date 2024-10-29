#ifndef EQUIPO_HPP
#define EQUIPO_HPP

#include <string>

using namespace std;

class Equipo
    {
        private:
            string code, name;
            float price;
            
        public:
            Equipo(string _code, string _name, float _price);
            string getCode();    
            string getName();
            float getPrice();
    };

#endif