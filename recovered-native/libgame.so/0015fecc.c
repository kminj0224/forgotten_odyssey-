/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fecc  Symbol: attachDelegateWithIME */

/* cocos2d::CCIMEDispatcher::attachDelegateWithIME(cocos2d::CCIMEDelegate*) */

undefined4 __thiscall
cocos2d::CCIMEDispatcher::attachDelegateWithIME(CCIMEDispatcher *this,CCIMEDelegate *param_1)

{
  Impl *pIVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  Impl *this_00;
  
  this_00 = *(Impl **)this;
  if ((param_1 == (CCIMEDelegate *)0x0) || (this_00 == (Impl *)0x0)) {
    uVar4 = 0;
  }
  else {
    pIVar1 = (Impl *)Impl::findDelegate(this_00,param_1);
    uVar4 = 0;
    if (this_00 != pIVar1) {
      if (*(int **)(this_00 + 8) == (int *)0x0) {
        iVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        iVar2 = (**(code **)(**(int **)(this_00 + 8) + 0x18))();
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        piVar3 = *(int **)(*(int *)this + 8);
        *(undefined4 *)(*(int *)this + 8) = 0;
        (**(code **)(*piVar3 + 0x1c))();
      }
      *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(pIVar1 + 8);
      (**(code **)(*(int *)param_1 + 0x14))(param_1);
      uVar4 = 1;
    }
  }
  return uVar4;
}


