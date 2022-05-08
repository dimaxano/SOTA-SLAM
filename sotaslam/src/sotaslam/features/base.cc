#include "sotaslam/features/base.h"
#include "sotaslam/features/sift.h"

namespace sotaslam {
namespace features {
    std::unique_ptr<features::base> build_feature_extractor(const std::string& method){
        if(method == "sift"){
            return std::make_unique<sift>();
        } else {
            // feature_extractor_ = std::make_shared<sift>();
            throw std::invalid_argument("Given feature extractor not implemented");
        }
    }
}
}