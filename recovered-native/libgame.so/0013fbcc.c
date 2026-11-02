/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013fbcc  Symbol: startWithTarget */

/* cocos2d::CCProgressTo::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCProgressTo::startWithTarget(CCProgressTo *this,CCNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  uVar1 = DAT_0013fbec;
  uVar2 = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x30) = uVar2;
  iVar3 = __aeabi_fcmpeq(uVar2,uVar1);
  if (iVar3 != 0) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}


