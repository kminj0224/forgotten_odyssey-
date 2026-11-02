/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf128  Symbol: vDrawFrame */

/* vDrawFrame(cocos2d::CCSpriteFrameCache*, cocos2d::CCNode*, char const*, cocos2d::CCPoint,
   cocos2d::CCPoint, int, int) */

int * vDrawFrame(CCSpriteFrameCache *param_1,CCNode *param_2,char *param_3,CCPoint param_4,
                CCPoint param_5,int param_6,int param_7)

{
  CCSpriteFrame *pCVar1;
  int *piVar2;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  CCPoint local_4;
  
  local_4 = param_4;
  pCVar1 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(param_1,param_3);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar1);
  (**(code **)(*piVar2 + 0x3c))(piVar2,&local_4);
  (**(code **)(*piVar2 + 0x74))(piVar2,&param_6);
  (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar2,in_stack_0000000c,in_stack_00000010);
  return piVar2;
}


