/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0002007c  Symbol: FUN_0002007c */

uint FUN_0002007c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = DAT_000200d8;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_000200d4 << iVar1;
  param_2 = DAT_000200d4 & param_2;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    iVar4 = (*pcVar3)(uVar5,~uVar2 & uVar5 | param_2 << iVar1,(uint *)(param_1 & 0xfffffffc));
  } while (iVar4 != 0);
  return (uVar5 & uVar2) >> iVar1 & 0xffff;
}


