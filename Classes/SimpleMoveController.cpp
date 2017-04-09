//
//  SimpleMoveController.cpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#include "SimpleMoveController.hpp"

bool SimpleMoveController::init() {
    this->m_iSpeed = 0;
    
    //每一帧都要调用update函数，所以要这样设置--对象通过scheduleUpdate方法来注册update被调用的权限
    this->scheduleUpdate();
    
    return true;
}

void SimpleMoveController::update(float dt) {
    if (m_controllerListener == NULL) {
        return;
    }
    
    //增加移动对象的x坐标值
    Point pos = m_controllerListener->getTagPosition();
    pos.x += m_iSpeed;
    m_controllerListener->setTagPosition(pos.x, pos.y);
}

void SimpleMoveController::setiSpeed(int iSpeed) {
    this->m_iSpeed = iSpeed;
}























