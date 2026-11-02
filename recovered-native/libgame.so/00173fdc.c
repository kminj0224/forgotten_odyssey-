/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173fdc  Symbol: png_handle_unknown */

void png_handle_unknown(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_28;
  undefined local_24;
  
  iVar3 = *(int *)(param_1 + 0x328);
  iVar6 = DAT_00174160 + 0x173ff2;
  if (iVar3 != 0) {
    if (iVar3 == 1) {
LAB_00174130:
      png_crc_finish(param_1,param_3);
      return;
    }
    *(int *)(param_1 + 0x328) = iVar3 + -1;
    if (iVar3 + -1 == 1) {
      png_warning(param_1,iVar6 + DAT_0017416c);
      goto LAB_00174130;
    }
  }
  uVar4 = *(uint *)(param_1 + 300);
  if ((int)(uVar4 << 0x1d) < 0) {
    local_28 = *(undefined4 *)(iVar6 + DAT_00174164 + 0x14);
    local_24 = *(undefined *)(iVar6 + DAT_00174164 + 0x18);
    iVar3 = memcmp((void *)(param_1 + 0x1e0),&local_28,4);
    if (iVar3 == 0) goto LAB_00174018;
    *(uint *)(param_1 + 300) = uVar4 | 8;
    bVar1 = *(byte *)(param_1 + 0x1e0);
  }
  else {
LAB_00174018:
    bVar1 = *(byte *)(param_1 + 0x1e0);
  }
  if (((-1 < (int)((uint)bVar1 << 0x1a)) &&
      (iVar3 = png_handle_as_unknown(param_1,param_1 + 0x1e0), iVar3 != 3)) &&
     (*(int *)(param_1 + 0x2e0) == 0)) {
    png_chunk_error(param_1,iVar6 + DAT_00174168);
  }
  if ((-1 < *(int *)(param_1 + 0x130) << 0x10) && (*(int *)(param_1 + 0x2e0) == 0))
  goto LAB_001740a6;
  puVar5 = (undefined4 *)(param_1 + 0x32c);
  *puVar5 = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined *)(param_1 + 0x330) = 0;
  *(int *)(param_1 + 0x338) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x334) = 0;
  }
  else {
    uVar2 = png_malloc(param_1,param_3);
    *(undefined4 *)(param_1 + 0x334) = uVar2;
    png_crc_read(param_1,uVar2,param_3);
  }
  if (*(code **)(param_1 + 0x2e0) == (code *)0x0) {
LAB_00174088:
    png_set_unknown_chunks(param_1,param_2,puVar5,1);
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x2e0))(param_1,puVar5);
    if (iVar3 < 0) {
      png_chunk_error(param_1,iVar6 + DAT_00174170);
    }
    else if (iVar3 == 0) {
      if ((-1 < (int)((uint)*(byte *)(param_1 + 0x1e0) << 0x1a)) &&
         (iVar3 = png_handle_as_unknown(param_1,(undefined4 *)(param_1 + 0x1e0)), iVar3 != 3)) {
        png_chunk_error(param_1,iVar6 + DAT_00174168);
      }
      goto LAB_00174088;
    }
  }
  png_free(param_1,*(undefined4 *)(param_1 + 0x334));
  *(undefined4 *)(param_1 + 0x334) = 0;
  param_3 = 0;
LAB_001740a6:
  png_crc_finish(param_1,param_3);
  return;
}


