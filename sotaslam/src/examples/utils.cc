#include <iostream>
#include <sstream>
#include <filesystem>
#include <iomanip>

#include "utils.h"


void prepare_midair(const std::string& data_dir, std::vector<std::string>& images){
    std::cout << "Preparing MidAir dataset: " << data_dir << std::endl;

    fs::path file_path(data_dir);

    size_t idx = 0;
    while (true){
    
        std::ostringstream file_name;
        file_name << std::setfill('0') << std::setw(6) << idx << ".JPEG";
        file_path.replace_filename(file_name.str());

        if(!fs::exists(file_path)){
            break;
        }
        
        images.push_back(file_path.string());

        idx++;

        // std::cout << f_path << std::endl;
    }

    std::cout << "MidAir dataset ready: " << images.size() << " found.\n";
}