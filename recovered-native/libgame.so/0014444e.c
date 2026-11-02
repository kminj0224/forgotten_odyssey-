/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014444e  Symbol: containsObject */

/* cocos2d::CCSet::containsObject(cocos2d::CCObject*) */

bool __thiscall cocos2d::CCSet::containsObject(CCSet *this,CCObject *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(this + 0x14);
  iVar1 = iVar3 + 4;
  iVar2 = iVar1;
  iVar4 = *(int *)(iVar3 + 8);
  while (iVar4 != 0) {
    if (*(CCObject **)(iVar4 + 0x10) < param_1) {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    else {
      iVar2 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
  }
  if ((iVar2 != iVar1) && (*(CCObject **)(iVar2 + 0x10) <= param_1)) {
    iVar1 = iVar2;
  }
  return iVar1 != iVar3 + 4;
}


