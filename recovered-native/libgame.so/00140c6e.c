/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140c6e  Symbol: getDelta */

/* cocos2d::CCShuffleTiles::getDelta(cocos2d::_ccGridSize const&) */

_ccGridSize * cocos2d::CCShuffleTiles::getDelta(_ccGridSize *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r1;
  undefined4 extraout_r1;
  int *in_r2;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_20 [3];
  
  CCPoint::CCPoint((CCPoint *)local_20);
  iVar7 = *(int *)(in_r1 + 0x30);
  iVar4 = *in_r2;
  iVar5 = in_r2[1];
  puVar6 = (undefined4 *)(*(int *)(in_r1 + 0x3c) + (iVar4 * iVar7 + iVar5) * 4);
  __divsi3(*puVar6,iVar7);
  uVar1 = __floatsisf();
  local_20[0] = uVar1;
  __aeabi_idivmod(*puVar6,iVar7);
  uVar2 = __floatsisf(extraout_r1);
  uVar3 = __floatsisf(iVar4);
  __subsf3(uVar1,uVar3);
  uVar1 = __fixsfsi();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = __floatsisf(iVar5);
  __subsf3(uVar2,uVar1);
  uVar1 = __fixsfsi();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}


