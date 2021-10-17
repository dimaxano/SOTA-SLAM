#include <iostream>
#include <opencv2/features2d.hpp>

#include "sotaslam/data/frame.h"
#include "sotaslam/features/base.h"

namespace sotaslam {
namespace features {
    class sift : public base {
    public:
        //! redefine default constructor to initialize internal state in the right way
        sift();
        sift(sift&& obj) = default;
        sift(const sift& obj) = default;
        sift& operator=(sift&& obj) = default;
        sift& operator=(const sift& obj) = default;
        ~sift() = default;

        void extract_from(const cv::Mat img) override;
    private:
        cv::Ptr<cv::SIFT> extractor_ = nullptr;
    };
} // features
} // sotaslam