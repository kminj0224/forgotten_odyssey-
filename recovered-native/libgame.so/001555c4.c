/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001555c4  Symbol: isEqual */

/* cocos2d::CCString::isEqual(cocos2d::CCObject const*) */

CCObject * __thiscall cocos2d::CCString::isEqual(CCString *this,CCObject *param_1)

{
  int iVar1;
  
  if ((param_1 != (CCObject *)0x0) &&
     (param_1 = (CCObject *)
                __dynamic_cast(param_1,*(undefined4 *)(DAT_001555f8 + 0x1555d4),
                               *(undefined4 *)(DAT_001555fc + 0x1555d8),0),
     param_1 != (CCObject *)0x0)) {
    iVar1 = FUN_001ed288(this + 0x14,param_1 + 0x14);
    param_1 = (CCObject *)(uint)(iVar1 == 0);
  }
  return param_1;
}


