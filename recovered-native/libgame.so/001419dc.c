/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001419dc  Symbol: calculateMaxItems */

/* cocos2d::CCAtlasNode::calculateMaxItems() */

void __thiscall cocos2d::CCAtlasNode::calculateMaxItems(CCAtlasNode *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0x1c))();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x24))();
  uVar3 = __floatunsisf(*(undefined4 *)(this + 0x110));
  __divsf3(puVar2[1],uVar3);
  uVar3 = __fixsfsi();
  *(undefined4 *)(this + 0x108) = uVar3;
  uVar3 = __floatunsisf(*(undefined4 *)(this + 0x10c));
  __divsf3(*puVar2,uVar3);
  uVar3 = __fixsfsi();
  *(undefined4 *)(this + 0x104) = uVar3;
  return;
}


