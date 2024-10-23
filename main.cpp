#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "json.hpp"

// stock-quote-alert.exe PETR4 22.67 22.59 

float get_current_value() {
    
    std::string apiKey = "3YBO2RYBTSWKBIUB";
    srand (static_cast <unsigned> (time(0)));
    // float r = 20 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(24-20)));
    // std::cout << "r: " << r << std::endl;
    int value = 20 + rand() % (26 - 20);


    // "https://www.alphavantage.co/query?function=TIME_SERIES_INTRADAY&symbol=" + argv[1] + "&apikey=" + apiKey
    return static_cast<float>(value);
}


int main(int argc, char *argv[]) {
    
    
    float buy_value = strtof(argv[2], NULL);
    std::cout << "sell value: " << buy_value << std::endl;
    float sell_value = strtof(argv[3], NULL);
    std::cout << "buy value: " << sell_value << std::endl;
    
    float curr_val = get_current_value();
    std::cout << "current value: " << curr_val << std::endl;

    if (curr_val > sell_value) {
        std::cout << "SELL SELL SELL" << std::endl;
    } else if (curr_val < buy_value) {
        std::cout << "BUY BUY BUY" << std::endl;
    }

}

    // Url{"https://www.alphavantage.co/query?function=TIME_SERIES_INTRADAY&symbol=" + argv[1] + "&apikey=" + apiKey}

//  3YBO2RYBTSWKBIUB