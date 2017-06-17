//
//  MediaData.hpp
//  MediaCoreDemo
//
//  Created by Hongqiang.Wei on 17/6/17.
//  Copyright © 2017年 Hongqiang.Wei. All rights reserved.
//

#ifndef MediaData_hpp
#define MediaData_hpp

#include <string>

namespace MediaCore {
    class MediaData : public MediaObject {
    public:
        MediaData() = default;
        ~MediaData();
        
    public:
        std::string& getType() const;
        
    private:
        void* m_data;
        int64_t m_dataSize;
        std::string m_type;
    };
}

#endif /* MediaData_hpp */
