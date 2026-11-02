/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fc94  Symbol: FUN_0018fc94 */

int * FUN_0018fc94(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = DAT_0018fcfc + 0x18fca0;
  piVar3 = (int *)(iVar4 + DAT_0018fd00);
  if (*piVar3 == 0) {
    iVar2 = piVar3[1];
    if (iVar2 < 0xf) {
      piVar3[iVar2 * 4 + 2] = iVar4 + DAT_0018fd04;
      piVar3[iVar2 * 4 + 3] = iVar4 + DAT_0018fd08;
      piVar3[iVar2 * 4 + 4] = iVar4 + DAT_0018fd0c;
      piVar3[iVar2 * 4 + 5] = iVar4 + DAT_0018fd10;
      *piVar3 = 1;
      piVar3[1] = iVar2 + 1;
    }
    *(undefined4 *)(iVar4 + DAT_0018fd00) = 1;
  }
  piVar3 = (int *)0x0;
  if ((param_1 != 0) &&
     (piVar3 = (int *)FUN_0018fb60(param_2), iVar1 = DAT_0018fd14, iVar2 = DAT_0018fd0c,
     piVar3 != (int *)0x0)) {
    *piVar3 = param_1;
    piVar3[1] = iVar4 + iVar2;
    piVar3[2] = iVar4 + iVar1;
  }
  return piVar3;
}


