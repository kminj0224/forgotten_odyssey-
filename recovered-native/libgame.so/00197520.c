/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00197520  Symbol: FUN_00197520 */

int FUN_00197520(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *__dest;
  code *pcVar5;
  int iVar6;
  code **ppcVar7;
  char *__src;
  
  iVar6 = DAT_001975d4 + 0x19752c;
  if (param_1 != 0) {
    iVar1 = FUN_001974d0();
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00193d34(param_1);
    if (iVar2 == 0) {
      pcVar5 = *(code **)(*(int *)(iVar6 + DAT_001975d8) + 0x58);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(0,iVar6 + DAT_001975dc);
      }
    }
    else {
      iVar3 = FUN_00190060(iVar2,0,iVar1);
      ppcVar7 = *(code ***)(iVar6 + DAT_001975e0);
      (**ppcVar7)(iVar2);
      if (iVar3 != 0) {
        FUN_0017bfa0(iVar1,iVar3);
        if (param_2 == (char *)0x0) {
          return iVar1;
        }
        __src = (char *)(iVar6 + DAT_001975e8);
        pcVar5 = **(code ***)(iVar6 + DAT_001975e4);
        iVar6 = FUN_0019c49c(__src);
        sVar4 = strlen(param_2);
        __dest = (char *)(*pcVar5)(sVar4 + 1 + iVar6);
        if (__dest == (char *)0x0) {
          return iVar1;
        }
        strcpy(__dest,__src);
        strcat(__dest,param_2);
        FUN_00195f94(iVar1,__dest);
        (**ppcVar7)(__dest);
        return iVar1;
      }
    }
    FUN_00179908(iVar1);
  }
  return 0;
}


