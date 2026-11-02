/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001242ac  Symbol: GameEnd_Stage_Number */

/* GameScene::GameEnd_Stage_Number(int, int) */

void __thiscall GameScene::GameEnd_Stage_Number(GameScene *this,int param_1,int param_2)

{
  int iVar1;
  CCNode *pCVar2;
  int *this_00;
  undefined4 uVar3;
  CCSpriteFrameCache *pCVar4;
  CCTexture2D *pCVar5;
  code *pcVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  undefined8 uVar7;
  float extraout_s1_00;
  float extraout_s1_01;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_001243f8 + 0x1242b8),0xe);
  this_00 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,1);
  (**(code **)(*this_00 + 0xec))(this_00,0);
  pcVar6 = *(code **)(*this_00 + 0xd0);
  uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,1);
  (*pcVar6)(this_00,uVar3,1);
  pcVar6 = *(code **)(*this_00 + 0xd0);
  uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,2);
  (*pcVar6)(this_00,uVar3,1);
  pcVar6 = *(code **)(*this_00 + 0xd0);
  uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,3);
  (*pcVar6)(this_00,uVar3,1);
  iVar1 = DAT_001243fc;
  pCVar4 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar4,(char *)(iVar1 + 0x124320));
  pCVar5 = (CCTexture2D *)(**(code **)(*this_00 + 0x118))(this_00);
  uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,extraout_s0,extraout_s1);
  uVar7 = Draw_Number((CCLayer *)this_00,pCVar5,(char *)0x0,local_38,local_34,1,1,(float)uVar7,
                      (float)((ulonglong)uVar7 >> 0x20),SUB41(param_1,0),SUB41(DAT_00124400,0));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawImage((CCNode *)this_00,(char *)(DAT_0012440c + 0x124376),local_30,local_2c,2);
  pCVar5 = (CCTexture2D *)(**(code **)(*this_00 + 0x118))(this_00);
  uVar7 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,extraout_s0_00,extraout_s1_00);
  Draw_Number((CCLayer *)this_00,pCVar5,(char *)0x0,local_28,local_24,3,3,(float)uVar7,
              (float)((ulonglong)uVar7 >> 0x20),SUB41(param_2,0),SUB41(DAT_00124400,0));
  pCVar2 = (CCNode *)(**(code **)(*this_00 + 0x90))(this_00);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,extraout_s0_01,extraout_s1_01);
  vDrawFrame(pCVar2,(char *)(DAT_0012441c + 0x1243e0),local_20,local_1c,300);
  pCVar4 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar4,(char *)(iVar1 + 0x124320));
  return;
}


