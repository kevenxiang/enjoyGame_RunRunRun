//
//  Controller.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef Controller_hpp
#define Controller_hpp

#include "cocos2d.h"
#include "ControllerListener.hpp"

using namespace cocos2d;

class Controller : public Node {
public:
    //设置监听对象
    void setControllerListener(ControllerListener *controllerListener);
protected:
    ControllerListener *m_controllerListener;
};

#endif /* Controller_hpp */
