#include "sift.h"

namespace sotaslam {
namespace features {
    sift::sift(): extractor_(cv::SIFT::create(1600, 3))  {
        // extractor_ = cv::SIFT::create(1600, 3);
    }

    void sift::extract_from(const cv::Mat img){
        std::vector<cv::KeyPoint> keypts = {};
        cv::Mat descriptors = {};

        std::cout << "sift::extract_from\n";

        extractor_->detectAndCompute(img, cv::noArray(), keypts, descriptors);
    }
}
}