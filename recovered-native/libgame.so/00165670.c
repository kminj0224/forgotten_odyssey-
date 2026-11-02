/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165670  Symbol: rectForGID */

/* cocos2d::CCTMXTilesetInfo::rectForGID(unsigned int) */

uint cocos2d::CCTMXTilesetInfo::rectForGID(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_r1;
  undefined4 extraout_r1;
  int in_r2;
  int iVar6;
  int iVar7;
  
  CCRect::CCRect((CCRect *)param_1);
  uVar1 = *(undefined4 *)(in_r1 + 0x24);
  iVar7 = *(int *)(in_r1 + 0x28);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_r1 + 0x1c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_r1 + 0x20);
  iVar6 = in_r2 - *(int *)(in_r1 + 0x18);
  uVar1 = __floatunsisf(uVar1);
  uVar2 = __addsf3(uVar1,*(undefined4 *)(in_r1 + 0x1c));
  uVar3 = __floatunsisf(iVar7 << 1);
  uVar3 = __subsf3(*(undefined4 *)(in_r1 + 0x30),uVar3);
  uVar3 = __addsf3(uVar3,uVar1);
  __divsf3(uVar3,uVar2);
  uVar3 = __fixsfsi();
  uVar4 = __floatunsisf(iVar7);
  __aeabi_uidivmod(iVar6,uVar3);
  uVar5 = __floatunsisf(extraout_r1);
  uVar2 = __mulsf3(uVar5,uVar2);
  uVar2 = __addsf3(uVar2,uVar4);
  *(undefined4 *)param_1 = uVar2;
  __udivsi3(iVar6,uVar3);
  uVar2 = __floatunsisf();
  uVar1 = __addsf3(uVar1,*(undefined4 *)(in_r1 + 0x20));
  uVar1 = __mulsf3(uVar2,uVar1);
  uVar1 = __addsf3(uVar1,uVar4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}


