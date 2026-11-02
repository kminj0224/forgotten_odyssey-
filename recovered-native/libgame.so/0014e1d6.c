/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e1d6  Symbol: setLabel */

/* cocos2d::CCMenuItemLabel::setLabel(cocos2d::CCNode*) */

undefined8 __thiscall cocos2d::CCMenuItemLabel::setLabel(CCMenuItemLabel *this,CCNode *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  CCMenuItemLabel *pCStack_18;
  CCNode *pCStack_14;
  
  pCStack_18 = this;
  pCStack_14 = param_1;
  if (param_1 != (CCNode *)0x0) {
    uVar3 = (**(code **)(*(int *)this + 0xc4))(this,param_1);
    pcVar2 = *(code **)(*(int *)param_1 + 0x74);
    CCPoint::CCPoint((CCPoint *)&pCStack_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    (*pcVar2)(param_1,&pCStack_18);
    pcVar2 = *(code **)(*(int *)this + 0x80);
    uVar1 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
    (*pcVar2)(this,uVar1);
  }
  if (*(int *)(this + 0x118) != 0) {
    (**(code **)(*(int *)this + 0xd0))(this,*(int *)(this + 0x118),1);
  }
  *(CCNode **)(this + 0x118) = param_1;
  return CONCAT44(pCStack_14,pCStack_18);
}


