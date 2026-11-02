/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ae30  Symbol: init_Market */

/* UI_Notice::init_Market(cocos2d::CCLayer*, int, int) */

CCLayer * UI_Notice::init_Market(CCLayer *param_1,int param_2,int param_3)

{
  int *piVar1;
  CCArray *this;
  int iVar2;
  int iVar3;
  CCAction *pCVar4;
  int in_r3;
  uint uVar5;
  float in_s0;
  float fVar6;
  float in_s1;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_0011aed8 + 0x11ae5c),(char *)(DAT_0011aedc + 0x11ae5e),
                   (CCNode *)param_2,local_20,local_1c,2000,true,true);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  this = (CCArray *)(**(code **)(*piVar1 + 0x58))();
  iVar2 = cocos2d::CCArray::count(this);
  for (uVar5 = 0; (int)uVar5 < iVar2; uVar5 = uVar5 + 1) {
    piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar5);
    iVar3 = (**(code **)(*piVar1 + 0xa0))();
    if (iVar3 != -1) {
      fVar6 = (float)(**(code **)(*piVar1 + 0xec))(piVar1,0);
      pCVar4 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar6);
      cocos2d::CCNode::runAction((CCNode *)piVar1,pCVar4);
    }
  }
  Notice_Marget_String_Draw((UI_Notice *)param_1,(CCLayer *)param_2,param_3,in_r3);
  return param_1;
}


