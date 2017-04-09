//
//  Player.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef Player_hpp
#define Player_hpp

#include "cocos2d.h"
#include "Entity.hpp"

class Player : public Entity {
public:
    CREATE_FUNC(Player);
    virtual bool init();
    void run();
    
    void setTiledMap(TMXTiledMap *map);
    
    void setViewPointByPlayer();
    
private:
    
    
    virtual void setTagPosition(int x, int y);
    
    TMXTiledMap *m_map;
    
private:
    //标记主角是否碰撞了障碍物，在反弹中
    bool isJumping;
    
    //检测碰撞的地图层
    TMXLayer *meta;
    
    //将像素左边转换为地图格子坐标
    Point tileCoordForPosition(Point pos);
};

#endif /* Player_hpp */


















