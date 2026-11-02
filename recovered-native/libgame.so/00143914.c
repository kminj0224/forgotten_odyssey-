/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143914  Symbol: pop */

/* cocos2d::CCPoolManager::pop() */

void __thiscall cocos2d::CCPoolManager::pop(CCPoolManager *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(CCAutoreleasePool **)(this + 4) != (CCAutoreleasePool *)0x0) {
    iVar3 = *(int *)(*(int *)this + 0x18) - *(int *)(*(int *)this + 0x14) >> 2;
    CCAutoreleasePool::clear(*(CCAutoreleasePool **)(this + 4));
    if (1 < iVar3) {
      CCMutableArray<cocos2d::CCAutoreleasePool*>::removeObjectAtIndex
                (*(CCMutableArray<cocos2d::CCAutoreleasePool*> **)this,iVar3 - 1,true);
      iVar1 = *(int *)(*(int *)this + 0x14);
      uVar2 = 0;
      if (iVar3 - 2U < (uint)(*(int *)(*(int *)this + 0x18) - iVar1 >> 2)) {
        uVar2 = *(undefined4 *)((iVar3 - 2U) * 4 + iVar1);
      }
      *(undefined4 *)(this + 4) = uVar2;
    }
  }
  return;
}


