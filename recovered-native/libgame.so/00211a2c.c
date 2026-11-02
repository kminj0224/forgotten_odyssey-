/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00211a2c  Symbol: FUN_00211a2c */

uint FUN_00211a2c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  pcVar3 = DAT_00211a8c;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = 0xff << iVar1;
  do {
    uVar4 = *(uint *)(param_1 & 0xfffffffc);
    uVar6 = uVar2 & ((uVar4 & uVar2) >> iVar1) - param_2 << iVar1 | ~uVar2 & uVar4;
    iVar5 = (*pcVar3)(uVar4,uVar6,(uint *)(param_1 & 0xfffffffc));
  } while (iVar5 != 0);
  return (uVar6 & uVar2) >> iVar1 & 0xff;
}


