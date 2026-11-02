/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00211e48  Symbol: FUN_00211e48 */

uint FUN_00211e48(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = DAT_00211e9c;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = 0xff << iVar1;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    iVar4 = (*pcVar3)(uVar5,~uVar2 & uVar5 | uVar2 & param_2 << iVar1,(uint *)(param_1 & 0xfffffffc)
                     );
  } while (iVar4 != 0);
  return (uVar5 & uVar2) >> iVar1 & 0xff;
}


