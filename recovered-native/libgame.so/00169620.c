/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169620  Symbol: png_set_tRNS */

void png_set_tRNS(int param_1,int param_2,void *param_3,size_t param_4,void *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  iVar5 = DAT_001696f0 + 0x169632;
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_3 != (void *)0x0) {
    png_free_data(param_1,param_2,0x2000,0);
    uVar2 = png_malloc(param_1,0x100);
    *(undefined4 *)(param_2 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x24c) = uVar2;
    if (param_4 - 1 < 0x100) {
      memcpy(*(void **)(param_2 + 0x4c),param_3,param_4);
    }
  }
  if (param_5 == (void *)0x0) {
    *(short *)(param_2 + 0x16) = (short)param_4;
    if (param_4 == 0) {
      return;
    }
    goto LAB_0016969a;
  }
  iVar3 = 1 << *(sbyte *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x19) == '\0') {
    uVar1 = *(ushort *)((int)param_5 + 8);
joined_r0x001696ec:
    if (iVar3 < (int)(uint)uVar1) {
LAB_001696c8:
      png_warning(param_1,iVar5 + DAT_001696f4);
    }
  }
  else if (*(char *)(param_2 + 0x19) == '\x02') {
    if (((int)(uint)*(ushort *)((int)param_5 + 2) <= iVar3) &&
       ((int)(uint)*(ushort *)((int)param_5 + 4) <= iVar3)) {
      uVar1 = *(ushort *)((int)param_5 + 6);
      goto joined_r0x001696ec;
    }
    goto LAB_001696c8;
  }
  memcpy((void *)(param_2 + 0x50),param_5,10);
  uVar4 = 1;
  if (param_4 != 0) {
    uVar4 = (short)param_4;
  }
  *(undefined2 *)(param_2 + 0x16) = uVar4;
LAB_0016969a:
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x2000;
  return;
}


