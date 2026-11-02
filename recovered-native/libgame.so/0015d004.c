/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d004  Symbol: insertObject */

/* cocos2d::CCArray::insertObject(cocos2d::CCObject*, unsigned int) */

void __thiscall cocos2d::CCArray::insertObject(CCArray *this,CCObject *param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x14);
  FUN_0015cdca(piVar1,1);
  if (*piVar1 - param_2 != 0) {
    memmove((void *)(piVar1[2] + (param_2 + 1) * 4),(void *)(piVar1[2] + param_2 * 4),
            (*piVar1 - param_2) * 4);
  }
  CCObject::retain(param_1);
  *(CCObject **)(param_2 * 4 + piVar1[2]) = param_1;
  *piVar1 = *piVar1 + 1;
  return;
}


