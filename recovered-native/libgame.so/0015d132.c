/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d132  Symbol: reverseObjects */

/* cocos2d::CCArray::reverseObjects() */

void __thiscall cocos2d::CCArray::reverseObjects(CCArray *this)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float __x;
  
  uVar3 = **(uint **)(this + 0x14);
  if (1 < uVar3) {
    uVar1 = __floatunsisf(uVar3);
    __x = (float)__mulsf3(uVar1,0x3f000000);
    floorf(__x);
    iVar2 = __fixsfsi();
    for (iVar4 = 0; uVar3 = uVar3 - 1, iVar4 < iVar2; iVar4 = iVar4 + 1) {
      FUN_0015cd5c(*(undefined4 *)(this + 0x14),iVar4,uVar3);
    }
  }
  return;
}


