/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d0fe  Symbol: exchangeObject */

/* cocos2d::CCArray::exchangeObject(cocos2d::CCObject*, cocos2d::CCObject*) */

void __thiscall cocos2d::CCArray::exchangeObject(CCArray *this,CCObject *param_1,CCObject *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(this + 0x14);
  iVar1 = FUN_0015cd3c(uVar3);
  if (iVar1 != -1) {
    iVar2 = FUN_0015cd3c(uVar3,param_2);
    if (iVar2 != -1) {
      FUN_0015cd5c(uVar3,iVar1,iVar2);
    }
  }
  return;
}


