#pragma once 

#include <iostream>
#include <fstream>
#include <map>
#include <locale>
#include <string>
#include <regex>

class BitcoinExchange {
    private:
    std::string _lec;

    public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &bitcoinExchange);
    BitcoinExchange &operator=(BitcoinExchange const &bitcoinExchange);
    
    BitcoinExchange(std::string bitcoinExchange);
    std::map<std::string, double> _graph;
    void execut();
};