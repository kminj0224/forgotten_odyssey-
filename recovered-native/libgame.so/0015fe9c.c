/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fe9c  Symbol: addDelegate */

/* cocos2d::CCIMEDispatcher::addDelegate(cocos2d::CCIMEDelegate*) */

void cocos2d::CCIMEDispatcher::addDelegate(CCIMEDelegate *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  CCIMEDelegate *in_r1;
  undefined4 *this;
  undefined4 uVar3;
  
  if (((in_r1 != (CCIMEDelegate *)0x0) &&
      (this = *(undefined4 **)param_1, this != (undefined4 *)0x0)) &&
     (puVar1 = (undefined4 *)Impl::findDelegate((Impl *)this,in_r1), this == puVar1)) {
    uVar3 = *this;
    pvVar2 = operator_new(0xc);
    if (pvVar2 != (void *)0xfffffff8) {
      *(CCIMEDelegate **)((int)pvVar2 + 8) = in_r1;
    }
    FUN_001c5578(pvVar2,uVar3);
  }
  return;
}


