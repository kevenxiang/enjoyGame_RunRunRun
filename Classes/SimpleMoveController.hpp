//
//  SimpleMoveController.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef SimpleMoveController_hpp
#define SimpleMoveController_hpp

#include "cocos2d.h"
#include "Controller.hpp"

class SimpleMoveController : public Controller {
public:
    CREATE_FUNC(SimpleMoveController);
    virtual bool init();
    virtual void update(float dt);
    
    //设置移动速度
    void setiSpeed(int iSpeed);
private:
    int m_iSpeed;
};

#endif /* SimpleMoveController_hpp */













