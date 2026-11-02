/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a64c4  Symbol: FUN_001a64c4 */

int FUN_001a64c4(int *param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[param_2 + 0x16];
  if (iVar4 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  iVar5 = 0;
  if (-1 < param_1[0x60]) {
    piVar2 = (int *)param_1[0x5f];
    iVar3 = 0;
    do {
      if (0xff < *(ushort *)(*piVar2 * 2 + iVar4)) {
        iVar5 = 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 != param_1[0x60] + 1);
  }
  if (*(int *)(iVar4 + 0x80) == 0) {
    FUN_001a6490(param_1,0xdb);
    if (iVar5 == 0) {
      iVar3 = param_1[0x60] + 4;
    }
    else {
      iVar3 = param_1[0x60] * 2 + 5;
    }
    FUN_001a64a8(param_1,iVar3);
    FUN_001a645c(param_1,iVar5 * 0x10 + param_2);
    if (-1 < param_1[0x60]) {
      iVar3 = 0;
      do {
        uVar1 = *(ushort *)(*(int *)(iVar3 * 4 + param_1[0x5f]) * 2 + iVar4);
        if (iVar5 != 0) {
          FUN_001a645c(param_1,uVar1 >> 8);
        }
        FUN_001a645c(param_1,uVar1 & 0xff);
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_1[0x60]);
    }
    *(undefined4 *)(iVar4 + 0x80) = 1;
  }
  return iVar5;
}


