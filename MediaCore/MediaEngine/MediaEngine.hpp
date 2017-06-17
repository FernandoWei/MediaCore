//
//  MediaEngine.hpp
//  MediaCoreDemo
//
//  Created by Hongqiang.Wei on 17/6/17.
//  Copyright © 2017年 Hongqiang.Wei. All rights reserved.
//

#ifndef MediaEngine_hpp
#define MediaEngine_hpp

#include <stdio.h>

namespace MediaCore {
    class MediaEngine : public MediaObject {
    public:
    
        MediaEngine() = default;
        MediaEngine(const MediaEngine& engine) = delete;
        MediaEngine(MediaEngine&& engine) = delete;
        MediaEngine& operator=(const MediaEngine& engine) = delete;
        MediaEngine& operator=(MediaEngine&& engine) = delete;
        ~MediaEngine();
        
    public:
        void start();
        void stop();
        void pause();
        
    public:
        void registerMediaEventHandler();
        
    private:
        
    };
}

#endif /* MediaEngine_hpp */
