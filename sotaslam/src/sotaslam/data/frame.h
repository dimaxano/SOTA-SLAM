#include <opencv2/core.hpp>

namespace sotaslam {
namespace data{
    class frame {
    public:
        frame(const cv::Mat img);

        void static set_extractor(){
            
        }
    
    private:

        //! should be initialized externally via set_extractor 
        static std::unique_ptr<const features::base> extractor_ = nullptr;
    };
}
}