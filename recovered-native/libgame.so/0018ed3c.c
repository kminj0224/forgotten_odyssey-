/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ed3c  Symbol: FUN_0018ed3c */

undefined4
FUN_0018ed3c(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,code *param_6)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int **ppiVar6;
  int *local_24;
  int *local_20;
  
  iVar5 = DAT_0018ef0c + 0x18ed48;
  if (((param_2 == (int *)0x0) || (param_1 == (int *)0x0)) ||
     ((local_24 = param_3, local_20 = param_4, param_1[3] != 0 &&
      ((((iVar1 = FUN_0019ccb4(), iVar1 == 0 &&
         (param_2 = (int *)FUN_0019d178(param_1[3],param_2,0xffffffff), param_2 == (int *)0x0)) ||
        ((param_3 != (int *)0x0 &&
         ((iVar1 = FUN_0019ccb4(param_1[3]), iVar1 == 0 &&
          (local_24 = (int *)FUN_0019d178(param_1[3],param_3,0xffffffff), local_24 == (int *)0x0))))
        )) || ((param_4 != (int *)0x0 &&
               ((iVar1 = FUN_0019ccb4(param_1[3],param_4), iVar1 == 0 &&
                (local_20 = (int *)FUN_0019d178(param_1[3],param_4,0xffffffff),
                local_20 == (int *)0x0)))))))))) {
    return 0xffffffff;
  }
  iVar1 = FUN_0018e83c(param_1,param_2,local_24,local_20);
  ppiVar6 = (int **)(*param_1 + iVar1 * 0x18);
  if (ppiVar6[5] == (int *)0x0) {
    ppiVar4 = (int **)0x0;
    ppiVar2 = ppiVar6;
LAB_0018eec0:
    if (param_1[3] == 0) {
      piVar3 = (int *)FUN_0019c904(param_2);
      ppiVar2[1] = piVar3;
      piVar3 = (int *)FUN_0019c904(local_24);
      ppiVar2[2] = piVar3;
      piVar3 = (int *)FUN_0019c904(local_20);
      ppiVar2[3] = piVar3;
    }
    else {
      ppiVar2[1] = param_2;
      ppiVar2[2] = local_24;
      ppiVar2[3] = local_20;
    }
    ppiVar2[4] = param_5;
    *ppiVar2 = (int *)0x0;
    ppiVar2[5] = (int *)0x1;
    param_1[2] = param_1[2] + 1;
    if (ppiVar4 != (int **)0x0) {
      *ppiVar4 = (int *)ppiVar2;
    }
  }
  else {
    ppiVar4 = ppiVar6;
    if (param_1[3] == 0) {
      for (; *ppiVar6 != (int *)0x0; ppiVar6 = (int **)*ppiVar6) {
        iVar1 = FUN_0019c30c(ppiVar6[1],param_2);
        if (((iVar1 != 0) && (iVar1 = FUN_0019c30c(ppiVar6[2],local_24), iVar1 != 0)) &&
           (iVar1 = FUN_0019c30c(ppiVar6[3],local_20), iVar1 != 0)) {
          if (param_6 != (code *)0x0) {
            (*param_6)(ppiVar6[4],ppiVar6[1]);
          }
          ppiVar6[4] = param_5;
          return 0;
        }
      }
      iVar1 = FUN_0019c30c(ppiVar6[1],param_2);
      if (((iVar1 == 0) || (iVar1 = FUN_0019c30c(ppiVar6[2],local_24), iVar1 == 0)) ||
         (iVar1 = FUN_0019c30c(ppiVar6[3],local_20), iVar1 == 0)) {
LAB_0018eeae:
        ppiVar2 = (int **)(***(code ***)(iVar5 + DAT_0018ef10))(0x18);
        ppiVar4 = ppiVar6;
        if (ppiVar2 == (int **)0x0) {
          return 0xffffffff;
        }
        goto LAB_0018eec0;
      }
      if (param_6 != (code *)0x0) {
        piVar3 = ppiVar6[4];
        param_2 = ppiVar6[1];
        goto LAB_0018eea4;
      }
    }
    else {
      do {
        ppiVar6 = ppiVar4;
        ppiVar4 = (int **)*ppiVar6;
        if (ppiVar4 == (int **)0x0) {
          if (((ppiVar6[1] == param_2) && (ppiVar6[2] == local_24)) && (ppiVar6[3] == local_20)) {
            if (param_6 != (code *)0x0) {
              (*param_6)(ppiVar6[4],param_2);
            }
            ppiVar6[4] = param_5;
            return 0;
          }
          goto LAB_0018eeae;
        }
      } while (((ppiVar6[1] != param_2) || (ppiVar6[2] != local_24)) || (ppiVar6[3] != local_20));
      if (param_6 != (code *)0x0) {
        piVar3 = ppiVar6[4];
LAB_0018eea4:
        (*param_6)(piVar3,param_2);
      }
    }
    ppiVar6[4] = param_5;
  }
  return 0;
}


