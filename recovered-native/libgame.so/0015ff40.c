/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ff40  Symbol: detachDelegateWithIME */

/* cocos2d::CCIMEDispatcher::detachDelegateWithIME(cocos2d::CCIMEDelegate*) */

int __thiscall
cocos2d::CCIMEDispatcher::detachDelegateWithIME(CCIMEDispatcher *this,CCIMEDelegate *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 == (CCIMEDelegate *)0x0) || (*(int *)this == 0)) {
    iVar1 = 0;
  }
  else {
    piVar2 = *(int **)(*(int *)this + 8);
    iVar1 = 0;
    if ((piVar2 == (int *)param_1) && (iVar1 = (**(code **)(*piVar2 + 0x18))(piVar2), iVar1 != 0)) {
      *(undefined4 *)(*(int *)this + 8) = 0;
      (**(code **)(*piVar2 + 0x1c))(piVar2);
      iVar1 = 1;
    }
  }
  return iVar1;
}


