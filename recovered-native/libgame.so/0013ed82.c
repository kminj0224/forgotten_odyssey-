/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ed82  Symbol: actionAllocWithHashElement */

/* cocos2d::CCActionManager::actionAllocWithHashElement(cocos2d::_hashElement*) */

CCActionManager * __thiscall
cocos2d::CCActionManager::actionAllocWithHashElement(CCActionManager *this,_hashElement *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)param_1;
  if (piVar3 == (int *)0x0) {
    puVar1 = (undefined4 *)malloc(0xc);
    *puVar1 = 0;
    this = (CCActionManager *)malloc(0x10);
    puVar1[2] = this;
    puVar1[1] = 4;
    *(undefined4 **)param_1 = puVar1;
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 == piVar3[1]) {
      piVar3[1] = iVar2 << 1;
      this = (CCActionManager *)realloc((void *)piVar3[2],iVar2 << 3);
      piVar3[2] = (int)this;
    }
  }
  return this;
}


