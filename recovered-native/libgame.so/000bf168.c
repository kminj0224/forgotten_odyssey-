/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf168  Symbol: vDrawFrame */

/* vDrawFrame(cocos2d::CCNode*, char const*, cocos2d::CCPoint, cocos2d::CCPoint, int, int) */

undefined8
vDrawFrame(CCNode *param_1,char *param_2,CCPoint param_3,CCPoint param_4,int param_5,int param_6)

{
  CCSpriteFrameCache *this;
  int *piVar1;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  CCPoint local_18;
  CCPoint local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  piVar1 = (int *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this,param_2);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame((CCSpriteFrame *)piVar1);
    (**(code **)(*piVar1 + 0x3c))(piVar1,&local_18);
    (**(code **)(*piVar1 + 0x74))(piVar1,&param_5);
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,in_stack_00000008,in_stack_0000000c);
  }
  return CONCAT44(local_18,piVar1);
}


