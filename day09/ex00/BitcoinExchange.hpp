#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    std::map<std::string, std::string> tatabase;
    // std::map<std::string, std::string> input;

public:
    BitcoinExchange();
    BitcoinExchange(std::string &);
    BitcoinExchange(BitcoinExchange &);
    ~BitcoinExchange();

    std::map<std::string, std::string> &gettatabase(void);

    void handle_input(std::ifstream &);
    void print_result(std::string &d, float &v);

    BitcoinExchange &operator=(BitcoinExchange &);
};