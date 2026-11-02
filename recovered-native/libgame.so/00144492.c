/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144492  Symbol: anyObject */

/* cocos2d::CCSet::anyObject() */

int __thiscall cocos2d::CCSet::anyObject(CCSet *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x14);
  iVar1 = iVar2;
  if ((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x14), iVar1 != 0)) {
    iVar1 = *(int *)(iVar2 + 0xc);
    while (iVar1 != iVar2 + 4) {
      if (*(int *)(iVar1 + 0x10) != 0) {
        return *(int *)(iVar1 + 0x10);
      }
      iVar1 = thunk_FUN_001c7eac();
    }
    iVar1 = 0;
  }
  return iVar1;
}


