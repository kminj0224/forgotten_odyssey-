/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001437c4  Symbol: clear */

/* cocos2d::CCAutoreleasePool::clear() */

void __thiscall cocos2d::CCAutoreleasePool::clear(CCAutoreleasePool *this)

{
  CCObject **ppCVar1;
  int iVar2;
  CCObject **ppCVar3;
  
  ppCVar1 = *(CCObject ***)(*(int *)(this + 0x14) + 0x18);
  if ((int)ppCVar1 - *(int *)(*(int *)(this + 0x14) + 0x14) >> 2 != 0) {
    while( true ) {
      iVar2 = *(int *)(this + 0x14);
      ppCVar3 = *(CCObject ***)(iVar2 + 0x14);
      if (ppCVar1 == ppCVar3) break;
      ppCVar1 = ppCVar1 + -1;
      if (*ppCVar1 == (CCObject *)0x0) break;
      (*ppCVar1)[0x10] = (CCObject)0x0;
    }
    for (; ppCVar3 != *(CCObject ***)(iVar2 + 0x18); ppCVar3 = ppCVar3 + 1) {
      CCObject::release(*ppCVar3);
    }
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x14);
  }
  return;
}


