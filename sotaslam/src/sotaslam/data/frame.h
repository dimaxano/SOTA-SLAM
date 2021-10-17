#include <opencv2/core.hpp>

#include "features/base.h"


namespace sotaslam {
namespace data{
    class frame {
    public:
        frame(const cv::Mat img);

        void static set_extractor(features::extractor* extractor){
            extractor_.reset(extractor);
        }
    
    private:

        //! should be initialized externally via set_extractor 
        static std::unique_ptr<const features::extractor> extractor_;
    };
}
}