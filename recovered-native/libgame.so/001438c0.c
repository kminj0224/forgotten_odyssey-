/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001438c0  Symbol: removeObjectAtIndex */

/* cocos2d::CCMutableArray<cocos2d::CCAutoreleasePool*>::removeObjectAtIndex(unsigned int, bool) */

void __thiscall
cocos2d::CCMutableArray<cocos2d::CCAutoreleasePool*>::removeObjectAtIndex
          (CCMutableArray<cocos2d::CCAutoreleasePool*> *this,uint param_1,bool param_2)

{
  CCObject *this_00;
  void *__dest;
  void *__src;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != *(int *)(this + 0x18)) {
    if (param_2) {
      if ((uint)(*(int *)(this + 0x18) - iVar1 >> 2) <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_001c45d0(DAT_00143910 + 0x1438e0);
      }
      this_00 = *(CCObject **)(param_1 * 4 + iVar1);
      if (this_00 != (CCObject *)0x0) {
        CCObject::release(this_00);
      }
    }
    __dest = (void *)(*(int *)(this + 0x14) + param_1 * 4);
    __src = (void *)((int)__dest + 4);
    if ((__src != *(void **)(this + 0x18)) &&
       (iVar1 = (int)*(void **)(this + 0x18) - (int)__src >> 2, iVar1 != 0)) {
      memmove(__dest,__src,iVar1 << 2);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -4;
  }
  return;
}


