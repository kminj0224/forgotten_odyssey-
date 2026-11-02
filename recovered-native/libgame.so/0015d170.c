/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d170  Symbol: reduceMemoryFootprint */

/* cocos2d::CCArray::reduceMemoryFootprint() */

void __thiscall cocos2d::CCArray::reduceMemoryFootprint(CCArray *this)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(this + 0x14);
  uVar2 = *puVar3;
  if ((uVar2 < puVar3[1]) && ((uVar2 != 0 || (uVar2 = 1, puVar3[1] != 1)))) {
    puVar3[1] = uVar2;
    pvVar1 = realloc((void *)puVar3[2],uVar2 << 2);
    puVar3[2] = (uint)pvVar1;
  }
  return;
}


