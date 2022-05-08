#include <opencv2/core.hpp>

#include <sotaslam/features/base.h>

namespace sotaslam {
namespace data{
    class frame {
    public:
        frame(const cv::Mat img);

        void static initialize_extractor(const std::string method);
    
    private:
        std::vector<cv::KeyPoint> keypoints_;
        cv::Mat descriptors_;

        //! should be initialized externally via set_extractor 
        inline static std::unique_ptr<features::base> extractor_;


    };
}
}