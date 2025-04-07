//
// Created by anshc on 4/4/25.
//

#ifndef DATAFRAME_HPP
#define DATAFRAME_HPP
#include <string>
#include <vector>
#include <memory>a
struct column {
    std::string name;
    std::vector <std::string> data;
    std::bool has_header = true;
};

class dataframe {
    std::vector<std::shared_ptr<column>> columns;
};



#endif //DATAFRAME_HPP
