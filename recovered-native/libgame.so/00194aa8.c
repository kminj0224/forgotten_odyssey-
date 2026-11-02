/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194aa8  Symbol: FUN_00194aa8 */

void FUN_00194aa8(char *param_1,int param_2,uint *param_3,int param_4)

{
  size_t sVar1;
  int iVar2;
  char *__src;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = DAT_00194c14 + 0x194ab4;
  if (param_3 == (uint *)0x0) {
    return;
  }
  sVar1 = strlen(param_1);
  iVar5 = param_2 - sVar1;
  if (iVar5 < 0x32) goto LAB_00194b9e;
  if (param_4 != 0) {
    strcat(param_1,(char *)(iVar8 + DAT_00194c18));
  }
  uVar6 = *param_3;
  if (uVar6 == 2) {
    if (param_3[6] != 0) {
      iVar2 = FUN_0019c49c();
      iVar3 = DAT_00194c28;
      if (iVar5 <= iVar2 + 9) goto LAB_00194c06;
      strcat(param_1,(char *)param_3[6]);
      strcat(param_1,(char *)(iVar8 + DAT_00194c20));
    }
    iVar2 = FUN_0019c49c(param_3[2]);
    iVar3 = DAT_00194c28;
    if (iVar5 <= iVar2 + 9) goto LAB_00194c06;
    __src = (char *)param_3[2];
    if (__src != (char *)0x0) goto LAB_00194b32;
  }
  else {
    if (2 < uVar6) {
      if (uVar6 == 3) {
        FUN_00194aa8(param_1,param_2,(int *)param_3[3],*(int *)param_3[3] - 3U < 2);
        sVar1 = strlen(param_1);
        iVar5 = param_2 - sVar1;
        if (0x31 < iVar5) {
          strcat(param_1,(char *)(iVar8 + DAT_00194c24));
          piVar4 = (int *)param_3[4];
          iVar5 = *piVar4;
          if (iVar5 == 4) {
LAB_00194bcc:
            uVar7 = 1;
          }
          else {
LAB_00194bc2:
            if ((piVar4[1] != 1) && (iVar5 != 2)) goto LAB_00194bcc;
            uVar7 = 0;
          }
          FUN_00194aa8(param_1,param_2,piVar4,uVar7);
          goto LAB_00194bde;
        }
      }
      else {
        if (uVar6 != 4) goto LAB_00194bde;
        FUN_00194aa8(param_1,param_2,(int *)param_3[3],*(int *)param_3[3] - 3U < 2);
        sVar1 = strlen(param_1);
        iVar5 = param_2 - sVar1;
        if (0x31 < iVar5) {
          strcat(param_1,(char *)(iVar8 + DAT_00194c2c));
          piVar4 = (int *)param_3[4];
          iVar5 = *piVar4;
          if (iVar5 != 3) goto LAB_00194bc2;
          goto LAB_00194bcc;
        }
      }
LAB_00194b9e:
      if (iVar5 < 5) {
        return;
      }
      iVar3 = DAT_00194c28;
      if (param_1[sVar1 - 1] == '.') {
        return;
      }
      goto LAB_00194c06;
    }
    if (uVar6 == 1) {
      __src = (char *)(iVar8 + DAT_00194c1c);
LAB_00194b32:
      strcat(param_1,__src);
    }
  }
LAB_00194bde:
  if (param_4 != 0) {
    strcat(param_1,(char *)(iVar8 + DAT_00194c30));
  }
  uVar6 = param_3[1];
  iVar3 = DAT_00194c38;
  if (((uVar6 != 3) && (iVar3 = DAT_00194c3c, uVar6 != 4)) && (iVar3 = DAT_00194c34, uVar6 != 2)) {
    return;
  }
LAB_00194c06:
  strcat(param_1,(char *)(iVar8 + iVar3));
  return;
}


