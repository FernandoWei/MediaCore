//
//  MediaCommonDefines.h
//  MediaCoreDemo
//
//  Created by Hongqiang.Wei on 17/6/17.
//  Copyright © 2017年 Hongqiang.Wei. All rights reserved.
//

#ifndef MediaCommonDefines_h
#define MediaCommonDefines_h

namespace MediaCore {
    enum class MediaEvent {
    };
    
    enum class MediaStatus {
        mc_ok,
        mc_err,
    };
    
    enum class MediaFrameType {
        mc_ffmpeg_avpacket,
        mc_ffmpeg_avframe,
        mc_apple_cvpixelbuffer,
    };
    
    enum class MediaDataType {
        mc_pcm,
        mc_aac,
        mc_rgb,
        mc_yuv420p,
        mc_yuv420sp,
    };
    
}


#endif /* MediaCommonDefines_h */
