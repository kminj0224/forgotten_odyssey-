/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001ff3c  Symbol: FUN_0001ff3c */

uint FUN_0001ff3c(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  
  pcVar5 = DAT_0001ff9c;
  uVar4 = DAT_0001ff98;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_0001ff98 << iVar1;
  do {
    uVar6 = *(uint *)(param_1 & 0xfffffffc);
    uVar3 = (uVar6 & uVar2) >> iVar1;
    iVar7 = (*pcVar5)(uVar6,(uVar4 & uVar3 - param_2) << iVar1 | ~uVar2 & uVar6,
                      (uint *)(param_1 & 0xfffffffc));
  } while (iVar7 != 0);
  return uVar3 & 0xffff;
}


