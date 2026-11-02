/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a996c  Symbol: jpeg_start_decompress */

undefined4 jpeg_start_decompress(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  code **ppcVar4;
  
  iVar3 = param_1[5];
  if (iVar3 == 0xca) {
    jinit_master_decompress();
    if (param_1[0x10] != 0) {
      param_1[5] = 0xcf;
      return 1;
    }
    param_1[5] = 0xcb;
  }
  else if (iVar3 != 0xcb) {
    if (iVar3 != 0xcc) {
      *(undefined4 *)(*param_1 + 0x14) = 0x15;
      *(int *)(*param_1 + 0x18) = param_1[5];
      (**(code **)*param_1)();
    }
    goto LAB_001a9990;
  }
  if (*(int *)(param_1[0x72] + 0x10) != 0) {
    ppcVar4 = (code **)param_1[2];
    do {
      if (ppcVar4 != (code **)0x0) {
        (**ppcVar4)(param_1);
      }
      do {
        iVar3 = (**(code **)param_1[0x72])(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        if (iVar3 == 2) goto LAB_001a99f8;
        ppcVar4 = (code **)param_1[2];
      } while (ppcVar4 == (code **)0x0);
      if ((iVar3 == 1) || (iVar3 == 3)) {
        pcVar2 = ppcVar4[1];
        ppcVar4[1] = pcVar2 + 1;
        ppcVar4 = (code **)param_1[2];
        if ((int)ppcVar4[2] <= (int)(pcVar2 + 1)) {
          ppcVar4[2] = ppcVar4[2] + param_1[0x52];
          ppcVar4 = (code **)param_1[2];
        }
      }
    } while( true );
  }
LAB_001a99f8:
  param_1[0x26] = param_1[0x24];
LAB_001a9990:
  uVar1 = FUN_001a96e4(param_1);
  return uVar1;
}


