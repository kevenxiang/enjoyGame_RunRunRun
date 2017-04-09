//
//  ControllerListener.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef ControllerListener_hpp
#define ControllerListener_hpp

#include "cocos2d.h"
using namespace cocos2d;

class ControllerListener {
public:
    //设置目标坐标
    virtual void setTagPosition(int x, int y) = 0;
    
    //获取目标坐标
    virtual Point getTagPosition() = 0;
};

#endif /* ControllerListener_hpp */
