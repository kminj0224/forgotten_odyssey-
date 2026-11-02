/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c118  Symbol: FUN_0019c118 */

void FUN_0019c118(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_0019c23c + 0x19c124;
  if (*(int *)(iVar5 + DAT_0019c240 + 0x38) == 0) {
    FUN_0019c0fc();
  }
  iVar4 = iVar5 + DAT_0019c240;
  FUN_0019c274(*(undefined4 *)(iVar4 + 0x38));
  iVar2 = DAT_0019c244;
  param_1[0x60] = 0;
  iVar2 = iVar5 + iVar2;
  param_1[0x61] = *(int *)(iVar2 + 0x24);
  param_1[0x62] = *(int *)(iVar2 + 0x20);
  iVar3 = *(int *)(iVar5 + DAT_0019c24c);
  param_1[1] = *(int *)(iVar5 + DAT_0019c248);
  param_1[2] = iVar3;
  iVar3 = *(int *)(iVar5 + DAT_0019c254);
  param_1[3] = *(int *)(iVar5 + DAT_0019c250);
  param_1[4] = iVar3;
  iVar3 = DAT_0019c258;
  param_1[100] = *(int *)(iVar4 + 0x54);
  iVar1 = DAT_0019c25c;
  param_1[0x59] = *(int *)(iVar5 + iVar3);
  iVar3 = *(int *)(iVar5 + iVar1);
  param_1[0x70] = iVar3;
  param_1[0x5a] = iVar3;
  iVar3 = DAT_0019c264;
  param_1[0x5c] = *(int *)(iVar5 + DAT_0019c260);
  param_1[0x5b] = *(int *)(iVar5 + iVar3);
  param_1[0x65] = *(int *)(iVar2 + 0x1c);
  param_1[0x6c] = *(int *)(iVar2 + 0x18);
  param_1[0x6d] = *(int *)(iVar5 + DAT_0019c268 + 8);
  param_1[0x66] = *(int *)(iVar2 + 0x14);
  param_1[0x67] = *(int *)(iVar4 + 0x50);
  param_1[0x68] = *(int *)(iVar4 + 0x4c);
  iVar2 = DAT_0019c26c;
  param_1[0x69] = *(int *)(iVar4 + 0x48);
  *param_1 = iVar5 + iVar2;
  param_1[0x6a] = *(int *)(iVar4 + 0x44);
  param_1[0x6b] = *(int *)(iVar4 + 0x40);
  iVar2 = DAT_0019c270;
  param_1[99] = *(int *)(iVar4 + 0x3c);
  param_1[0x5d] = *(int *)(iVar5 + iVar2 + 0x74);
  param_1[0x5e] = *(int *)(iVar4 + 0x6c);
  param_1[0x5f] = *(int *)(iVar4 + 0x68);
  param_1[0x6e] = *(int *)(iVar4 + 100);
  param_1[0x6f] = *(int *)(iVar4 + 0x60);
  param_1[0x7e] = *(int *)(iVar4 + 0x5c);
  param_1[0x7f] = *(int *)(iVar4 + 0x58);
  memset(param_1 + 0x71,0,0x34);
  FUN_0019c278(*(undefined4 *)(iVar4 + 0x38));
  return;
}


