/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f070  Symbol: FUN_0018f070 */

undefined4 FUN_0018f070(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int **ppiVar6;
  int iVar7;
  int *local_24;
  int *local_20;
  uint local_1c;
  
  iVar7 = DAT_0018f228 + 0x18f07c;
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
                local_20 == (int *)0x0)))))))))) goto LAB_0018f220;
  iVar1 = FUN_0018e83c(param_1,param_2,local_24,local_20);
  ppiVar5 = (int **)(*param_1 + iVar1 * 0x18);
  if (ppiVar5[5] == (int *)0x0) {
    local_1c = 0;
    ppiVar6 = (int **)0x0;
    ppiVar2 = ppiVar5;
LAB_0018f1ca:
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
    if (ppiVar6 != (int **)0x0) {
      *ppiVar6 = (int *)ppiVar2;
    }
    param_1[2] = param_1[2] + 1;
    if (8 < local_1c) {
      FUN_0018ef3c(param_1,param_1[1] << 3);
    }
    uVar4 = 0;
  }
  else {
    if (param_1[3] == 0) {
      local_1c = 0;
      for (; *ppiVar5 != (int *)0x0; ppiVar5 = (int **)*ppiVar5) {
        iVar1 = FUN_0019c30c(ppiVar5[1],param_2);
        if (((iVar1 != 0) && (iVar1 = FUN_0019c30c(ppiVar5[2],local_24), iVar1 != 0)) &&
           (iVar1 = FUN_0019c30c(ppiVar5[3],local_20), iVar1 != 0)) goto LAB_0018f220;
        local_1c = local_1c + 1;
      }
      iVar1 = FUN_0019c30c(ppiVar5[1],param_2);
      if (((iVar1 == 0) || (iVar1 = FUN_0019c30c(ppiVar5[2],local_24), iVar1 == 0)) ||
         (iVar1 = FUN_0019c30c(ppiVar5[3],local_20), iVar1 == 0)) {
LAB_0018f1ba:
        ppiVar2 = (int **)(***(code ***)(iVar7 + DAT_0018f22c))(0x18);
        ppiVar6 = ppiVar5;
        if (ppiVar2 != (int **)0x0) goto LAB_0018f1ca;
      }
    }
    else {
      local_1c = 0;
      while( true ) {
        if ((int **)*ppiVar5 == (int **)0x0) break;
        if (((ppiVar5[1] == param_2) && (ppiVar5[2] == local_24)) && (ppiVar5[3] == local_20))
        goto LAB_0018f220;
        local_1c = local_1c + 1;
        ppiVar5 = (int **)*ppiVar5;
      }
      if (((ppiVar5[1] != param_2) || (ppiVar5[2] != local_24)) || (ppiVar5[3] != local_20))
      goto LAB_0018f1ba;
    }
LAB_0018f220:
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


