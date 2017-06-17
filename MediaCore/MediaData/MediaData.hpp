//
//  MediaData.hpp
//  MediaCoreDemo
//
//  Created by Hongqiang.Wei on 17/6/17.
//  Copyright © 2017年 Hongqiang.Wei. All rights reserved.
//

#ifndef MediaData_hpp
#define MediaData_hpp

#include "MediaObject.hpp"
#include "MediaCommonDefines.h"

namespace MediaCore {
    class MediaData : public MediaObject {
    public:
        MediaData() = default;
        ~MediaData();
        
    public:
        MediaFrameType getType() const { return m_type;};
        virtual uint8_t* data();
        
    private:
        uint8_t* m_data;
        int64_t m_dataSize;
        MediaFrameType m_type;
    };
    
    class VideoFrame : public MediaData {
        ;
    };
    
    class AudioFrame : public MediaData {
        ;
    };
    
    class MetaData : public MediaData {
    public:
        MetaData();
        ~MetaData();
    private:
        ;
    };
}

#endif /* MediaData_hpp */
