/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001678e0  Symbol: init */

/* cocos2d::CCTouchDispatcher::init() */

undefined4 __thiscall cocos2d::CCTouchDispatcher::init(CCTouchDispatcher *this)

{
  CCMutableArray<cocos2d::CCTouchHandler*> *pCVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  this[0x2d] = (CCTouchDispatcher)0x1;
  pCVar1 = (CCMutableArray<cocos2d::CCTouchHandler*> *)operator_new(0x20);
  CCMutableArray<cocos2d::CCTouchHandler*>::CCMutableArray(pCVar1,8);
  *(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x18) = pCVar1;
  pCVar1 = (CCMutableArray<cocos2d::CCTouchHandler*> *)operator_new(0x20);
  CCMutableArray<cocos2d::CCTouchHandler*>::CCMutableArray(pCVar1,4);
  *(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x1c) = pCVar1;
  pCVar1 = (CCMutableArray<cocos2d::CCTouchHandler*> *)operator_new(0x20);
  CCMutableArray<cocos2d::CCTouchHandler*>::CCMutableArray(pCVar1,8);
  *(CCMutableArray<cocos2d::CCTouchHandler*> **)(this + 0x24) = pCVar1;
  puVar2 = (undefined4 *)malloc(0xc);
  *puVar2 = 0;
  pvVar3 = malloc(0x20);
  puVar2[1] = 8;
  puVar2[2] = pvVar3;
  *(undefined4 **)(this + 0x28) = puVar2;
  this[0x22] = (CCTouchDispatcher)0x0;
  this[0x21] = (CCTouchDispatcher)0x0;
  this[0x2c] = (CCTouchDispatcher)0x0;
  this[0x20] = (CCTouchDispatcher)0x0;
  *(undefined4 *)(this + 0x38) = 2;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x3c) = 3;
  return 1;
}


