/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00176a90  Symbol: FUN_00176a90 */

void FUN_00176a90(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_2 != 0) {
    png_write_chunk_data(param_1,*param_2,param_2[1]);
    return;
  }
  iVar3 = 0;
  if (0 < param_2[2]) {
    do {
      iVar4 = iVar3 * 4;
      png_write_chunk_data
                (param_1,*(undefined4 *)(param_2[4] + iVar4),*(undefined4 *)(param_1 + 0x174));
      iVar3 = iVar3 + 1;
      png_free(param_1,*(undefined4 *)(param_2[4] + iVar4));
    } while (iVar3 < param_2[2]);
  }
  if (param_2[3] == 0) {
    uVar1 = *(uint *)(param_1 + 0x148);
    uVar2 = *(uint *)(param_1 + 0x174);
    if (uVar2 <= uVar1) goto LAB_00176af2;
  }
  else {
    png_free(param_1,param_2[4]);
    uVar1 = *(uint *)(param_1 + 0x148);
    uVar2 = *(uint *)(param_1 + 0x174);
    if (uVar2 <= uVar1) goto LAB_00176af2;
  }
  png_write_chunk_data(param_1,*(undefined4 *)(param_1 + 0x170),uVar2 - uVar1);
LAB_00176af2:
  deflateReset(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}


