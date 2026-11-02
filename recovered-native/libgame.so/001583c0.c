/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001583c0  Symbol: run */

/* cocos2d::CCApplication::run() */

int __thiscall cocos2d::CCApplication::run(CCApplication *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 8))();
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)this + 0xc))(this), iVar1 != 0)) {
    iVar1 = -1;
  }
  return iVar1;
}


