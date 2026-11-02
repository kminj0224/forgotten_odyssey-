/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001696f8  Symbol: png_set_hIST */

void png_set_hIST(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_00169784 + 0x169704;
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar2 = *(short *)(param_2 + 0x14) - 1;
    if (uVar2 < 0x100) {
      png_free_data(param_1,param_2,8,0);
      iVar1 = png_malloc_warn(param_1,0x200);
      *(int *)(param_1 + 0x2b8) = iVar1;
      if (iVar1 == 0) {
        png_warning(param_1,iVar4 + DAT_0016978c);
      }
      else {
        if (*(short *)(param_2 + 0x14) != 0) {
          iVar3 = 0;
          iVar4 = 0;
          while( true ) {
            iVar4 = iVar4 + 1;
            *(undefined2 *)(iVar1 + iVar3) = *(undefined2 *)(param_3 + iVar3);
            iVar3 = iVar3 + 2;
            if ((int)(uint)*(ushort *)(param_2 + 0x14) <= iVar4) break;
            iVar1 = *(int *)(param_1 + 0x2b8);
          }
          iVar1 = *(int *)(param_1 + 0x2b8);
        }
        *(int *)(param_2 + 0x7c) = iVar1;
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 8;
      }
    }
    else {
      png_warning(param_1,iVar4 + DAT_00169788,param_3,uVar2,param_4);
    }
  }
  return;
}


