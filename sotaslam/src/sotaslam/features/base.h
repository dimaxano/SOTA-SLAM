#pragma once

#include <opencv2/features2d.hpp>

namespace sotaslam {
namespace features {
    class base {
    public:
        virtual void extract_from(const cv::Mat img, std::vector<cv::KeyPoint>& keypts, cv::Mat& descriptors) = 0;
    };

    std::unique_ptr<features::base> build_feature_extractor(const std::string& method);

} // namespace features 
} // namespace sotaslam