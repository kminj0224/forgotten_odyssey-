/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d04e  Symbol: removeObject */

/* cocos2d::CCArray::removeObject(cocos2d::CCObject*) */

void cocos2d::CCArray::removeObject(CCObject *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = FUN_0015cd3c(uVar2);
  if (iVar1 != -1) {
    FUN_0015cdec(uVar2,iVar1);
  }
  return;
}


