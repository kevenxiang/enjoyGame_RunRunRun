//
//  WinScene.hpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/7.
//
//

#ifndef WinScene_hpp
#define WinScene_hpp

#include "cocos2d.h"
using namespace cocos2d;

class WinScene : public Layer {
public:
    static Scene *createScene();
    CREATE_FUNC(WinScene);
    virtual bool init();
};

#endif /* WinScene_hpp */
