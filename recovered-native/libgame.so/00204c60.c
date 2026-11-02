/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00204c60  Symbol: FUN_00204c60 */

int * FUN_00204c60(int *param_1,undefined *param_2,int param_3,uint param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  undefined *__dest;
  size_t __n;
  void *__s;
  byte local_24 [4];
  
  param_1[1] = 0;
  FUN_001d2644(local_24,param_1);
  uVar5 = (uint)local_24[0];
  __dest = param_2;
  if (uVar5 == 0) {
LAB_00204c9c:
    if (0 < param_3) {
      *__dest = 0;
    }
    if (param_1[1] == 0) {
      uVar5 = uVar5 | 4;
    }
    else if (uVar5 == 0) {
      return param_1;
    }
    iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
    FUN_001d0d2c(iVar1,uVar5 | *(uint *)(iVar1 + 0x14));
    return param_1;
  }
  piVar8 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78);
  pbVar6 = (byte *)piVar8[2];
  if ((byte *)piVar8[3] <= pbVar6) goto LAB_00204e2c;
LAB_00204d08:
  uVar5 = (uint)*pbVar6;
LAB_00204d0c:
  do {
    iVar1 = param_1[1];
    __dest = param_2;
LAB_00204d10:
    if (param_3 <= iVar1 + 1) {
      if (uVar5 == 0xffffffff) {
LAB_00204df4:
        uVar5 = 2;
      }
      else if (param_4 == uVar5) {
LAB_00204d30:
        uVar7 = piVar8[2];
        uVar5 = piVar8[3];
        param_1[1] = iVar1 + 1;
        if (uVar7 < uVar5) {
          piVar8[2] = uVar7 + 1;
          uVar5 = 0;
        }
        else {
          (**(code **)(*piVar8 + 0x28))(piVar8);
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 4;
      }
      goto LAB_00204c9c;
    }
    if (uVar5 == 0xffffffff) goto LAB_00204df4;
    if (uVar5 == param_4) goto LAB_00204d30;
    __s = (void *)piVar8[2];
    __n = (param_3 - iVar1) - 1;
    if (piVar8[3] - (int)__s <= (int)__n) {
      __n = piVar8[3] - (int)__s;
    }
    if (1 < (int)__n) {
      pvVar2 = memchr(__s,param_4,__n);
      if (pvVar2 != (void *)0x0) {
        __n = (int)pvVar2 - (int)__s;
      }
      memcpy(__dest,__s,__n);
      iVar3 = piVar8[2];
      uVar5 = piVar8[3];
      uVar7 = iVar3 + __n;
      iVar1 = __n + param_1[1];
      piVar8[2] = uVar7;
      param_2 = __dest + __n;
      param_1[1] = iVar1;
      if (uVar5 <= uVar7) goto LAB_00204e2c;
      uVar5 = (uint)*(byte *)(iVar3 + __n);
      __dest = param_2;
      goto LAB_00204d10;
    }
    param_2 = __dest + 1;
    *__dest = (char)uVar5;
    pbVar6 = (byte *)piVar8[2];
    pbVar4 = (byte *)piVar8[3];
    param_1[1] = param_1[1] + 1;
    if (pbVar6 < pbVar4) {
      pbVar6 = pbVar6 + 1;
      piVar8[2] = (int)pbVar6;
    }
    else {
      uVar5 = (**(code **)(*piVar8 + 0x28))(piVar8);
      if (uVar5 == 0xffffffff) goto LAB_00204d0c;
      pbVar6 = (byte *)piVar8[2];
      pbVar4 = (byte *)piVar8[3];
    }
    if (pbVar6 < pbVar4) goto LAB_00204d08;
LAB_00204e2c:
    uVar5 = (**(code **)(*piVar8 + 0x24))(piVar8);
  } while( true );
}


