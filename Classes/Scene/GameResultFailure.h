#pragma once

#include "cocos2d.h"
#include"SimpleAudioEngine.h"
class GameResultFailure : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();

	// a selector callback
	void BackToMain(float dt);
	CREATE_FUNC(GameResultFailure);
	virtual void onExit();
	virtual void onExitTransitionDidStart();
	virtual void cleanup();
};
