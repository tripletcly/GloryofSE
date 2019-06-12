#pragma once
#include "cocos2d.h"
#include"Core/Controller/GameController.h"
#include"Scene/SelectHeroScene.h"
#include"Core/Controller/StoreScene.h"
#include"Core/Controller/EquipScene.h"
#include"ui/CocosGUI.h"
#include"Scene/GlobalDefine.h"
#include"proj.win32/MyUtility.h"
//ȫ�ֱ���
#include<vector>
extern vector<int> equipmentBoughtList;//��ǵ�ǰӵ��װ����״̬
extern vector<int> equipmentEquippedList;//��ǵ�ǰװ��װ����״̬


class GameScene : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	void storeItemCallback(Ref *pSender);// �����̳�
	void equipmentItemCallback(Ref *pSender);//����װ���鿴
	void  displaymoney(float dt);   //��ʾ���
	void  displayexp(float dt);     //��ʾ����
	void  displayskillicon();
	CREATE_FUNC(GameScene);
};