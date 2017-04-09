//
//  TollgateScene.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#ifndef TollgateScene_hpp
#define TollgateScene_hpp

#include "cocos2d.h"
#include "Player.hpp"
#include "SimpleMoveController.hpp"
#include "ThreeDirectionController.hpp"

USING_NS_CC;

class TollgateScene : public cocos2d::Layer {
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(TollgateScene);
    
private:
    void addPlayer(TMXTiledMap *map);
};

#endif /* TollgateScene_hpp */
