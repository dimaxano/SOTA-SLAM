#include "sotaslam/frontend.h"
#include "sotaslam/data/frame.h"
#include "sotaslam/features/base.h"

namespace sotaslam {
    frontend::frontend(std::string& config) {
        data::frame::initialize_extractor("sift"); // name of extractor should be taken from config
    }

    tracking_state_t frontend::process_frame(const cv::Mat img){
        
        // build frame representation.
        // Time heavy because of feature extraction inside
        data::frame frm(img);

        if(tracking_state_ == tracking_state_t::NOT_INITIALIZED){
            tracking_state_ = tracking_state_t::INITIALIZING;
            return tracking_state_;
        }

        // store previous keypoints somewhere
        // match to features from prev frame: match(data::frame& prev, data::frame& curr)
        // compute essential matrix from matches

        return tracking_state_t::OK;
    }
}