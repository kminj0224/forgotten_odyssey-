/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ff7a  Symbol: removeDelegate */

/* cocos2d::CCIMEDispatcher::removeDelegate(cocos2d::CCIMEDelegate*) */

void __thiscall
cocos2d::CCIMEDispatcher::removeDelegate(CCIMEDispatcher *this,CCIMEDelegate *param_1)

{
  Impl *pIVar1;
  Impl *this_00;
  
  if (((param_1 != (CCIMEDelegate *)0x0) && (this_00 = *(Impl **)this, this_00 != (Impl *)0x0)) &&
     (pIVar1 = (Impl *)Impl::findDelegate(this_00,param_1), this_00 != pIVar1)) {
    if ((*(int *)(this_00 + 8) != 0) && (*(int *)(pIVar1 + 8) == *(int *)(this_00 + 8))) {
      *(undefined4 *)(this_00 + 8) = 0;
    }
    FUN_001c5594(pIVar1);
    operator_delete(pIVar1);
  }
  return;
}


