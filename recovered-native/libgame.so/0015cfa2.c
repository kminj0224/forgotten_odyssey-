/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cfa2  Symbol: initWithArray */

/* cocos2d::CCArray::initWithArray(cocos2d::CCArray*) */

int __thiscall cocos2d::CCArray::initWithArray(CCArray *this,CCArray *param_1)

{
  int iVar1;
  
  iVar1 = initWithCapacity(this,**(uint **)(param_1 + 0x14));
  if (iVar1 != 0) {
    addObjectsFromArray(this,param_1);
    iVar1 = 1;
  }
  return iVar1;
}


