/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144364  Symbol: CCObject */

/* cocos2d::CCObject::CCObject() */

void __thiscall cocos2d::CCObject::CCObject(CCObject *this)

{
  int iVar1;
  
  *(int *)this = *(int *)(DAT_00144388 + 0x14436a) + 8;
  iVar1 = *(int *)(DAT_0014438c + 0x144374) + 1;
  *(int *)(DAT_0014438c + 0x144374) = iVar1;
  *(int *)(this + 4) = iVar1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  this[0x10] = (CCObject)0x0;
  return;
}


