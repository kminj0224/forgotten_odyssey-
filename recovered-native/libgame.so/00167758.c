/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167758  Symbol: removeDelegate */

/* cocos2d::CCTouchDispatcher::removeDelegate(cocos2d::CCTouchDelegate*) */

void __thiscall
cocos2d::CCTouchDispatcher::removeDelegate(CCTouchDispatcher *this,CCTouchDelegate *param_1)

{
  CCTouchHandler *pCVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_1 != (CCTouchDelegate *)0x0) {
    if (this[0x20] == (CCTouchDispatcher)0x0) {
      forceRemoveDelegate(this,param_1);
    }
    else {
      pCVar1 = (CCTouchHandler *)findHandler(this,*(CCMutableArray **)(this + 0x24),param_1);
      if (pCVar1 == (CCTouchHandler *)0x0) {
        puVar5 = *(uint **)(this + 0x28);
        *(CCTouchDelegate **)(*puVar5 * 4 + puVar5[2]) = param_1;
        uVar4 = *puVar5;
        uVar3 = puVar5[1];
        *puVar5 = uVar4 + 1;
        if (uVar3 <= uVar4 + 1) {
          puVar5[1] = uVar3 << 1;
          pvVar2 = realloc((void *)puVar5[2],uVar3 << 3);
          puVar5[2] = (uint)pvVar2;
        }
        this[0x22] = (CCTouchDispatcher)0x1;
      }
      else {
        CCMutableArray<cocos2d::CCTouchHandler*>::removeObject
                  (*(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x24),pCVar1,true);
      }
    }
  }
  return;
}


