/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5fb8  Symbol: jpeg_CreateCompress */

void jpeg_CreateCompress(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_001a6088 + 0x1a5fc4;
  param_1[1] = 0;
  if (param_2 != 0x50) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(undefined4 *)(*param_1 + 0x18) = 0x50;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 0x1b0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    *(undefined4 *)(*param_1 + 0x18) = 0x1b0;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = *param_1;
  iVar3 = param_1[3];
  memset(param_1,0,0x1b0);
  *param_1 = iVar2;
  param_1[3] = iVar3;
  jinit_memory_mgr(param_1);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x5e] = 8;
  iVar1 = *(int *)(iVar1 + DAT_001a608c);
  param_1[2] = 0;
  param_1[0x5f] = iVar1;
  param_1[0x60] = 0x3f;
  param_1[0x6a] = 0;
  param_1[6] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar2 = DAT_001a6084;
  iVar1 = DAT_001a6080;
  param_1[0x1a] = 100;
  param_1[0x1b] = 100;
  param_1[0x1c] = 100;
  param_1[0x1d] = 100;
  param_1[0xc] = iVar1;
  param_1[0xd] = iVar2;
  param_1[5] = 100;
  return;
}


