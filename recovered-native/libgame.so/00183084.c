/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00183084  Symbol: FUN_00183084 */

int FUN_00183084(int *param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char *local_1c [2];
  
  iVar5 = DAT_00183174 + 0x183090;
  if (((param_2 != (char **)0x0) && (local_1c[0] = *param_2, local_1c[0] != (char *)0x0)) &&
     (*local_1c[0] == '%')) {
    local_1c[0] = local_1c[0] + 1;
    iVar2 = FUN_0017d3f8(param_1,local_1c);
    iVar3 = DAT_0018317c;
    if (iVar2 == 0) {
      FUN_0017bae0(param_1,0x44,iVar5 + DAT_00183178);
    }
    else {
      if (*local_1c[0] == ';') {
        local_1c[0] = local_1c[0] + 1;
        param_1[0x6e] = param_1[0x6e] + 1;
        if (((*param_1 == 0) || (pcVar4 = *(code **)(*param_1 + 0x60), pcVar4 == (code *)0x0)) ||
           (iVar3 = (*pcVar4)(param_1[1],iVar2), iVar3 == 0)) {
          if ((param_1[7] == 1) || ((param_1[0x16] == 0 && (param_1[0x17] == 0)))) {
            FUN_0017b798(param_1,0x1a,iVar5 + DAT_00183180,iVar2);
          }
          else {
            FUN_0017dcec(param_1,0x1b,iVar5 + DAT_00183180,iVar2);
            param_1[0x19] = 0;
          }
          iVar3 = 0;
        }
        else if (1 < *(int *)(iVar3 + 0x30) - 4U) {
          FUN_0017dcec(param_1,0x1b,iVar5 + DAT_00183184,iVar2);
        }
        iVar1 = DAT_0018317c;
        param_1[0x17] = 1;
        (***(code ***)(iVar5 + iVar1))(iVar2);
        *param_2 = local_1c[0];
        return iVar3;
      }
      FUN_0017b7fc(param_1,0x17,0);
      (***(code ***)(iVar5 + iVar3))(iVar2);
    }
    *param_2 = local_1c[0];
  }
  return 0;
}


