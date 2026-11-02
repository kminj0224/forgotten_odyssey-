/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173bd4  Symbol: png_crc_finish */

undefined4 png_crc_finish(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x174);
  iVar4 = DAT_00173c80 + 0x173bee;
  if (uVar3 < param_2) {
    uVar2 = uVar3;
    param_2 = param_2 - uVar3;
    while( true ) {
      png_crc_read(param_1,*(undefined4 *)(param_1 + 0x170),uVar2);
      if ((param_2 - uVar3) + uVar3 <= uVar3) break;
      uVar2 = *(uint *)(param_1 + 0x174);
      param_2 = param_2 - uVar3;
    }
  }
  if (param_2 != 0) {
    png_crc_read(param_1,*(undefined4 *)(param_1 + 0x170),param_2);
  }
  iVar1 = png_crc_error(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((int)((uint)*(byte *)(param_1 + 0x1e0) << 0x1a) < 0) {
    if (-1 < *(int *)(param_1 + 0x130) << 0x16) goto LAB_00173c60;
  }
  else if (*(int *)(param_1 + 0x130) << 0x15 < 0) {
LAB_00173c60:
    png_chunk_warning(param_1,DAT_00173c84 + iVar4);
    return 1;
  }
  png_chunk_error(param_1,DAT_00173c84 + iVar4);
  return 0;
}


