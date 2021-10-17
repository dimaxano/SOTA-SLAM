#include <string>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;

/**
 * Creates list of paths to images
 * 
 * @data_dir - path to one of MidAir trajectory sequences
 * 
 */
void prepare_midair(const std::string& data_dir, std::vector<std::string>& images);