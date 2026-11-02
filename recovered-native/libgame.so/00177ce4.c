/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177ce4  Symbol: png_write_IDAT */

void png_write_IDAT(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char extraout_r1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined local_24;
  
  iVar4 = DAT_00177df0 + 0x177cf6 + DAT_00177df4;
  local_28 = *(undefined4 *)(iVar4 + 0x68);
  local_24 = *(undefined *)(iVar4 + 0x6c);
  if ((-1 < *(int *)(param_1 + 300) << 0x1d) && (*(char *)(param_1 + 0x31c) == '\0')) {
    uVar5 = (uint)*param_2;
    if (((uVar5 & 0xf) != 8) || (0x70 < (uVar5 & 0xf0))) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,DAT_00177df0 + 0x177cf6 + DAT_00177df8);
    }
    if (((1 < param_3) && (*(uint *)(param_1 + 400) <= DAT_00177dfc)) &&
       (*(uint *)(param_1 + 0x18c) <= DAT_00177dfc)) {
      uVar2 = (*(uint *)(param_1 + 0x18c) *
               (uint)*(byte *)(param_1 + 0x1ee) * (uint)*(byte *)(param_1 + DAT_00177e00) + 0xf >> 3
              ) * *(uint *)(param_1 + 400);
      uVar3 = (uint)(*param_2 >> 4);
      uVar6 = 1 << uVar3 + 7;
      if ((uVar2 < uVar6 || uVar2 - uVar6 == 0) && (0xff < uVar6)) {
        do {
          uVar6 = uVar6 >> 1;
          uVar3 = uVar3 - 1;
          if (uVar6 < 0x100) break;
        } while (uVar2 < uVar6 || uVar2 - uVar6 == 0);
      }
      uVar2 = uVar3 << 4 & 0xff | 8;
      if (uVar5 != uVar2) {
        bVar1 = param_2[1];
        *param_2 = (byte)uVar2;
        __aeabi_uidivmod((uVar3 << 4 | 8) * 0x100 + (bVar1 & 0xe0),0x1f);
        param_2[1] = ((char)(bVar1 & 0xe0) + '\x1f') - extraout_r1;
      }
    }
  }
  png_write_chunk(param_1,&local_28,param_2,param_3);
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
  return;
}


