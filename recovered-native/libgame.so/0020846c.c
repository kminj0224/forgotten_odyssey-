/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0020846c  Symbol: FUN_0020846c */

int * FUN_0020846c(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  char local_1c [4];
  
  if (param_2 == 1) {
    param_1 = (int *)FUN_001d2f04();
  }
  else {
    param_1[1] = 0;
    FUN_001d2644(local_1c,param_1,1);
    if ((0 < param_2) && (local_1c[0] != '\0')) {
      piVar7 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x78);
      if ((byte *)piVar7[2] < (byte *)piVar7[3]) {
        uVar2 = (uint)*(byte *)piVar7[2];
      }
      else {
        uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7);
      }
      iVar6 = param_1[1];
      bVar1 = false;
      do {
        while( true ) {
          while ((param_2 <= iVar6 || (uVar2 == 0xffffffff))) {
            if ((param_2 != 0x7fffffff) || (uVar2 == 0xffffffff)) {
              if (bVar1) {
                param_1[1] = 0x7fffffff;
              }
              if (uVar2 != 0xffffffff) {
                return param_1;
              }
              iVar6 = (int)param_1 + *(int *)(*param_1 + -0xc);
              FUN_001d0d2c(iVar6,*(uint *)(iVar6 + 0x14) | 2);
              return param_1;
            }
            param_1[1] = -0x80000000;
            iVar6 = -0x80000000;
            bVar1 = true;
          }
          pbVar3 = (byte *)piVar7[3];
          pbVar4 = (byte *)piVar7[2];
          iVar8 = param_2 - iVar6;
          if ((int)pbVar3 - (int)pbVar4 <= iVar8) {
            iVar8 = (int)pbVar3 - (int)pbVar4;
          }
          if (iVar8 < 2) break;
          iVar6 = iVar6 + iVar8;
          piVar7[2] = (int)(pbVar4 + iVar8);
          param_1[1] = iVar6;
          if (pbVar4 + iVar8 < pbVar3) {
            uVar2 = (uint)pbVar4[iVar8];
          }
          else {
LAB_00208530:
            uVar2 = (**(code **)(*piVar7 + 0x24))(piVar7);
LAB_00208540:
            iVar6 = param_1[1];
          }
        }
        pbVar5 = pbVar4;
        if (pbVar4 < pbVar3) {
          pbVar5 = pbVar4 + 1;
        }
        param_1[1] = iVar6 + 1;
        if (pbVar3 <= pbVar4) {
          uVar2 = (**(code **)(*piVar7 + 0x28))(piVar7);
          if (uVar2 != 0xffffffff) {
            pbVar5 = (byte *)piVar7[2];
            pbVar3 = (byte *)piVar7[3];
            goto LAB_002085a4;
          }
          goto LAB_00208540;
        }
        piVar7[2] = (int)pbVar5;
LAB_002085a4:
        if (pbVar3 <= pbVar5) goto LAB_00208530;
        uVar2 = (uint)*pbVar5;
        iVar6 = param_1[1];
      } while( true );
    }
  }
  return param_1;
}


