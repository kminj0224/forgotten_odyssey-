/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00205784  Symbol: FUN_00205784 */

int * FUN_00205784(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  size_t __n;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  char local_2c [8];
  
  FUN_001d2644(local_2c,param_1,1);
  if (local_2c[0] == '\0') {
    uVar3 = 4;
    goto LAB_002057b8;
  }
  FUN_001ed6f8(param_2,0,*(undefined4 *)(*param_2 + -0xc),0);
  piVar7 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78);
  pbVar9 = (byte *)piVar7[2];
  pbVar4 = (byte *)piVar7[3];
  if (pbVar9 < pbVar4) {
    uVar3 = (uint)*pbVar9;
LAB_00205818:
    uVar8 = 0;
    while (param_3 != uVar3) {
      __n = 0x3ffffffc - uVar8;
      if ((int)pbVar4 - (int)pbVar9 <= (int)__n) {
        __n = (int)pbVar4 - (int)pbVar9;
      }
      if ((int)__n < 2) {
        iVar5 = *param_2;
        iVar1 = *(int *)(iVar5 + -0xc);
        uVar6 = iVar1 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar6) || (0 < *(int *)(iVar5 + -4))) {
          FUN_001ee274(param_2,uVar6);
          iVar5 = *param_2;
          iVar1 = *(int *)(iVar5 + -0xc);
        }
        *(char *)(iVar5 + iVar1) = (char)uVar3;
        iVar1 = *param_2;
        if (iVar1 + -0xc != *(int *)(DAT_00205a70 + 0x205964)) {
          *(undefined4 *)(iVar1 + -4) = 0;
          *(uint *)(iVar1 + -0xc) = uVar6;
          *(undefined *)(iVar1 + uVar6) = 0;
        }
        pbVar4 = (byte *)piVar7[3];
        uVar8 = uVar8 + 1;
        if ((byte *)piVar7[2] < pbVar4) {
          pbVar9 = (byte *)piVar7[2] + 1;
          piVar7[2] = (int)pbVar9;
        }
        else {
          uVar3 = (**(code **)(*piVar7 + 0x28))(piVar7);
          if (uVar3 == 0xffffffff) goto LAB_002058d4;
          pbVar9 = (byte *)piVar7[2];
          pbVar4 = (byte *)piVar7[3];
        }
        if (pbVar4 <= pbVar9) goto LAB_002059a0;
        uVar3 = (uint)*pbVar9;
      }
      else {
        pvVar2 = memchr(pbVar9,param_3,__n);
        if (pvVar2 != (void *)0x0) {
          __n = (int)pvVar2 - (int)pbVar9;
        }
        FUN_001ee484(param_2,pbVar9,__n);
        iVar1 = piVar7[2];
        uVar3 = iVar1 + __n;
        piVar7[2] = uVar3;
        uVar8 = uVar8 + __n;
        if (uVar3 < (uint)piVar7[3]) {
          uVar3 = (uint)*(byte *)(iVar1 + __n);
        }
        else {
LAB_002059a0:
          uVar3 = (**(code **)(*piVar7 + 0x24))(piVar7);
        }
      }
LAB_002058d4:
      if (0x3ffffffb < uVar8) {
        if (uVar3 == 0xffffffff) goto LAB_002058fc;
        if (param_3 != uVar3) {
          uVar3 = 4;
          goto LAB_00205900;
        }
        pbVar9 = (byte *)piVar7[2];
        pbVar4 = (byte *)piVar7[3];
        break;
      }
      if (uVar3 == 0xffffffff) goto LAB_002058fc;
      pbVar9 = (byte *)piVar7[2];
      pbVar4 = (byte *)piVar7[3];
    }
    bVar10 = pbVar9 < pbVar4;
    if (bVar10) {
      pbVar9 = pbVar9 + 1;
    }
    uVar8 = uVar8 + 1;
    if (bVar10) {
      piVar7[2] = (int)pbVar9;
      uVar3 = 0;
    }
    else {
      (**(code **)(*piVar7 + 0x28))(piVar7);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = (**(code **)(*piVar7 + 0x24))(piVar7);
    if (uVar3 != 0xffffffff) {
      pbVar9 = (byte *)piVar7[2];
      pbVar4 = (byte *)piVar7[3];
      goto LAB_00205818;
    }
    uVar8 = 0;
LAB_002058fc:
    uVar3 = 2;
  }
LAB_00205900:
  if (uVar8 == 0) {
    uVar3 = uVar3 | 4;
  }
  else if (uVar3 == 0) {
    return param_1;
  }
LAB_002057b8:
  iVar1 = (int)param_1 + *(int *)(*param_1 + -0xc);
  FUN_001d0d2c(iVar1,uVar3 | *(uint *)(iVar1 + 0x14));
  return param_1;
}


