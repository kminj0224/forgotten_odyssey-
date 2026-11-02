/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001fa3c  Symbol: FUN_0001fa3c */

uint FUN_0001fa3c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pcVar4 = DAT_0001faa4;
  uVar3 = DAT_0001faa0;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_0001faa0 << iVar1;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    uVar7 = (uVar3 & ((uVar5 & uVar2) >> iVar1) - param_2) << iVar1 | ~uVar2 & uVar5;
    iVar6 = (*pcVar4)(uVar5,uVar7,(uint *)(param_1 & 0xfffffffc));
  } while (iVar6 != 0);
  return (uVar7 & uVar2) >> iVar1 & 0xffff;
}


