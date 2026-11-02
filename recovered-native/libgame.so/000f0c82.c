/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f0c82  Symbol: getObjectAtIndex */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex(unsigned int) */

undefined4 __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < (uint)(*(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2)) {
    uVar1 = *(undefined4 *)(param_1 * 4 + *(int *)(this + 0x14));
  }
  return uVar1;
}


