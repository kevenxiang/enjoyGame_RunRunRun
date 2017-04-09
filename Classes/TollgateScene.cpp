//
//  TollgateScene.cpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#include "TollgateScene.hpp"

Scene *TollgateScene::createScene() {
    auto scene = Scene::create();
    auto layer = TollgateScene::create();
    scene->addChild(layer);
    return scene;
}

bool TollgateScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //加载Tiled地图，添加到场景中
    TMXTiledMap *map = TMXTiledMap::create("level01.tmx");
    this->addChild(map);
    
    addPlayer(map);
    
    return true;
}

void TollgateScene::addPlayer(TMXTiledMap *map) {
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //创建精灵
    auto playerSprite = Sprite::create("player.png");
    
    //将精灵绑定到玩家对象上
    Player *mPlayer = Player::create();
    mPlayer->bindSprite(playerSprite);
    mPlayer->run();
    mPlayer->setTiledMap(map);
    
    //加载对象层
    TMXObjectGroup *objGroup = map->getObjectGroup("objects");
    
    //加载玩家坐标对象
    ValueMap playerPointMap = objGroup->getObject("PlayerPoint");
    float playerX = playerPointMap.at("x").asFloat();
    float playerY = playerPointMap.at("y").asFloat();
    
    //设置玩家坐标
    mPlayer->setPosition(Point(playerX, playerY));
    
    //将玩家添加到地图
    map->addChild(mPlayer);
    
    
    /*
    //创建玩家简单移动控制器
    SimpleMoveController *simpleMoveController = SimpleMoveController::create();
    //设置移动速度
    simpleMoveController->setiSpeed(1);
    //控制器要添加到场景中才能让update被调用
    this->addChild(simpleMoveController);
    //设置控制器到主角身上
    mPlayer->setController(simpleMoveController);
     */
    
    //创建玩家控制器
    ThreeDirectionController *threeMoveController = ThreeDirectionController::create();
    threeMoveController->setiXSpeed(1);
    threeMoveController->setiYSpeed(0);
    
    //控制器要添加到场景中才能获得update事件
    this->addChild(threeMoveController);
    //设置控制器到主角身上
    mPlayer->setController(threeMoveController);
    
}




































