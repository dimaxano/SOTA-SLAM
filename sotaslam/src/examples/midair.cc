#include <opencv2/imgcodecs.hpp>

#include "utils.h"

#include "sotaslam/frontend.h"

int main(){
    std::vector<std::string> images {};
    const std::string data_dir = "/home/dimeow/datasets/MidAir/Kite_training/sunny/color_left/trajectory_0000/";

    prepare_midair(data_dir, images);

    // prepare SLAM system
    auto bla = std::string("bla");
    sotaslam::frontend front = sotaslam::frontend(bla);

    for(const std::string& im_path : images){
        cv::Mat img = cv::imread(im_path, cv::IMREAD_GRAYSCALE);
        front.process_frame(img);
        break;
    }

    return 0;
}