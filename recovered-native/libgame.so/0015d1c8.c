/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d1c8  Symbol: ccpLength */

/* cocos2d::ccpLength(cocos2d::CCPoint const&) */

void cocos2d::ccpLength(CCPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCPoint CVar3;
  float __x;
  
  CVar3 = param_1[1];
  uVar1 = __mulsf3(*param_1);
  uVar2 = __mulsf3(CVar3,CVar3);
  __x = (float)__addsf3(uVar1,uVar2);
  sqrtf(__x);
  return;
}


