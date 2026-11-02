/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001dd484  Symbol: FUN_001dd484 */

void FUN_001dd484(int param_1,int param_2,byte *param_3,byte *param_4,int param_5,size_t param_6)

{
  int *piVar1;
  uint uVar2;
  byte *__s;
  size_t __n;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0xc) & 0xb0;
  __n = param_5 - param_6;
  if (uVar4 == 0x20) {
    memcpy(param_3,param_4,param_6);
    memset(param_3 + param_6,param_2,__n);
    return;
  }
  if (uVar4 != 0x10) goto LAB_001dd4b8;
  piVar1 = (int *)FUN_001da5b8(param_1 + 0x6c);
  if (*(char *)(piVar1 + 7) == '\0') {
    FUN_00204560();
    uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x2d);
  }
  else {
    uVar4 = (uint)*(byte *)((int)piVar1 + 0x4a);
  }
  uVar2 = (uint)*param_4;
  if (uVar2 != uVar4) {
    if (*(char *)(piVar1 + 7) == '\0') {
      FUN_00204560(piVar1);
      uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x2b);
      uVar2 = (uint)*param_4;
    }
    else {
      uVar4 = (uint)*(byte *)(piVar1 + 0x12);
    }
    if (uVar2 != uVar4) {
      if (*(char *)(piVar1 + 7) == '\0') {
        FUN_00204560(piVar1);
        uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x30);
        uVar2 = (uint)*param_4;
      }
      else {
        uVar4 = (uint)*(byte *)((int)piVar1 + 0x4d);
      }
      if ((uVar2 == uVar4) && (1 < (int)param_6)) {
        if (*(char *)(piVar1 + 7) == '\0') {
          FUN_00204560(piVar1);
          uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x78);
        }
        else {
          uVar4 = (uint)*(byte *)((int)piVar1 + 0x95);
        }
        uVar2 = (uint)param_4[1];
        if (uVar2 != uVar4) {
          if (*(char *)(piVar1 + 7) == '\0') {
            FUN_00204560(piVar1);
            uVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,0x58);
            uVar2 = (uint)param_4[1];
          }
          else {
            uVar4 = (uint)*(byte *)((int)piVar1 + 0x75);
          }
          if (uVar2 != uVar4) goto LAB_001dd4b8;
        }
        *param_3 = *param_4;
        iVar3 = 2;
        param_3[1] = param_4[1];
        __s = param_3 + 2;
      }
      else {
LAB_001dd4b8:
        iVar3 = 0;
        __s = param_3;
      }
      goto LAB_001dd4bc;
    }
  }
  __s = param_3 + 1;
  *param_3 = (byte)uVar2;
  iVar3 = 1;
LAB_001dd4bc:
  memset(__s,param_2,__n);
  memcpy(__s + __n,param_4 + iVar3,param_6 - iVar3);
  return;
}


