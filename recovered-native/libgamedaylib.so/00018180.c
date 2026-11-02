/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018180  Symbol: FUN_00018180 */

void FUN_00018180(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 < *(int *)(param_1 + 0x18)) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0xc);
    *(int *)(param_1 + 0x14) = iVar3 + 1;
    if (puVar2 == (undefined4 *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
    puVar2 = (undefined4 *)0x0;
  }
  if (param_2 == 0) {
    bVar1 = true;
  }
  if ((!bVar1) && (param_3 != 0)) {
    *puVar2 = 0;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
  }
  return;
}


