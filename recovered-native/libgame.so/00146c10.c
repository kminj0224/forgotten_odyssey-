/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146c10  Symbol: removeDelegate */

/* cocos2d::CCKeypadDispatcher::removeDelegate(cocos2d::CCKeypadDelegate*) */

void __thiscall
cocos2d::CCKeypadDispatcher::removeDelegate(CCKeypadDispatcher *this,CCKeypadDelegate *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_1 != (CCKeypadDelegate *)0x0) {
    if (this[0x18] == (CCKeypadDispatcher)0x0) {
      forceRemoveDelegate(this,param_1);
    }
    else {
      puVar4 = *(uint **)(this + 0x20);
      *(CCKeypadDelegate **)(*puVar4 * 4 + puVar4[2]) = param_1;
      uVar3 = *puVar4;
      uVar2 = puVar4[1];
      *puVar4 = uVar3 + 1;
      if (uVar2 <= uVar3 + 1) {
        puVar4[1] = uVar2 << 1;
        pvVar1 = realloc((void *)puVar4[2],uVar2 << 3);
        puVar4[2] = (uint)pvVar1;
      }
      this[0x1a] = (CCKeypadDispatcher)0x1;
    }
  }
  return;
}


