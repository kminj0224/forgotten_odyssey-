/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e186  Symbol: setNormalImage */

/* cocos2d::CCMenuItemSprite::setNormalImage(cocos2d::CCNode*) */

undefined8 __thiscall
cocos2d::CCMenuItemSprite::setNormalImage(CCMenuItemSprite *this,CCNode *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  CCMenuItemSprite *pCStack_18;
  CCNode *pCStack_14;
  
  pCStack_18 = this;
  pCStack_14 = param_1;
  if (param_1 != (CCNode *)0x0) {
    uVar2 = (**(code **)(*(int *)this + 0xcc))(this,param_1,0,1);
    pcVar1 = *(code **)(*(int *)param_1 + 0x74);
    CCPoint::CCPoint((CCPoint *)&pCStack_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    (*pcVar1)(param_1,&pCStack_18);
    (**(code **)(*(int *)param_1 + 0x6c))(param_1,1);
  }
  if (*(int *)(this + 0x114) != 0) {
    (**(code **)(*(int *)this + 0xd0))(this,*(int *)(this + 0x114),1);
  }
  *(CCNode **)(this + 0x114) = param_1;
  return CONCAT44(pCStack_14,pCStack_18);
}


