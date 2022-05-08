#include <iostream>
#include <opencv2/features2d.hpp>

#include "sotaslam/features/base.h"

namespace sotaslam {
namespace features {
    class sift : public base {
    public:
        //! redefine default constructor to initialize internal state in the right way
        sift();

        void extract_from(const cv::Mat img, std::vector<cv::KeyPoint>& keypts, cv::Mat& descriptors) override;
    private:
        cv::Ptr<cv::SIFT> extractor_ = nullptr;
    };
} // features
} // sotaslam