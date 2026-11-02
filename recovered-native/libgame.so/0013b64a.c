/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b64a  Symbol: startWithTarget */

/* cocos2d::CCToggleVisibility::startWithTarget(cocos2d::CCNode*) */

void __thiscall
cocos2d::CCToggleVisibility::startWithTarget(CCToggleVisibility *this,CCNode *param_1)

{
  byte bVar1;
  code *pcVar2;
  
  CCAction::startWithTarget((CCAction *)this,param_1);
  pcVar2 = *(code **)(*(int *)param_1 + 0x6c);
  bVar1 = (**(code **)(*(int *)param_1 + 0x68))(param_1);
  (*pcVar2)(param_1,bVar1 ^ 1);
  return;
}


