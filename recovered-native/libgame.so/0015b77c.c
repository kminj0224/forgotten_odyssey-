/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b77c  Symbol: updateBlendFunc */

/* cocos2d::CCSpriteBatchNode::updateBlendFunc() */

void __thiscall cocos2d::CCSpriteBatchNode::updateBlendFunc(CCSpriteBatchNode *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(this + 0x100) + 0x1c))();
  iVar2 = (**(code **)(*piVar1 + 0x38))();
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x104) = DAT_0015b7a0;
    *(undefined4 *)(this + 0x108) = DAT_0015b7a4;
  }
  return;
}


