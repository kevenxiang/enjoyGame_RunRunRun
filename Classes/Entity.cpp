//
//  Entity.cpp
//  enjoyGame_RunRunRun
//
//  Created by xiang on 2017/4/2.
//
//

#include "Entity.hpp"

void Entity::bindSprite(cocos2d::Sprite *sprite) {
    m_sprite = sprite;
    this->addChild(m_sprite);
}

void Entity::setController(Controller *controller) {
    this->m_controller = controller;
    m_controller->setControllerListener(this);
}

void Entity::setTagPosition(int x, int y) {
    setPosition(Point(x, y));
}

Point Entity::getTagPosition() {
    return getPosition();
}
