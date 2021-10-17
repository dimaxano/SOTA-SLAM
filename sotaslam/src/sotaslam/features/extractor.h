#include "sotaslam/features/sift.h"

namespace sotaslam {
namespace features {
    class extractor {
    public:
        extractor(const std::string& method);

        bool run(const cv::Mat img);
    private:
        std::vector<cv::KeyPoint> kpts_;

        std::shared_ptr<base> feature_extractor_ = nullptr;
    };
}
}