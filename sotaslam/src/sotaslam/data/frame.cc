#include "frame.h"

namespace sotaslam {
namespace data {
    frame::frame(cv::Mat img){
        // run feature extraction

        extractor_->extract_from(img, keypoints_, descriptors_);

    }

    void frame::initialize_extractor(const std::string method){
        extractor_ = features::build_feature_extractor(method);
    }
}
}