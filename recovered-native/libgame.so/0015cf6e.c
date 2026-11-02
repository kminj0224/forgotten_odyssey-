/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cf6e  Symbol: addObjectsFromArray */

/* cocos2d::CCArray::addObjectsFromArray(cocos2d::CCArray*) */

void __thiscall cocos2d::CCArray::addObjectsFromArray(CCArray *this,CCArray *param_1)

{
  CCObject *this_00;
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  piVar1 = *(int **)(this + 0x14);
  puVar2 = *(uint **)(param_1 + 0x14);
  FUN_0015cdca(piVar1,*puVar2);
  for (uVar3 = 0; uVar3 < *puVar2; uVar3 = uVar3 + 1) {
    this_00 = *(CCObject **)(uVar3 * 4 + puVar2[2]);
    *(CCObject **)(*piVar1 * 4 + piVar1[2]) = this_00;
    CCObject::retain(this_00);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


