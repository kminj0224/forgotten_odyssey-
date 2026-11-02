/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013eca0  Symbol: deleteHashElement */

/* cocos2d::CCActionManager::deleteHashElement(cocos2d::_hashElement*) */

void __thiscall
cocos2d::CCActionManager::deleteHashElement(CCActionManager *this,_hashElement *param_1)

{
  int iVar1;
  int iVar2;
  _hashElement **pp_Var3;
  int *__ptr;
  
  __ptr = *(int **)param_1;
  if (__ptr != (int *)0x0) {
    while( true ) {
      if (*__ptr == 0) break;
      iVar1 = *__ptr + -1;
      *__ptr = iVar1;
      CCObject::release(*(CCObject **)((int)(void *)__ptr[2] + iVar1 * 4));
    }
    free((void *)__ptr[2]);
    free(__ptr);
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    free(**(void ***)(*(int *)(this + 0x14) + 0x14));
    free(*(void **)(*(int *)(this + 0x14) + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(this + 0x14) + 0x14);
    if (param_1 == (_hashElement *)(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x14))) {
      *(int *)(iVar1 + 0x10) = *(int *)(param_1 + 0x18) + *(int *)(iVar1 + 0x14);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      *(undefined4 *)
       (*(int *)(param_1 + 0x18) + *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x14) + 8) =
           *(undefined4 *)(param_1 + 0x1c);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(undefined4 *)
       (*(int *)(param_1 + 0x1c) + *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0x14) + 4) =
           *(undefined4 *)(param_1 + 0x18);
    }
    iVar2 = ((*(int **)(*(int *)(this + 0x14) + 0x14))[1] - 1U & *(uint *)(param_1 + 0x30)) * 0xc;
    iVar1 = **(int **)(*(int *)(this + 0x14) + 0x14) + iVar2;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    pp_Var3 = (_hashElement **)(**(int **)(*(int *)(this + 0x14) + 0x14) + iVar2);
    if (*pp_Var3 == param_1 + 0x14) {
      *pp_Var3 = *(_hashElement **)(param_1 + 0x24);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10) = *(undefined4 *)(param_1 + 0x24);
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc) = *(undefined4 *)(param_1 + 0x20);
    }
    *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0xc) =
         *(int *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 0xc) + -1;
  }
  CCObject::release(*(CCObject **)(param_1 + 4));
  free(param_1);
  return;
}


