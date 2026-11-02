/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016001c  Symbol: dispatchKeyboardWillShow */

/* cocos2d::CCIMEDispatcher::dispatchKeyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) */

void __thiscall
cocos2d::CCIMEDispatcher::dispatchKeyboardWillShow
          (CCIMEDispatcher *this,CCIMEKeyboardNotificationInfo *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)this;
  if (puVar3 != (undefined4 *)0x0) {
    for (puVar2 = (undefined4 *)*puVar3; puVar2 != puVar3; puVar2 = (undefined4 *)*puVar2) {
      piVar1 = (int *)puVar2[2];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x2c))(piVar1,param_1);
      }
    }
  }
  return;
}


