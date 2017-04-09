//
//  Entity.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef Entity_hpp
#define Entity_hpp

#include "cocos2d.h"
#include "ControllerListener.hpp"
#include "Controller.hpp"

USING_NS_CC;
class Entity : public Node, public ControllerListener {
public:
    //绑定精灵对象
    void bindSprite(Sprite *sprite);
    
    //设置控制器
    void setController(Controller *controller);
    
    //实现SimpleMoveListener接口的方法
    virtual void setTagPosition(int x, int y);
    virtual Point getTagPosition();
    
protected:
    Sprite *m_sprite;
    
    Controller *m_controller;

};

#endif /* Entity_hpp */

















