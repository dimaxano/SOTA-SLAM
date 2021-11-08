#include "sotaslam/frontend.h"
// #include "sotaslam/data/frame.h"
#include "sotaslam/features/base.h"

namespace sotaslam {
    frontend::frontend(std::string& config) {
        std::unique_ptr<features::base> feature_extractor = nullptr;
        features::build_feature_extractor(feature_extractor, "sift");

        // data::frame::set_extractor(extractor);
    }

    tracking_state_t frontend::process_frame(const cv::Mat img){
        
        // build frame representation.
        // Time heavy because of feature extraction inside
        // data::frame frm(img);

        if(tracking_state_ == tracking_state_t::NOT_INITIALIZED){
            // run initialization here
        }

        // store previous keypoints somewhere
        // match to features from prev frame: match(data::frame& prev, data::frame& curr)
        // compute essential matrix from matches

        return tracking_state_t::OK;
    }
}