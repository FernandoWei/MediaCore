//
//  CMediaProcessor.hpp
//  MediaCoreDemo
//
//  Created by Hongqiang.Wei on 17/6/17.
//  Copyright © 2017年 Hongqiang.Wei. All rights reserved.
//

#ifndef CMediaProcessor_hpp
#define CMediaProcessor_hpp

#include "MediaObject.hpp"

namespace MediaCore {
    class CMediaProcessor : public MediaObject {
        
    public:
        CMediaProcessor();
        ~CMediaProcessor();
    public:
        void add_output(const std::shared_ptr<CMediaProcessor> processor);
        void remove_output(const std::shared_ptr<CMediaProcessor> processor);
        
    };
}

#endif /* CMediaProcessor_hpp */
