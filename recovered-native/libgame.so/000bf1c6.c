/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bf1c6  Symbol: vDrawTexture */

/* vDrawTexture(cocos2d::CCNode*, cocos2d::CCTexture2D*, cocos2d::CCPoint, int, int) */

undefined8
vDrawTexture(CCNode *param_1,CCTexture2D *param_2,CCPoint param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 in_stack_00000004;
  CCPoint local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithTexture(param_2);
  (**(code **)(*piVar1 + 0x3c))(piVar1,&local_18);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,param_5,in_stack_00000004);
  return CONCAT44(local_18,piVar1);
}


