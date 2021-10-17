#include <iostream>
#include <stdexcept>

#include "sotaslam/features/extractor.h"

namespace sotaslam {
namespace features{
    extractor::extractor(const std::string& method) {
        std::cout << "Extraeeeector!\n";

        if(method == "sift"){
            feature_extractor_ = std::make_shared<sift>();
        } else {
            // feature_extractor_ = std::make_shared<sift>();
            throw std::invalid_argument("Given feature extractor not implemented");
        }
    }

    bool extractor::run(const cv::Mat img) {
        std::cout << "rrrr\n";
        feature_extractor_->extract_from(img);

        return true;
    }
}
}