#include "features/extractor.h"

#include <opencv2/core.hpp>

namespace sotaslam {

    enum class tracking_state_t {
        NOT_INITIALIZED,
        INITIALIZING,
        OK,
        VISUAL_LOST,
        LOST
    };

    class frontend {
    public:
        frontend(std::string& config);
        

        /**
         * After that I should be able to get actual world->cam pose
         * 1. Extract features from the image
         * 2. Initialization 
         * 
         */
        tracking_state_t process_frame(const cv::Mat img);

    private:
            
        tracking_state_t tracking_state_ = tracking_state_t::NOT_INITIALIZED;

    };
}