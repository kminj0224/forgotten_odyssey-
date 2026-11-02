/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016bb68  Symbol: png_read_rows */

void png_read_rows(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (param_3 == (undefined4 *)0x0) {
      if ((param_2 != (undefined4 *)0x0) && (param_4 != 0)) {
        uVar2 = 0;
        do {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar2 = uVar2 + 1;
          png_read_row(param_1,uVar1,0);
        } while (uVar2 < param_4);
      }
    }
    else if (param_2 != (undefined4 *)0x0) {
      if (param_4 != 0) {
        iVar3 = 0;
        uVar2 = 0;
        do {
          uVar2 = uVar2 + 1;
          png_read_row(param_1,*(undefined4 *)((int)param_2 + iVar3),
                       *(undefined4 *)((int)param_3 + iVar3));
          iVar3 = iVar3 + 4;
        } while (uVar2 < param_4);
      }
    }
    else if (param_4 != 0) {
      uVar2 = 0;
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        uVar2 = uVar2 + 1;
        png_read_row(param_1,0,uVar1);
      } while (uVar2 < param_4);
    }
  }
  return;
}


