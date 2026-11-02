/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ff4e0  Symbol: FUN_001ff4e0 */

void FUN_001ff4e0(uint param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  
  if (0xffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_001c4558((int)&DAT_001ff570 + DAT_001ff570);
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 << 1) {
      param_1 = param_2 << 1;
    }
    uVar2 = (param_1 + 4) * 4;
    if (param_1 <= param_2 || uVar2 + 0x10 < 0x1001) goto LAB_001ff550;
    param_1 = param_1 + (0x1000 - (uVar2 + 0x10 & 0xfff) >> 2);
    if (0xffffffd < param_1) {
      param_1 = 0xffffffe;
    }
  }
  uVar2 = (param_1 + 4) * 4;
LAB_001ff550:
  pvVar1 = operator_new(uVar2);
  *(uint *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  return;
}


