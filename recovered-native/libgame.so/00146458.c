/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146458  Symbol: setVertex */

/* cocos2d::CCGrid3D::setVertex(cocos2d::_ccGridSize const&, cocos2d::_ccVertex3F const&) */

void __thiscall
cocos2d::CCGrid3D::setVertex(CCGrid3D *this,_ccGridSize *param_1,_ccVertex3F *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x38);
  iVar2 = *(int *)param_1 * (*(int *)(this + 0x1c) + 1) + *(int *)(param_1 + 4);
  iVar1 = iVar2 * 3;
  *(undefined4 *)(iVar2 * 0xc + iVar3) = *(undefined4 *)param_2;
  *(undefined4 *)((iVar1 + 1) * 4 + iVar3) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((iVar1 + 2) * 4 + iVar3) = *(undefined4 *)(param_2 + 8);
  return;
}


