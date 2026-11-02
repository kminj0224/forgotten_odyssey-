/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf0bc  Symbol: vDrawFrame */

/* vDrawFrame(cocos2d::CCNode*, char const*, cocos2d::CCPoint, int, int) */

undefined8 vDrawFrame(CCNode *param_1,char *param_2,CCPoint param_3,int param_4,int param_5)

{
  CCSpriteFrameCache *this;
  CCSpriteFrame *pCVar1;
  int *piVar2;
  undefined4 in_stack_00000004;
  CCPoint local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar1 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this,param_2);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar1);
  (**(code **)(*piVar2 + 0x3c))(piVar2,&local_18);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar2,param_5,in_stack_00000004);
  return CONCAT44(local_18,piVar2);
}


