/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00211228  Symbol: FUN_00211228 */

uint FUN_00211228(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  
  pcVar5 = DAT_00211288;
  uVar4 = DAT_00211284;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = DAT_00211284 << iVar1;
  do {
    uVar6 = *(uint *)(param_1 & 0xfffffffc);
    uVar3 = (uVar6 & uVar2) >> iVar1;
    iVar7 = (*pcVar5)(uVar6,(uVar4 & (uVar3 | param_2)) << iVar1 | ~uVar2 & uVar6,
                      (uint *)(param_1 & 0xfffffffc));
  } while (iVar7 != 0);
  return uVar3 & 0xffff;
}


