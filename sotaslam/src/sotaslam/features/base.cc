#include "sotaslam/features/base.h"
#include "sotaslam/features/sift.h"

namespace sotaslam {
namespace features {
    void build_feature_extractor(std::unique_ptr<base>& feature_extractor, const std::string& method){
        if(method == "sift"){
            feature_extractor = std::make_unique<sift>();
        } else {
            // feature_extractor_ = std::make_shared<sift>();
            throw std::invalid_argument("Given feature extractor not implemented");
        }

        return;
    }
}
}