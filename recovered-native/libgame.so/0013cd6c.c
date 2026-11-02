/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013cd6c  Symbol: startWithTarget */

/* cocos2d::CCTintTo::startWithTarget(cocos2d::CCNode*) */

void __thiscall cocos2d::CCTintTo::startWithTarget(CCTintTo *this,CCNode *param_1)

{
  int *piVar1;
  CCTintTo *pCVar2;
  
  CCActionInterval::startWithTarget((CCActionInterval *)this,param_1);
  if ((*(int *)(this + 0x18) != 0) &&
     (piVar1 = (int *)__dynamic_cast(*(int *)(this + 0x18),*(undefined4 *)(DAT_0013cdac + 0x13cd84),
                                     *(undefined4 *)(DAT_0013cdb0 + 0x13cd86),0xfffffffe),
     piVar1 != (int *)0x0)) {
    pCVar2 = (CCTintTo *)(**(code **)(*piVar1 + 4))();
    this[0x2c] = *pCVar2;
    this[0x2d] = pCVar2[1];
    this[0x2e] = pCVar2[2];
  }
  return;
}


