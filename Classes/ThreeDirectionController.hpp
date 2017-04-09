//
//  ThreeDirectionController.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef ThreeDirectionController_hpp
#define ThreeDirectionController_hpp

#include "cocos2d.h"
#include "Controller.hpp"

using namespace cocos2d;

class ThreeDirectionController : public Controller {
public:
    CREATE_FUNC(ThreeDirectionController);
    virtual bool init();
    virtual void update(float dt);
    
    //设置X方向的移动速度
    void setiXSpeed(int iSpeed);
    
    //设置Y方向的移动速度
    void setiYSpeed(int iSpeed);
    
private:
    int m_iXSpeed;
    int m_iYSpeed;
    
    //注册屏幕触摸事件
    void registeTouchEvent();

};

#endif /* ThreeDirectionController_hpp */
