#pragma once
#include"cocos2d.h"
#include"Core/Sprite/Hero.h"
class EnemySoldier;		//������

USING_NS_CC;
class Tower :public Sprite
{
public:
	ProgressTimer * blood;   //Ѫ��
	int bloodNum;  //Ѫ��
	Vec2 initPos;
	Vec2 attackTowerPos;
	int deadRewardmoney;	//���������������
	int deadRewardExp;		//�����������������
	int attackMinusNum;		//ÿ�δ��˵ĵ�Ѫ��
	Rect* attack_rect;
	void initBloodBar();
	void initTowerAttr(int attackAbility, int _bloodNum, int _rewardMoney, int _rewardExp,Hero* hero);//�������ʼ����������
	void attackHero(float dt);
	void minusBlood(int num, Node* attacker);
	Hero* enemyHero;
	Vector<EnemySoldier*> *enemySoldierOfTower;
	bool isAttacking;
	void scheduleAttack();
	void unscheduleAttack();
};