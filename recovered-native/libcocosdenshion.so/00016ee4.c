/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016ee4  Symbol: __cxa_begin_catch */

undefined4 __cxa_begin_catch(char *param_1)

{
  char **ppcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  ppcVar1 = (char **)__cxa_get_globals();
  pcVar4 = param_1 + -0x20;
  pcVar5 = *ppcVar1;
  if (((((*param_1 == 'G') && (param_1[1] == 'N')) && (param_1[2] == 'U')) &&
      ((param_1[3] == 'C' && (param_1[4] == 'C')))) &&
     ((param_1[5] == '+' && ((param_1[6] == '+' && ((byte)param_1[7] < 2)))))) {
    iVar2 = *(int *)(param_1 + -0xc);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    pcVar3 = ppcVar1[1];
    *(int *)(param_1 + -0xc) = iVar2 + 1;
    ppcVar1[1] = pcVar3 + -1;
    if (pcVar4 != pcVar5) {
      *(char **)(param_1 + -0x10) = pcVar5;
      *ppcVar1 = pcVar4;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    _Unwind_Complete(param_1);
    return uVar6;
  }
  if (pcVar5 == (char *)0x0) {
    *ppcVar1 = pcVar4;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


