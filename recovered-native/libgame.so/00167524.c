/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167524  Symbol: FUN_00167524 */

void FUN_00167524(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == *param_1) {
      return;
    }
    if (*(int *)(uVar3 * 4 + param_1[2]) == param_2) break;
    uVar3 = uVar3 + 1;
  }
  if (uVar3 == 0xffffffff) {
    return;
  }
  uVar1 = *param_1 - 1;
  *param_1 = uVar1;
  iVar2 = uVar3 * 4;
  for (; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    *(undefined4 *)(param_1[2] + iVar2) = *(undefined4 *)(param_1[2] + iVar2 + 4);
    iVar2 = iVar2 + 4;
  }
  return;
}


