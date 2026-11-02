/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d070  Symbol: removeObjectsInArray */

/* cocos2d::CCArray::removeObjectsInArray(cocos2d::CCArray*) */

void __thiscall cocos2d::CCArray::removeObjectsInArray(CCArray *this,CCArray *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x14);
  puVar2 = *(uint **)(param_1 + 0x14);
  for (uVar3 = 0; uVar3 < *puVar2; uVar3 = uVar3 + 1) {
    iVar1 = FUN_0015cd3c(uVar4,*(undefined4 *)(uVar3 * 4 + puVar2[2]));
    if (iVar1 != -1) {
      FUN_0015cdec(uVar4,iVar1);
    }
  }
  return;
}


