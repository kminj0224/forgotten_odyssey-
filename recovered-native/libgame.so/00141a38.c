/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141a38  Symbol: updateBlendFunc */

/* cocos2d::CCAtlasNode::updateBlendFunc() */

void __thiscall cocos2d::CCAtlasNode::updateBlendFunc(CCAtlasNode *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(this + 0x118) + 0x1c))();
  iVar2 = (**(code **)(*piVar1 + 0x38))();
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x120) = DAT_00141a5c;
    *(undefined4 *)(this + 0x124) = DAT_00141a60;
  }
  return;
}


