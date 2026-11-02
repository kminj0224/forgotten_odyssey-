/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0001fd88  Symbol: FUN_0001fd88 */

uint FUN_0001fd88(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  pcVar3 = DAT_0001fde8;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = 0xff << iVar1;
  do {
    uVar4 = *(uint *)(param_1 & 0xfffffffc);
    uVar6 = uVar2 & (param_2 & (uVar4 & uVar2) >> iVar1) << iVar1 | ~uVar2 & uVar4;
    iVar5 = (*pcVar3)(uVar4,uVar6,(uint *)(param_1 & 0xfffffffc));
  } while (iVar5 != 0);
  return (uVar6 & uVar2) >> iVar1 & 0xff;
}


