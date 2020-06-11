#pragma once
#include "cocos2d.h"
USING_NS_CC;

class Character : public cocos2d::Sprite {
public:
	static Character* _Character; 
	Sprite* spDino;
	void addDino(Scene* scene);
	Vector<SpriteFrame*> getAnimation(const char* format, int count);
	PhysicsBody* dinoPhysicBody = PhysicsBody::createBox(Size(1200, 500));
	void changeAnimate(Animate* newAnimate);
	cocos2d::Animation* idleAnim;
	cocos2d::Animation* jumpAnim;
	cocos2d::Animation* runAnim;

	cocos2d::Animate* Idle();
	cocos2d::Animate* Run();
	cocos2d::Animate* Jump();

public:
	static Character* myCharacter();
	
};