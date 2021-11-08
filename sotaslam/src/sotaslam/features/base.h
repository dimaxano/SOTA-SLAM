#pragma once

#include <opencv2/features2d.hpp>

namespace sotaslam {
namespace features {
    class base { // TODO: rename to feature_extractor_interface
    public:
        virtual void extract_from(const cv::Mat img) = 0;
    };

    void build_feature_extractor(std::unique_ptr<base>& feature_extractor, const std::string& method);
} // namespace features 
} // namespace sotaslam