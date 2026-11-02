/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014439c  Symbol: release */

/* cocos2d::CCObject::release() */

void __thiscall cocos2d::CCObject::release(CCObject *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  *(int *)(this + 0xc) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*(int *)this + 8))();
  }
  return;
}


