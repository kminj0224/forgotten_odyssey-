/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208674  Symbol: FUN_00208674 */

int * FUN_00208674(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char local_1c [4];
  
  if (param_2 == 1) {
    param_1 = (int *)FUN_001d5860();
  }
  else {
    param_1[1] = 0;
    FUN_001d4f84(local_1c,param_1,1);
    if ((0 < param_2) && (local_1c[0] != '\0')) {
      piVar6 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c);
      if ((int *)piVar6[2] < (int *)piVar6[3]) {
        iVar2 = *(int *)piVar6[2];
      }
      else {
        iVar2 = (**(code **)(*piVar6 + 0x24))(piVar6);
      }
      iVar5 = param_1[1];
      bVar1 = false;
      do {
        while( true ) {
          while ((param_2 <= iVar5 || (iVar2 == -1))) {
            if ((param_2 != 0x7fffffff) || (iVar2 == -1)) {
              if (bVar1) {
                param_1[1] = 0x7fffffff;
              }
              if (iVar2 != -1) {
                return param_1;
              }
              iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
              FUN_001d1404(iVar2,*(uint *)(iVar2 + 0x14) | 2);
              return param_1;
            }
            param_1[1] = -0x80000000;
            iVar5 = -0x80000000;
            bVar1 = true;
          }
          piVar3 = (int *)piVar6[3];
          piVar4 = (int *)piVar6[2];
          iVar7 = param_2 - iVar5;
          iVar2 = (int)piVar3 - (int)piVar4 >> 2;
          if (iVar2 <= iVar7) {
            iVar7 = iVar2;
          }
          if (iVar7 < 2) break;
          iVar5 = iVar5 + iVar7;
          piVar6[2] = (int)(piVar4 + iVar7);
          param_1[1] = iVar5;
          if (piVar4 + iVar7 < piVar3) {
            iVar2 = piVar4[iVar7];
          }
          else {
LAB_0020873c:
            iVar2 = (**(code **)(*piVar6 + 0x24))(piVar6);
LAB_0020874c:
            iVar5 = param_1[1];
          }
        }
        param_1[1] = iVar5 + 1;
        if (piVar4 < piVar3) {
          iVar2 = *piVar4;
          piVar6[2] = (int)(piVar4 + 1);
        }
        else {
          iVar2 = (**(code **)(*piVar6 + 0x28))(piVar6);
        }
        if (iVar2 == -1) goto LAB_0020874c;
        if ((int *)piVar6[3] <= (int *)piVar6[2]) goto LAB_0020873c;
        iVar2 = *(int *)piVar6[2];
        iVar5 = param_1[1];
      } while( true );
    }
  }
  return param_1;
}


