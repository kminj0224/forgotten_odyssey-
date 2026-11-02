/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146400  Symbol: vertex */

/* cocos2d::CCGrid3D::vertex(cocos2d::_ccGridSize const&) */

void cocos2d::CCGrid3D::vertex(_ccGridSize *param_1)

{
  int iVar1;
  int in_r1;
  int *in_r2;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(in_r1 + 0x38);
  iVar2 = *in_r2 * (*(int *)(in_r1 + 0x1c) + 1) + in_r2[1];
  iVar1 = iVar2 * 3;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar2 * 0xc + iVar3);
  uVar4 = *(undefined4 *)((iVar1 + 2) * 4 + iVar3);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((iVar1 + 1) * 4 + iVar3);
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}


